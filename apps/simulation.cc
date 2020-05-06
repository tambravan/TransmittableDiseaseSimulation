// Copyright (c) 2020 [Your Name]. All rights reserved.

#include "simulation.h"

#include <cinder/ImageIo.h>
#include <cinder/Text.h>
#include <cinder/app/App.h>
#include <cinder/gl/draw.h>
#include <cinder/gl/wrapper.h>

#include <sstream>

#include "CinderImGui.h"

namespace simulation {

//Trivial constructor
Simulation::Simulation() = default;

//Sets all initial values needed
void Simulation::setup() {
  //Initialize ImGui
  ImGui::initialize();

  //Set the speed slider to start at 1x
  speed_slider_ = 1;

  //Set the initial r_0 to 5.7 (Covid-19)
  r_0_ = 5.7;

  //The simulation should start paused
  is_paused_ = true;

  //The starting country, controlled by the ListBox of countries
  //Default setting to the first country in the list
  starting_country_ = 0;

  //Get a list of countries from adjusted_vuln_index_
  for (auto& pair : d.adjusted_vuln_index_) {
    countries_.push_back(pair.first.data());
  }

  //Load the worldmap_ from the filepath it is stored at
  worldmap_ = ci::gl::Texture::create(ci::loadImage("resources/worldmap.png"));

  //Load the airport map
  airport_ = ci::gl::Texture::create(ci::loadImage("resources/airport.png"));
}

//Called each time to update infection data
void Simulation::update() {
  //Simulation should only run if it is not paused
  if (!is_paused_) {
    //If the simulation is running, set the speed to the current slider val
    e.SetSpeed(speed_slider_);

    //Update infection counts
    e.UpdateInfections();
  }
}

//Visualize data stored and calculated in data/engine
void Simulation::draw() {
  //Clear board (This is required, otherwise moving the ImGui window
  //Causes issues)
  cinder::gl::clear(cinder::Color(0, 0, 0));

  //Draw the map in white (set color to white)
  ci::gl::color(ci::Color(1, 1, 1));

  //Create bounds for background map image and draw it in cinder
  ci::Rectf map_bounds(0, 0, worldmap_->getWidth() / 3,
                       worldmap_->getHeight() / 3);
  ci::gl::draw(worldmap_, map_bounds);

  //Populate the map with airports
  for (auto port : d.airports) {
    //Port is an array of 2 ints with the airport coords
    //Airports should be 10x10

    //Draw the rectangle for each port's bounds, using the values in port
    ci::Rectf rect(port.at(0),
        port.at(1),
        port.at(0) + kPortWidth, port.at(1) + kPortWidth);

    //Use gl to draw the port
    ci::gl::draw(airport_, rect);
  }

  //Create sliders for the UI
  //Speed slider
  ImGui::SliderFloat("Speed Multiplier", &speed_slider_,
      e.speedmin, e.speedmax);

  //Float slider for R0
  ImGui::SliderFloat(
      "R0 (contagiousness of disease)\nThis cannot be changed during sim",
      &r_0_, e.r0min, e.r0max);

  //Create pause/resume button
  if (ImGui::Button("Start/Pause")) {
    //Only pause if the game has started (initialized properly)
    if (e.has_started) {
      StartPause();
    }
  }

  //Display a text to make the start/pause toggle button clearer
  if (is_paused_) {
    ImGui::Text("Paused");
  } else {
    ImGui::Text("Running");
  }

  //Create listbox for start location using the countries_ vector
  int kCountryBoxHeight = 10;
  ImGui::ListBox("Starting Country", &starting_country_,
      countries_.data(), countries_.size(),kCountryBoxHeight);


  //Display information about selected country underneath the list box

  //Get the selected country and display it's name
  const char* country = countries_[starting_country_];
  ImGui::Text("%s", country);

  //Get the adjusted index and display it with a label
  std::string index_text = "Adjusted Index: "
      + std::to_string(d.adjusted_vuln_index_[country]);
  ImGui::Text("%s", index_text.data());

  //Get the region and display it with a label
  std::string region_label = "Region: " + d.CategorizeLoc(country);
  ImGui::Text("%s", region_label.data());

  //Get the region index and display it with a label
  std::string region_index = "Regional Index (Adjusted): "
      + std::to_string(d.vuln_by_region_.at(
          d.CategorizeLoc(countries_[starting_country_])));
  ImGui::Text("%s", region_index.data());

  //Display the current infections for the selected country
  if (e.has_started) {
    std::string region = d.CategorizeLoc(country);
    float infected = e.regions_.at(region).infected;

    std::stringstream stream;
    stream << "Regional Infections (pct): ";
    stream << std::fixed << std::setprecision(2) << infected * 100 << "%";
    ImGui::Text("%s", stream.str().data());
  }

  //Create Initialize button to set up the engine
  if (ImGui::Button("Initialize/Restart simulation with selected location")) {
    //Pause the game while reinitializing
    is_paused_ = true;

    //Send info to engine about r0 slider and the starting coutnry
    e.SetR0(r_0_);
    e.Begin(country);
  }

  //For each region in the engine, display it's infection rate as an expanding
  //Circle with a color representing infection severity
  //[0, .1] -> green, (.1, .25] -> yellow, (.25, 1] -> red
  for (const auto& pair : e.regions_) {
    //Store the region for more simple accessing
    const auto& region = pair.second;

    //Calculate the color to display
    if (region.infected <= e.concern_thresh) {
        ci::gl::color(ci::Color(0, 1, 0));
    } else if (region.infected <= e.critical_thresh) {
        ci::gl::color(ci::Color(1, 1, 0));
    } else {
        ci::gl::color(ci::Color(1, 0, 0));
    }

    //Draw a border of the circle representing the max infections (1)
    ci::gl::drawStrokedCircle(ci::vec2(region.display_x,
        region.display_y), region.display_size);

    //Draw another concentric circle representing actual infection data
    ci::gl::drawSolidCircle(ci::vec2(region.display_x,
        region.display_y), region.infected * region.display_size);
  }

  //If the simulation has finished, display the world infection rate
  //And pause everything
  if (e.is_finished) {
    float avg_infect = 0;
    for (const auto& pair : e.regions_) {
      avg_infect += pair.second.infected;
    }

    avg_infect = 100 * avg_infect/e.regions_.size();

    std::stringstream stream;

    stream << "Simulation has ended." << std::endl
      << "Average infection rate (world): "
      << std::fixed << std::setprecision(2) << avg_infect << "%";

    std::string end_txt = stream.str();

    ci::gl::color(ci::Color(0, 0, 0));
    ci::TextBox end = ci::TextBox().alignment(ci::TextBox::CENTER).font(
        ci::Font("Times New Roman", 100)).text(end_txt);
    ci::gl::Texture2dRef text = ci::gl::Texture2d::create(end.render());
    ci::gl::draw(text);

    is_paused_ = true;
  }
}

//Pause sim
void Simulation::StartPause() {
  if (!e.is_finished) {
    is_paused_ = !is_paused_;
  }
}

}  // namespace simulation

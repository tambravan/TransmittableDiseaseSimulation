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

Simulation::Simulation() {
  //Set the speed slider to start at 1x
  speed_slider_ = 1;
  //Set the initial r_0 to 5.7 (Covid-19)
  r_0_ = 5.7;
  //The simulation should start paused
  is_paused_ = true;
  //The starting country, controlled by the ListBox of countries
  starting_country_ = 0;
}

void Simulation::setup() {
  //Initialize ImGui
  ImGui::initialize();

  //Get a list of countries from adjusted_vuln_index_
  for (auto& pair : d.adjusted_vuln_index_) {
    countries_.push_back(pair.first.data());
  }

  //Load the worldmap_ from the filepath it is stored at
  //Relative paths did not work here, neither did loadAsset
  worldmap_ = ci::gl::Texture::create(ci::loadImage("resources/worldmap.png"));

  //Load the airport map
  airport_ = ci::gl::Texture::create(ci::loadImage("resources/airport.png"));

  //Set up the engine
  e.PopulateRegions();
  e.has_started = false;
  e.finished = false;
}

void Simulation::update() {
  //Simulation should only run if it is not paused
  if (!is_paused_) {
    e.SetSpeed(speed_slider_);
    e.UpdateInfections();
  }
}

void Simulation::draw() {
  //Clear
  cinder::gl::clear(cinder::Color(0, 0, 0));

  ci::gl::color(ci::Color(1, 1, 1));
  //Create bounds for background map image and draw it in cinder
  ci::Rectf map_bounds(0, 0, worldmap_->getWidth() / 3,
                       worldmap_->getHeight() / 3);
  ci::gl::draw(worldmap_, map_bounds);


  //Populate the map with airports
  for (auto port : d.airports) {
    //Port is an array of 2 ints with the airport coords
    //Airports should be 10x10
    ci::Rectf rect(port.at(0), port.at(1), port.at(0) + port_width, port.at(1) + port_width);
    ci::gl::draw(airport_, rect);
  }

  //Create sliders for the UI
  ImGui::SliderFloat("Speed Multiplier", &speed_slider_, e.speedmin, e.speedmax);
  ImGui::SliderFloat("R0 (contagiousness of disease)\nThis cannot be changed during sim", &r_0_, e.r0min, e.r0max);

  //Create pause/resume button
  if (ImGui::Button("Start/Pause")) {
    if (e.has_started) {
      StartPause();
    }
  }

  if (is_paused_) {
    ImGui::Text("Paused");
  } else {
    ImGui::Text("Running");
  }

  //Create listbox for start location
  ImGui::ListBox("Starting Country", &starting_country_, countries_.data(), countries_.size(),10);

  //Get the selected country and display it along with its vulnerability index
  const char* country = countries_[starting_country_];
  ImGui::Text(country);

  //Get the adjusted index and display it with a label
  std::string index_text = "Adjusted Index: " + std::to_string(d.adjusted_vuln_index_[country]);
  ImGui::Text(index_text.data());

  //Get the region and display it with a label
  std::string region_label = "Region: " + d.CategorizeLoc(country);
  ImGui::Text(region_label.data());

  //Get the region index and display it with a label
  std::string region_index = "Regional Index (Adjusted): " + std::to_string(d.vuln_by_region_.at(d.CategorizeLoc(countries_[starting_country_])));
  ImGui::Text(region_index.data());

  //Display the current infections
  if (e.has_started) {
    std::string region = d.CategorizeLoc(country);
    float infected = e.regions_.at(region).infected;

    std::stringstream stream;
    stream << "Regional Infections: " << std::fixed << std::setprecision(2) << infected * 100 << "%";
    ImGui::Text(stream.str().data());
  }

  //Create start button
  if (ImGui::Button("Initialize/Restart simulation with selected location")) {
    is_paused_ = true;
    e.SetR0(r_0_);
    e.Begin(country);
  }

  for (const auto& pair : e.regions_) {
    auto region = pair.second;
    if (region.infected <= e.concern_thresh) {
        ci::gl::color(ci::Color(0, 1, 0));
    } else if (region.infected <= e.critical_thresh) {
        ci::gl::color(ci::Color(1, 1, 0));
    } else {
        ci::gl::color(ci::Color(1, 0, 0));
    }

    ci::gl::drawStrokedCircle(ci::vec2(region.display_x, region.display_y), region.display_size);
    ci::gl::drawSolidCircle(ci::vec2(region.display_x, region.display_y), region.infected * region.display_size);
  }

  /*
  if (e.finished) {
    float avg_infect = 0;
    for (const auto& pair : e.regions_) {
      avg_infect += pair.second.infected;
    }

    avg_infect = 100 * avg_infect/e.regions_.size();

    std::stringstream stream;

    stream << "Simulation has ended." << std::endl << "Average infection rate (world): " << std::fixed << std::setprecision(2) << avg_infect << "%";

    std::string end_txt = stream.str();

    ci::gl::color(ci::Color(0, 0, 0));
    ci::TextBox end = ci::TextBox().alignment(ci::TextBox::CENTER).font(ci::Font("Times New Roman", 100)).text(end_txt);
    ci::gl::Texture2dRef text = ci::gl::Texture2d::create(end.render());
    ci::gl::draw(text);

    is_paused_ = true;
  }
   */
}

void Simulation::StartPause() {
  if (!e.finished) {
    is_paused_ = !is_paused_;
  }
}

}  // namespace simulation

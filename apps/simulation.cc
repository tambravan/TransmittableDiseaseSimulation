// Copyright (c) 2020 [Your Name]. All rights reserved.

#include "simulation.h"

#include <cinder/ImageIo.h>
#include <cinder/app/App.h>
#include <cinder/gl/draw.h>
#include <cinder/gl/wrapper.h>

#include "CinderImGui.h"
#include "engine.h"

namespace simulation {

using cinder::app::KeyEvent;

Simulation::Simulation() {
  //Set the speed slider to start at 1x
  speed_slider_ = 1;
  //Set the initial r_0 to 5.7 (Covid-19)
  r_0_ = 5.7;
  //Set initial value for medical precations to 5
  med_efforts_ = 5;
  //The simulation should start paused
  is_paused_ = true;

  starting_country_ = 0;
}

void Simulation::setup() {
  //Initialize ImGui
  ImGui::initialize();

  //Populate the data
  d.PopulateVuln();
  d.PopulateAirports();

  //Get a list of countries
  for (auto& pair : d.adjusted_vuln_index_) {
    countries_.push_back(pair.first);
  }

  for (int i = 0; i < countries_.size(); i++) {
    c_ar[i] = countries_[i];
  }

  //memcpy_s(c_ar, 10, country_arr, 10);

  //Load the worldmap_ from the filepath it is stored at
  //Relative paths did not work here, neither did loadAsset
  worldmap_ = ci::gl::Texture::create(ci::loadImage("C:/Users/tejas/Downloads/InternetDownloads/cinder_0.9.2_vc2015/cinder_0.9.2_vc2015/MyProjects/TransmittableDiseaseSimulation/assets/worldmap.png"));

  //Load the airport map
  airport_ = ci::gl::Texture::create(ci::loadImage("C:/Users/tejas/Downloads/InternetDownloads/cinder_0.9.2_vc2015/cinder_0.9.2_vc2015/MyProjects/TransmittableDiseaseSimulation/assets/airport.png"));
}

void Simulation::update() {
  //Simulation should only run if it is not paused
  if (!is_paused_) {
    //Run the simulation
  }
}

void Simulation::draw() {
  //Clear
  cinder::gl::clear(cinder::Color(0, 0, 0));

  //Create bounds for background map image and draw it in cinder
  ci::Rectf map_bounds(0, 0, worldmap_->getWidth() / 3,
                       worldmap_->getHeight() / 3);
  ci::gl::draw(worldmap_, map_bounds);


  //Populate the map with airports
  for (auto port : d.airports) {
    ci::Rectf rect(port.at(0), port.at(1), port.at(2), port.at(3));
    ci::gl::draw(airport_, rect);
  }

  //Create sliders for the UI
  ImGui::SliderFloat("Speed Multiplier", &speed_slider_, .25, 2);
  ImGui::SliderFloat("R0 (contagiousness of disease)", &r_0_, .5, 10);
  ImGui::SliderInt("Medical research and precaution", &med_efforts_, 1, 10);

  //Create pause/resume button
  if (ImGui::Button("Start/Pause")) {
    StartPause();
  }

  //Create listbox for start location
  //ImGui::ListBox("Starting Country", &starting_country_, c_ar, countries_.size(),8);

  //Get the selected country and display it along with its vulnerability index
  //char* country = countries_[starting_country_];
  //ImGui::Text(country);
  //ImGui::Text(std::to_string(d.adjusted_vuln_index_[country]).data());

  //Create start button
  if (ImGui::Button("Initialize/Restart game with selected location")) {
    //engine::Begin(country);
  }
}

void Simulation::StartPause() {
  is_paused_ = !is_paused_;
}

void Simulation::keyDown(KeyEvent event) { }

}  // namespace simulation

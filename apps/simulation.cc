// Copyright (c) 2020 [Your Name]. All rights reserved.

#include "simulation.h"

#include <cinder/ImageIo.h>
#include <cinder/app/App.h>
#include <cinder/gl/draw.h>
#include <cinder/gl/wrapper.h>

#include <vector>

#include "CinderImGui.h"

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
}

void Simulation::setup() {
  //Initialize ImGui
  ImGui::initialize();

  //Populate the data
  d.PopulateVuln();
  d.PopulateAirports();

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


  for (auto port : d.airports) {
    ci::Rectf rect(port.at(0), port.at(1), port.at(2), port.at(3));
    ci::gl::draw(airport_, rect);
  }

  //Draw Airports
  //ci::Rectf ord(235, 200, 245, 210);
  //ci::gl::draw(airport_, ord);
  ci::Rectf jfk(291, 204, 301, 214);
  ci::gl::draw(airport_, jfk);
  ci::Rectf atl(252, 243, 262, 253);
  ci::gl::draw(airport_, atl);
  ci::Rectf pek(1101, 204, 1111, 214);
  ci::gl::draw(airport_, pek);
  ci::Rectf lax(93, 235, 103, 245);
  ci::gl::draw(airport_, lax);
  ci::Rectf hnd(1207, 220, 1217, 230);
  ci::gl::draw(airport_, hnd);
  ci::Rectf dxb(848, 288, 858, 298);
  ci::gl::draw(airport_, dxb);
  ci::Rectf lhr(608, 141, 618, 151);
  ci::gl::draw(airport_, lhr);
  ci::Rectf pvg(1136, 250, 1146, 260);
  ci::gl::draw(airport_, pvg);
  ci::Rectf cdg(623, 161, 633, 171);
  ci::gl::draw(airport_, cdg);



  //Create sliders for the UI
  ImGui::SliderFloat("Speed Multiplier", &speed_slider_, .25, 2);
  ImGui::SliderFloat("R0 (contagiousness of disease)", &r_0_, .5, 10);
  ImGui::SliderInt("Medical research and precaution", &med_efforts_, 1, 10);

  //Create pause/resume button
  if (ImGui::Button("Start/Pause")) {
    PauseGame();
  }
}

void Simulation::PauseGame() {
  is_paused_ = !is_paused_;
}

void Simulation::keyDown(KeyEvent event) { }

}  // namespace simulation

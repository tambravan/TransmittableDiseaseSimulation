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
}

void Simulation::setup() {
  //Initialize ImGui
  ImGui::initialize();

  //Load the worldmap_ from the filepath it is stored at
  //Relative paths did not work here, neither did loadAsset
  worldmap_ = cinder::gl::Texture::create(cinder::loadImage("C:/Users/tejas/Downloads/InternetDownloads/cinder_0.9.2_vc2015/cinder_0.9.2_vc2015/MyProjects/TransmittableDiseaseSimulation/assets/worldmap.png"));
}

void Simulation::update() {

}

void Simulation::draw() {
  //Clear the UI
  cinder::gl::clear(cinder::Color(0, 0, 0));

  //Create bounds for background map image and draw it in cinder
  ci::Rectf map_bounds(0, 0, worldmap_->getWidth() / 3,
                       worldmap_->getHeight() / 3);
  ci::gl::draw(worldmap_, map_bounds);

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

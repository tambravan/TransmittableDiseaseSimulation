// Copyright (c) 2020 [Your Name]. All rights reserved.

#include "my_app.h"

#include <cinder/app/App.h>
#include <cinder/gl/draw.h>
#include <cinder/gl/wrapper.h>
#include <cinder/ImageIo.h>

#include <vector>

#include "CinderImGui.h"

namespace myapp {

using cinder::app::KeyEvent;

MyApp::MyApp() {
  speed_slider_ = 1;
}

void MyApp::setup() {
  ImGui::initialize();
  worldmap = cinder::gl::Texture::create(cinder::loadImage("C:/Users/tejas/Downloads/InternetDownloads/cinder_0.9.2_vc2015/cinder_0.9.2_vc2015/MyProjects/TransmittableDiseaseSimulation/assets/worldmap.png"));
}

void MyApp::update() {

}

void MyApp::draw() {
  cinder::gl::clear(cinder::Color(0, 0, 0));
  ImGui::SliderFloat("Speed Multiplier", &speed_slider_, .25, 2);
  ci::Rectf map_bounds(0, 0, worldmap->getWidth() / 3, worldmap->getHeight() / 3);
  ci::gl::draw(worldmap, map_bounds);
}

void MyApp::keyDown(KeyEvent event) { }

}  // namespace myapp

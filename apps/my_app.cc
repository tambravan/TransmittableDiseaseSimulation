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
  gamespeed_slider_ = 1;
}

void MyApp::setup() {
  ImGui::initialize();
  //worldmap = cinder::gl::Texture::create(cinder::loadImage("assets/worldmap.png"));
}

void MyApp::update() {

}

void MyApp::draw() {
  cinder::gl::clear(cinder::Color(0, 0, 0));
  ImGui::SliderFloat("Game Speed Multiplier", &gamespeed_slider_, .25, 2);
  //cinder::gl::draw(worldmap, getWindowBounds());
}

void MyApp::keyDown(KeyEvent event) { }

}  // namespace myapp

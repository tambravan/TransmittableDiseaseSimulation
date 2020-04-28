// Copyright (c) 2020 CS126SP20. All rights reserved.

#ifndef FINALPROJECT_APPS_MYAPP_H_
#define FINALPROJECT_APPS_MYAPP_H_

#include <cinder/app/App.h>
#include "CinderImGui.h"
#include "cinder/ImageIo.h"
#include <cinder/gl/Texture.h>

#include "data.h"

using namespace cinder::gl;

namespace simulation {

class Simulation : public cinder::app::App {
 public:
  Simulation();
  void setup() override;
  void update() override;
  void draw() override;
  void keyDown(cinder::app::KeyEvent) override;
  //Pauses the simulation, handler for the start/pause button
  void PauseGame();

 private:
  //Texture for the worldmap_ drawn in background
  ci::gl::TextureRef worldmap_;
  //Texture for airport logos
  ci::gl::TextureRef airport_;
  //R0 value for the disease
  float r_0_;
  //Slider to accelerate or slow down simulation speed
  float speed_slider_;
  //Medical efforts score
  int med_efforts_;
  //Bool representing if the game is paused
  bool is_paused_;

  data::Data d;


};

}  // namespace simulation

#endif  // FINALPROJECT_APPS_MYAPP_H_

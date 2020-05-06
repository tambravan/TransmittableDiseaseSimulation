// Copyright (c) 2020 CS126SP20. All rights reserved.

#ifndef FINALPROJECT_APPS_MYAPP_H_
#define FINALPROJECT_APPS_MYAPP_H_

#include <cinder/app/App.h>
#include "CinderImGui.h"
#include "cinder/ImageIo.h"
#include <cinder/gl/Texture.h>

#include "engine.h"
#include "data.h"

namespace simulation {

//Class simulation, this is provided to us in the  cinder framework
class Simulation : public cinder::app::App {
 public:
  //Default constructor
  Simulation();

  //Setup initializes fields such as the initial positions of sliders,
  //As well as populates data and initializes ImGui
  void setup() override;

  //Update is repeatedly called, and this takes care of updating all values
  //Such as infection counts, infected countries, pausing the sim
  void update() override;

  //Draw draws out the map, heatmap, and all factors in the Gui. Also
  //Called repeatedly
  void draw() override;

  //Pauses the simulation, handler for the start/pause button
  void StartPause();

 private:
  //Texture for the worldmap_ drawn in background
  ci::gl::TextureRef worldmap_;

  //Texture for airport logos
  ci::gl::TextureRef airport_;

  //R0 value for the disease (controlled by ImGui slider)
  float r_0_;

  //Slider to accelerate or slow down simulation speed (ImGui)
  float speed_slider_;

  //Bool representing if the sim is paused
  bool is_paused_;

  //Int representing the starting country selected (ImGui listbox)
  int starting_country_;

  //Instance of the Data class with all the airport/index data
  data::Data d;

  //Countries vector - note char* instead of std::string due to ImGui
  //Compatibility issues with std
  std::vector<const char*> countries_;

  //Engine instance
  engine::Engine e;

  //Represents the width of airports to be drawn
  int kPortWidth = 10;
};

}  // namespace simulation

#endif  // FINALPROJECT_APPS_MYAPP_H_

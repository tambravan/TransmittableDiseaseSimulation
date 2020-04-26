// Copyright (c) 2020 CS126SP20. All rights reserved.

#ifndef FINALPROJECT_APPS_MYAPP_H_
#define FINALPROJECT_APPS_MYAPP_H_

#include <cinder/app/App.h>
#include "CinderImGui.h"
#include "cinder/ImageIo.h"
#include <cinder/gl/Texture.h>

using namespace cinder::gl;

namespace myapp {

class MyApp : public cinder::app::App {
 public:
  MyApp();
  void setup() override;
  void update() override;
  void draw() override;
  void keyDown(cinder::app::KeyEvent) override;

 private:
  float speed_slider_;
  ci::gl::TextureRef worldmap;
};

}  // namespace myapp

#endif  // FINALPROJECT_APPS_MYAPP_H_

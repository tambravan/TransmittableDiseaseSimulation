// Copyright (c) 2020 [Your Name]. All rights reserved.

#include <cinder/app/App.h>
#include <cinder/app/RendererGl.h>

#include "simulation.h"

using cinder::app::App;
using cinder::app::RendererGl;


namespace simulation {

const int kSamples = 8;
const int kWidth = 800;
const int kHeight = 800;

void SetUp(App::Settings* settings) {
  settings->setWindowSize(kWidth, kHeight);
  settings->setTitle("My CS 126 Application");
}

}  // namespace simulation


// This is a macro that runs the application.
CINDER_APP(simulation::Simulation,
           RendererGl(RendererGl::Options().msaa(simulation::kSamples)),
           simulation::SetUp)

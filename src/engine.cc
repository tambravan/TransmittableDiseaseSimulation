//
// Created by tejas on 4/28/2020.
//

#include "engine.h"

#include <iostream>

namespace engine {

void engine::Engine::Begin(std::string startloc) {

  std::string start(startloc);

  start_loc = d.CategorizeLoc(start);
}

void engine::Engine::PopulateRegions() {
  //Fill the map with blank regions
  for (auto& pair : d.vuln_by_region_) {
    auto* r = new Region;
    regions_.insert(std::pair<std::string, engine::Region>(pair.first, *r));
  }

  //Populate the indices from d.vuln_by_region
  for (auto& pair : regions_) {
    pair.second.reg_index = d.vuln_by_region_.at(pair.first);
    pair.second.infected = 0;
  }


  SetRegionDetails("Canada", 200, 115, 40);
  SetRegionDetails("United States", 200, 215, 40);
  SetRegionDetails("Mexico", 160, 310, 30);
  SetRegionDetails("Central America", 225, 355, 25);
  SetRegionDetails("Caribbean", 275, 322, 25);
  SetRegionDetails("Brazil", 384, 475, 38);
  SetRegionDetails("Southern South America", 335, 615, 36);
  SetRegionDetails("Western South America", 260, 455, 28);
  SetRegionDetails("Northern South America", 295, 385, 25);
  SetRegionDetails("Southern Africa", 720, 525, 45);

  SetRegionDetails("Western Africa", 600, 335, 45);
  SetRegionDetails("Central Africa", 708, 425, 43);
  SetRegionDetails("North Africa", 740, 330, 45);
  SetRegionDetails("Middle East", 810, 285, 33);
  SetRegionDetails("Iran", 855, 247, 24);
  SetRegionDetails("Pakistan Area", 910, 250, 22);
  SetRegionDetails("India Area", 970, 300, 33);
  SetRegionDetails("Stans", 890, 180, 30);
  SetRegionDetails("Southeast Asia", 1065, 345, 28);
  SetRegionDetails("Indonesia Area", 1180, 415, 45);

  SetRegionDetails("Australia Area", 1225, 560, 45);
  SetRegionDetails("China Area", 1080, 230, 45);
  SetRegionDetails("Japan", 1200, 220, 25);
  SetRegionDetails("Russia Area", 800, 120, 45);
  SetRegionDetails("Spain Area", 595, 210, 20);
  SetRegionDetails("France Area", 625, 180, 20);
  SetRegionDetails("UK", 600, 140, 20);
  SetRegionDetails("Scandinavia", 680, 100, 30);
  SetRegionDetails("Italy Area", 670, 205, 15);
  SetRegionDetails("Germany Area", 670, 150, 15);

  SetRegionDetails("Central Europe", 693, 177, 13);
  SetRegionDetails("Ukraine Area", 730, 150, 17);
  SetRegionDetails("Eastern Europe", 715, 197, 13);
  SetRegionDetails("Turkey", 760, 215, 22);
}
void Engine::SetSliders(float set_r0, float set_speed) {
  r0 = set_r0;
  speed = set_speed;
}
void Engine::SetRegionDetails(const std::string& region, int x, int y, int size) {
  regions_.at(region).display_x = x;
  regions_.at(region).display_y = y;
  regions_.at(region).display_size = size;
}

Region::Region() = default;

}
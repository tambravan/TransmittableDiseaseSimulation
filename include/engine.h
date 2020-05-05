//
// Created by tejas on 4/28/2020.
//

#ifndef FINALPROJECT_ENGINE_H
#define FINALPROJECT_ENGINE_H

#include <string>

#include "data.h"

namespace engine {
class Region {
 public:
  //Coordinates for where the region's display will go
  int display_x;
  int display_y;

  //Size of the display (probably a number)
  float display_size;

  //The regional index for the region
  float reg_index;

  //Percent of the population that has been infected (0 to 1)
  float infected;

  float max_infect;

  //Continent of region
  std::string continent;

  //Default constructor
  Region();


};

class Engine {
  //Instance of the data class
  data::Data d;

  //Starting location
  std::string start_loc;

  //Sliders for factors set in the UI
  float r0;
  float speed;

  //List of infected continents
  std::vector<std::string> infected_conts_;

  static constexpr int kCureChance = 4000;
  static constexpr int kInfectionChance = 4000;

  //Sets region details given inputs
  void SetRegionDetails(const std::string& region, int x, int y, int size, const std::string& cont);

  float LogisticGrowth(const Region& r);

  //Map of previous regions
  std::map<std::string, engine::Region> prev_regions_;

  void PopulateMax();

 public:
  //Method that is called when the game starts. This sets the starting location
  //And resets other factors
  void Begin(const std::string& start_loc);

  //Map of strings to regions for each region
  std::map<std::string, engine::Region> regions_;

  //Populates the regions_ map
  void PopulateRegions();

  //Sets the factors that are changed from the UI
  void SetSpeed(float set_speed);

  //Updates the infected numbers
  void UpdateInfections();

  void SetR0(float set_r0);

  //Represents whether or not the simulation has been initialized
  bool has_started;

  bool finished;
};
}
#endif  // FINALPROJECT_ENGINE_H

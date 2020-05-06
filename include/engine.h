//
// Created by tejas on 4/28/2020.
//

#ifndef FINALPROJECT_ENGINE_H
#define FINALPROJECT_ENGINE_H

#include <string>

#include "data.h"

namespace engine {

//Class region contains data about each region, such as the location
//To display its info, the size, infection counts, index
class Region {
 public:
  //Default constructor
  Region();

  //Coordinates for where the region's display will go (accessed in simulation)
  int display_x;
  int display_y;

  //Size of the display circle in Gui
  float display_size;

  //The regional index for the region
  float reg_index;

  //Percent of the population that has been infected (0 to 1)
  float infected;

  //Calculated taper value of logistic curve
  float max_infect;

  //Continent of region
  std::string continent;
}; //Class region

//Class engine is the core of functionality, calculation infections
//By using data from data class and disease spread equations
class Engine {
 public:
  //Called when the game starts. This sets the starting location
  //And resets other factors (Initialize/Reset button)
  void Begin(const std::string& start_loc);

  //Constructor that initializes bool values (start and finished)
  //As well as populates the regions
  Engine();

  //Map of strings to regions for each region (accessed by simulation)
  std::map<std::string, engine::Region> regions_;

  //Sets the speed factor that is changed from the UI
  void SetSpeed(float set_speed);

  //Updates the infected numbers (called in Update())
  void UpdateInfections();

  //Sets the initial r0 value, called every time a new simulation starts
  void SetR0(float set_r0);

  //Represents whether or not the simulation has been initialized
  bool has_started;

  //Represents whether or not the simulation has ended (steady state reached)
  bool is_finished;

  //Threshold values for when the color of display changes
  float kConcernThresh = .1;
  float kCriticalThresh = .25;

  //Min and max for speed slider
  float kSpeedMax = 2;
  float kSpeedMin = .25;

  //Min and max for r0 slider
  float kR0Min = .5;
  float kR0Max = 10;

 private:
  //Populates the regions_ map, called in constructor
  void PopulateRegions();

  //Instance of the data class
  data::Data d;

  //Starting location
  std::string start_loc;

  //Sliders for factors set in the UI
  float r0;
  float speed;

  //List of infected continents
  std::vector<std::string> infected_conts_;

  //Represents the cure chance or infection spread chance
  static constexpr int kCureChance = 2000;
  static constexpr int kInfectionChance = 2500;

  //R0 multiplier (to make the simulation more readable)
  float kR0Multiplier = .1;

  //T step (time step for modeling equation growth)
  float t_step = .0000001;

  //Cure threshold (probability for country to cure)
  float kCureThresh = .005;

  //Factor by which diseases will spread to a new continent
  int kNewContMult = 20;

  //Constant for percentage calculations
  int kPctMult = 100;

  //Sets region details given inputs
  void SetRegionDetails(const std::string& region,
      int x, int y, int size, const std::string& cont);

  //Core of logistic growth. Takes a region r,
  //Finds its infection rate, uses inverse of equation to get time,
  //Adds time step, and then calculates new infection value on curve
  float LogisticGrowth(const Region& r);

  //Map of previous regions
  std::map<std::string, engine::Region> prev_regions_;

  //Calculates and populates max_infect values
  void PopulateMax();

  //Starting infection percentage of each country (.01%)
  float kY0 = .0001;
}; //Class engine

} //Namespace engine

#endif  // FINALPROJECT_ENGINE_H

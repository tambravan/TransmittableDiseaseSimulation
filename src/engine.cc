//
// Created by tejas on 4/28/2020.
//

#include "engine.h"

#include <iostream>
#include <ctgmath>

namespace engine {

void engine::Engine::Begin(const std::string& startloc) {
  //Set the start location again
  start_loc = d.CategorizeLoc(startloc);

  has_started = true;

  //Reset infected counts
  for (auto& pair : regions_) {
    pair.second.infected = 0;
  }

  //Clear infected continents
  infected_conts_.clear();

  //Set the start location to have .1% infected
  regions_.at(start_loc).infected = 0.001;
  infected_conts_.push_back(regions_.at(start_loc).continent);
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


  SetRegionDetails("Canada", 200, 115, 40, "NA");
  SetRegionDetails("United States", 200, 215, 40, "NA");
  SetRegionDetails("Mexico", 160, 310, 30, "NA");
  SetRegionDetails("Central America", 225, 355, 25, "NA");
  SetRegionDetails("Caribbean", 275, 322, 25, "NA");
  SetRegionDetails("Brazil", 384, 475, 38, "SA");
  SetRegionDetails("Southern South America", 335, 615, 36, "SA");
  SetRegionDetails("Western South America", 260, 455, 28, "SA");
  SetRegionDetails("Northern South America", 295, 385, 25, "SA");
  SetRegionDetails("Southern Africa", 720, 525, 45, "AF");

  SetRegionDetails("Western Africa", 600, 335, 45, "AF");
  SetRegionDetails("Central Africa", 708, 425, 43, "AF");
  SetRegionDetails("North Africa", 740, 330, 45, "AF");
  SetRegionDetails("Middle East", 810, 285, 33, "AS");
  SetRegionDetails("Iran", 855, 247, 24, "AS");
  SetRegionDetails("Pakistan Area", 910, 250, 22, "AS");
  SetRegionDetails("India Area", 970, 300, 33, "AS");
  SetRegionDetails("Stans", 890, 180, 30, "AS");
  SetRegionDetails("Southeast Asia", 1065, 345, 28, "AS");
  SetRegionDetails("Indonesia Area", 1180, 415, 45, "AS");

  SetRegionDetails("Australia Area", 1225, 560, 45, "AU");
  SetRegionDetails("China Area", 1080, 230, 45, "AS");
  SetRegionDetails("Japan", 1200, 220, 25, "AS");
  SetRegionDetails("Russia Area", 800, 120, 45, "EU");
  SetRegionDetails("Spain Area", 595, 210, 20, "EU");
  SetRegionDetails("France Area", 625, 180, 20, "EU");
  SetRegionDetails("UK", 600, 140, 20, "EU");
  SetRegionDetails("Scandinavia", 680, 100, 30, "EU");
  SetRegionDetails("Italy Area", 670, 205, 15, "EU");
  SetRegionDetails("Germany Area", 670, 150, 15, "EU");

  SetRegionDetails("Central Europe", 693, 177, 13, "EU");
  SetRegionDetails("Ukraine Area", 730, 150, 17, "EU");
  SetRegionDetails("Eastern Europe", 715, 197, 13, "EU");
  SetRegionDetails("Turkey", 760, 215, 22, "EU");
}
void Engine::SetSliders(float set_r0, float set_speed) {
  r0 = set_r0;
  speed = set_speed;
}
void Engine::SetRegionDetails(const std::string& region, int x, int y, int size, const std::string& cont) {
  regions_.at(region).display_x = x;
  regions_.at(region).display_y = y;
  regions_.at(region).display_size = size;
  regions_.at(region).continent = cont;
}

float Engine::LogisticGrowth(const Region& r) {
  float reg_index = r.reg_index;
  float infected = r.infected;

  if (infected <= 0) {
    return 0;
  }

  //Logistic Equation modeled from http://www.sci.wsu.edu/math/faculty/hudelson/logisticlesson.html

  float new_infected;

  float x = -1 * log(1/(infected * (1/(.001) - 1) * speed * reg_index))/r0;

  float y = 1/(1 + (1/.001 - 1)*pow(exp(1.0),(-1*reg_index*(x + 1))));

  return y * speed * (1-reg_index);
}

void Engine::UpdateInfections() {
  prev_regions_ = regions_;
  for (auto& pair : regions_) {
    if (pair.second.infected == 0) {
      float infection_chance = (1 - pair.second.reg_index) * 100; //Number from 25 to 75, lower means better medicine
      //If there is already an infection on the continent, the spread probability goes up
      if (std::count(infected_conts_.begin(), infected_conts_.end(), pair.second.continent) != 0) {
        if (std::rand() % kInfectionChance <= infection_chance) {
          pair.second.infected = .001;
        }
      } else {
        if (std::rand() % (kInfectionChance * 10) <= infection_chance) {
          pair.second.infected = .001;
        }
      }
    } else {
      //Probability that it gets cured
      float cure_index = pair.second.reg_index * 100; //Number from 25 to 75, higher means better medicine in country

      //If a random roll from 1 to kCureChance is less than the index, the country has eradicated disease
      //To be eligible to eradicate, infections must be less than .5%
      if (pair.second.infected <= .005) {
        if (std::rand() % kCureChance <= cure_index) {
          pair.second.infected = 0;
        }
      }

      pair.second.infected = LogisticGrowth(pair.second);
    }

    if (pair.second.infected >= 1) {
      pair.second.infected = 1;
    }
  }

  bool ended = true;
  for (const auto& pair : regions_) {
    if (prev_regions_.at(pair.first).infected != pair.second.infected) {
      ended = false;
    }
  }

  if (ended) {
    exit(5);
  }
}

void Engine::Reset() {
  if (has_started) {
    //Reset infected counts
    for (auto& pair : regions_) {
      pair.second.infected = 0;
    }

    has_started = false;
  }
}

Region::Region() = default;

}
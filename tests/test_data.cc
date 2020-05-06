// Copyright (c) 2020 Tejas Ambravan. All rights reserved.

#define CATCH_CONFIG_MAIN

#include "catch.hpp"

#include "data.h"
#include "engine.h"

data::Data d;

//Check that the vuln index is valid, with every value between 0 and 1
TEST_CASE("Check vuln index validity", "[vuln_index]") {
  bool valid = true;

  for (const auto& pair : d.vuln_index_) {
    if (pair.second < 0 || pair.second > 1) {
      valid = false;
    }
  }

  REQUIRE(valid);
}

//Checks if specifically chosen vuln indices are correct
TEST_CASE("Check vuln index specifics", "[vuln_index]") {
  SECTION("Somalia (Lowest)") {
    std::string country = "Somalia";
    REQUIRE(d.vuln_index_.at(country) == 0.0);
  }

  SECTION("Norway (Highest)") {
    std::string country = "Norway";
    REQUIRE(d.vuln_index_.at(country) == 1.0);
  }

  SECTION("Costa Rica (Random)") {
    std::string country = "Costa Rica";
    REQUIRE(d.vuln_index_.at(country) == .73696f);
  }
}

//Check if the adjusted vuln index is adjusted properly, with every value
//Between 0.25 and 0.75
TEST_CASE("Check adjusted vuln index validity", "[adjusted_vuln_index]") {
  bool valid = true;

  for (const auto& pair : d.adjusted_vuln_index_) {
    if (pair.second < .25f || pair.second > .75f) {
      valid = false;
    }
  }

  REQUIRE(valid);
}

//Check that the adjusted vuln index is adjusted properly, checking
//Specific values
TEST_CASE("Check adjusted vuln index specifics", "[adjusted_vuln_index]") {
  SECTION("Somalia (Lowest)") {
    std::string country = "Somalia";
    REQUIRE(d.adjusted_vuln_index_.at(country) == .25f);
  }

  SECTION("Norway (Highest)") {
    std::string country = "Norway";
    REQUIRE(d.adjusted_vuln_index_.at(country) == .75f);
  }

  SECTION("Costa Rica (Random)") {
    std::string country = "Costa Rica";
    float index = .618480;
    //REQUIRE(d.adjusted_vuln_index_.at(country) == index);
  }
}

//Check if regions are calculated validly (every value between .25 and .75
TEST_CASE("Check adjusted regional index validity", "[regional_index]") {
  bool valid = true;

  for (const auto& pair : d.vuln_by_region_) {
    if (pair.second < .25f || pair.second > .75f) {
      valid = false;
    }
  }

  REQUIRE(valid);
}

//Check that the adjusted vuln index is adjusted properly, checking
//Specific values
TEST_CASE("Check regional vuln index specifics", "[regional_vuln]") {
  SECTION("Australia Area") {
    //REQUIRE(d.vuln_by_region_.at("Australia Area") == .707199f);
  }

  SECTION("Individual Country (Canada)") {
    std::string country = "Norway";
    //REQUIRE(d.vuln_by_region_.at("Canada") == .736700f);
  }
}

//Tests for Engine (Could not get catch2 to work in a different file)

engine::Engine e;

//Check populate regions
TEST_CASE("Popualte regions", "[engine_constructor]") {
  //Require that there are 34 regions, each with nonzero values
  bool is_valid = true;
  for (const auto& pair : e.regions_) {
    if (pair.second.reg_index == 0) {
      is_valid = false;
    }
  }

  REQUIRE(e.regions_.size() == 34 && is_valid);
}

//Check that logistic growth is calculated properly
TEST_CASE("Logistic Growth", "[engine_logistic_growth]") {
  //Create a region and set its factors
  engine::Region& r = e.regions_.at("United States");
  r.infected = .2;
  r.max_infect = .6;
  e.SetR0(3);

  SECTION("Zero") {
    r.infected = 0;
    e.UpdateInfections();
    //REQUIRE(r.infected == 0);
  }

  SECTION("Nonzero") {
    e.UpdateInfections();
    //REQUIRE(r.infected == .36000000431997);
  }
}

//Test steady state is identified properly
TEST_CASE("Steady state", "[engine_steady_state]") {
  //"run" simulation
  while (!e.is_finished) {
    e.UpdateInfections();
  }

  //Store current data
  auto prev_regions = e.regions_;

  //Run update again
  e.UpdateInfections();

  auto new_regions = e.regions_;

  //Check that all the infections are the same
  bool steady = true;
  for (const auto& reg : prev_regions) {
    //If any of the counts dont match up, flag it
    if (reg.second.infected != new_regions.at(reg.first).infected) {
      steady = false;
    }
  }

  //Require that steaddy state is identified
  REQUIRE(steady);
}
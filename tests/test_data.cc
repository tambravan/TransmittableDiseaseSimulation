// Copyright (c) 2020 CS126SP20. All rights reserved.

#define CATCH_CONFIG_MAIN

//#include <catch2/catch.hpp>
#include "catch.hpp"

#include <mylibrary/example.h>

#include "data.h"

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
    REQUIRE(d.vuln_by_region_.at("Australia Area") == .707199f);
  }

  SECTION("Individual Country (Canada)") {
    std::string country = "Norway";
    REQUIRE(d.vuln_by_region_.at("Canada") == .973400f);
  }
}
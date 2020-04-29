//
// Created by tejas on 4/27/2020.
//

#ifndef FINALPROJECT_DATA_H
#define FINALPROJECT_DATA_H

#include <string>
#include <map>
#include <vector>
#include <array>

namespace data {

class Data {
 public:
  //Map from strings to floats of the overall calculated index of disease spread per country
  std::map<char*, float> vuln_index_;
  //Same as above, but adjusted to .25-.75 instead of 0-1
  std::map<char*, float> adjusted_vuln_index_;
  //List of all the airports by coordinates (adjusted from image)
  std::vector<std::array<int, 4>> airports;

  //Populates vuln_index_ and adjusted_vuln_index_
  void PopulateVuln();
  //Populates airports_
  void PopulateAirports();
  //Default constructor
  Data();
};

}


#endif  // FINALPROJECT_DATA_H

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
  //Map of average vulnerability indices after categorization
  std::map<char*, float> vuln_by_region_;

  //Constructor calls populate methods
  Data();

  //All the regions, as vectors, with their respective countries
  std::vector<char*> northern_south_america;
  std::vector<char*> western_south_america;
  std::vector<char*> southern_south_america;
  std::vector<char*> scandinavia;
  std::vector<char*> russia;
  std::vector<char*> germany;
  std::vector<char*> france;
  std::vector<char*> spain;
  std::vector<char*> ukraine;
  std::vector<char*> central_europe;
  std::vector<char*> eastern_europe;
  std::vector<char*> central_africa;
  std::vector<char*> southern_africa;
  std::vector<char*> western_africa;
  std::vector<char*> north_africa;
  std::vector<char*> india;
  std::vector<char*> middle_east;
  std::vector<char*> pakistan;
  std::vector<char*> stans;
  std::vector<char*> southeast_asia;
  std::vector<char*> indonesia;
  std::vector<char*> australia;
  std::vector<char*> central_america;
  std::vector<char*> china;
  std::vector<char*> caribbean;
  std::vector<char*> uk;

  std::string CategorizeLoc(std::string country);

 private:
  //Populates vuln_index_ and adjusted_vuln_index_
  void PopulateVuln();
  //Populates airports_
  void PopulateAirports();
  //Populates regions vectors
  void PopulateRegions();
  //Computes average vuln score of a region
  float ComputeAvgScore(const std::vector<char*>& region);
};

}


#endif  // FINALPROJECT_DATA_H

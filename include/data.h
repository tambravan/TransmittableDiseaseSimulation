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
  //Map from strings to floats of the overall
  //calculated index of disease spread per country
  std::map<std::string, float> vuln_index_;

  //Same as vuln_index_, but adjusted to .25-.75 instead of 0-1
  std::map<std::string, float> adjusted_vuln_index_;

  //List of all the airports by coordinates (adjusted from image)
  std::vector<std::array<int, 2>> airports;

  //Map of average vulnerability indices after categorization
  std::map<std::string, float> vuln_by_region_;

  //Map of region names as string to their vector
  std::map<std::string, std::vector<std::string>> reg_name_to_vec_;

  //Constructor calls populate methods
  Data();

  //Input a location as a string, and return the categorized location
  //which is the region country belongs to
  std::string CategorizeLoc(const std::string& country);

 private:
  //Populates vuln_index_ and adjusted_vuln_index_ from file
  void PopulateVuln();

  //Populates vuln by region by using ComputeAvgScore
  void PopulateRegionVuln();

  //Populates airports_ into airports_ from file
  void PopulateAirports();

  //Populates regions vectors and store them in name_to_vec
  void PopulateRegions();
  
  //Computes average vuln score of a region
  float ComputeAvgScore(const std::vector<std::string>& region);

  //All the regions, as vectors, with their respective countries
  std::vector<std::string> northern_south_america;
  std::vector<std::string> western_south_america;
  std::vector<std::string> southern_south_america;
  std::vector<std::string> scandinavia;
  std::vector<std::string> russia;
  std::vector<std::string> germany;
  std::vector<std::string> france;
  std::vector<std::string> spain;
  std::vector<std::string> ukraine;
  std::vector<std::string> central_europe;
  std::vector<std::string> eastern_europe;
  std::vector<std::string> central_africa;
  std::vector<std::string> southern_africa;
  std::vector<std::string> western_africa;
  std::vector<std::string> north_africa;
  std::vector<std::string> india;
  std::vector<std::string> middle_east;
  std::vector<std::string> pakistan;
  std::vector<std::string> stans;
  std::vector<std::string> southeast_asia;
  std::vector<std::string> indonesia;
  std::vector<std::string> australia;
  std::vector<std::string> central_america;
  std::vector<std::string> china;
  std::vector<std::string> caribbean;
  std::vector<std::string> uk;
  std::vector<std::string> italy;
}; //Class data

} //Namespace data


#endif  // FINALPROJECT_DATA_H

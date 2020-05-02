//
// Created by tejas on 4/27/2020.
//
#include "data.h"

#include <iostream>
#include <fstream>

namespace data {

Data::Data() {
  PopulateRegions();
  PopulateAirports();
  PopulateVuln();
  PopulateRegionVuln();
}

//Populates the regions into the regional vectors, and stores them into a map
void Data::PopulateRegions() {
  northern_south_america.emplace_back("Colombia");
  northern_south_america.emplace_back("Venezuela");
  northern_south_america.emplace_back("Guyana");
  northern_south_america.emplace_back("Suriname");

  western_south_america.emplace_back("Peru");
  western_south_america.emplace_back("Bolivia");
  western_south_america.emplace_back("Ecuador");

  southern_south_america.emplace_back("Argentina");
  southern_south_america.emplace_back("Chile");
  southern_south_america.emplace_back("Uruguay");
  southern_south_america.emplace_back("Paraguay");

  scandinavia.emplace_back("Norway");
  scandinavia.emplace_back("Sweden");
  scandinavia.emplace_back("Finland");
  scandinavia.emplace_back("Denmark");

  russia.emplace_back("Russia");
  russia.emplace_back("Lithuania");
  russia.emplace_back("Latvia");
  russia.emplace_back("Estonia");

  germany.emplace_back("Germany");
  germany.emplace_back("Poland");

  france.emplace_back("France");
  france.emplace_back("Switzerland");
  france.emplace_back("Monaco");
  france.emplace_back("Andorra");
  france.emplace_back("Netherlands");
  france.emplace_back("Belgium");
  france.emplace_back("Liechtenstein");
  france.emplace_back("Luxembourg");

  spain.emplace_back("Spain");
  spain.emplace_back("Portugal");

  ukraine.emplace_back("Ukraine");
  ukraine.emplace_back("Belarus");

  central_europe.emplace_back("Austria");
  central_europe.emplace_back("Hungary");
  central_europe.emplace_back("Slovakia");
  central_europe.emplace_back("Czech Republic");

  eastern_europe.emplace_back("Croatia");
  eastern_europe.emplace_back("Bulgaria");
  eastern_europe.emplace_back("Bosnia and Herzegovina");
  eastern_europe.emplace_back("Macedonia");
  eastern_europe.emplace_back("Greece");
  eastern_europe.emplace_back("Bulgaria");
  eastern_europe.emplace_back("Moldova");
  eastern_europe.emplace_back("Albania");
  eastern_europe.emplace_back("Slovenia");
  eastern_europe.emplace_back("Kosovo");
  eastern_europe.emplace_back("Serbia");
  eastern_europe.emplace_back("Romania");
  eastern_europe.emplace_back("Cyprus");
  eastern_europe.emplace_back("Montenegro");

  central_africa.emplace_back("Somalia");
  central_africa.emplace_back("Ethiopia");
  central_africa.emplace_back("Kenya");
  central_africa.emplace_back("Democratic Republic of the Congo");
  central_africa.emplace_back("Central African Republic");
  central_africa.emplace_back("Gabon");
  central_africa.emplace_back("Cameroon");
  central_africa.emplace_back("Uganda");
  central_africa.emplace_back("Rwanda");
  central_africa.emplace_back("Republic of the Congo");
  central_africa.emplace_back("Sao Tome and Principe");
  central_africa.emplace_back("Burundi");

  southern_africa.emplace_back("Swaziland");
  southern_africa.emplace_back("Lesotho");
  southern_africa.emplace_back("South Africa");
  southern_africa.emplace_back("Angola");
  southern_africa.emplace_back("Mozambique");
  southern_africa.emplace_back("Namibia");
  southern_africa.emplace_back("Botswana");
  southern_africa.emplace_back("Zimbabwe");
  southern_africa.emplace_back("Malawi");
  southern_africa.emplace_back("Zambia");
  southern_africa.emplace_back("Tanzania");
  southern_africa.emplace_back("Madagascar");
  southern_africa.emplace_back("Comoros");
  southern_africa.emplace_back("Mauritius");
  southern_africa.emplace_back("Seychelles");

  western_africa.emplace_back("Nigeria");
  western_africa.emplace_back("Niger");
  western_africa.emplace_back("Tunisia");
  western_africa.emplace_back("Algeria");
  western_africa.emplace_back("Morocco");
  western_africa.emplace_back("Cote d'Ivoire");
  western_africa.emplace_back("Sierra Leone");
  western_africa.emplace_back("Guinea");
  western_africa.emplace_back("Guinea-Bissau");
  western_africa.emplace_back("Equatorial Guinea");
  western_africa.emplace_back("Liberia");
  western_africa.emplace_back("Ghana");
  western_africa.emplace_back("Togo");
  western_africa.emplace_back("Benin");
  western_africa.emplace_back("Mali");
  western_africa.emplace_back("Mauritania");
  western_africa.emplace_back("The Gambia");
  western_africa.emplace_back("Senegal");
  western_africa.emplace_back("Burkina Faso");
  western_africa.emplace_back("Cape Verde");

  north_africa.emplace_back("Egypt");
  north_africa.emplace_back("South Sudan");
  north_africa.emplace_back("Sudan");
  north_africa.emplace_back("Libya");
  north_africa.emplace_back("Chad");
  north_africa.emplace_back("Djibouti");
  north_africa.emplace_back("Eritrea");

  middle_east.emplace_back("Kuwait");
  middle_east.emplace_back("Saudi Arabia");
  middle_east.emplace_back("Yemen");
  middle_east.emplace_back("Oman");
  middle_east.emplace_back("United Arab Emirates");
  middle_east.emplace_back("Lebanon");
  middle_east.emplace_back("Israel");
  middle_east.emplace_back("Iraq");
  middle_east.emplace_back("Syria");
  middle_east.emplace_back("Jordan");
  middle_east.emplace_back("Qatar");
  middle_east.emplace_back("Georgia");
  middle_east.emplace_back("Armenia");
  middle_east.emplace_back("Bahrain");
  middle_east.emplace_back("Palestine");
  middle_east.emplace_back("Azerbaijan");

  india.emplace_back("India");
  india.emplace_back("Nepal");
  india.emplace_back("Bangladesh");
  india.emplace_back("Bhutan");
  india.emplace_back("Sri Lanka");
  india.emplace_back("Maldives");

  pakistan.emplace_back("Pakistan");
  pakistan.emplace_back("Afghanistan");

  stans.emplace_back("Turkmenistan");
  stans.emplace_back("Tajikistan");
  stans.emplace_back("Uzbekistan");
  stans.emplace_back("Kyrgyzstan");
  stans.emplace_back("Kazakhstan");

  southeast_asia.emplace_back("Singapore");
  southeast_asia.emplace_back("Cambodia");
  southeast_asia.emplace_back("Thailand");
  southeast_asia.emplace_back("Myanmar");
  southeast_asia.emplace_back("Cambodia");
  southeast_asia.emplace_back("Laos");
  southeast_asia.emplace_back("Philippines");
  southeast_asia.emplace_back("Malaysia");
  southeast_asia.emplace_back("Vietnam");

  indonesia.emplace_back("Indonesia");
  indonesia.emplace_back("Papua New Guinea");
  indonesia.emplace_back("Brunei");
  indonesia.emplace_back("Timor-Leste");

  australia.emplace_back("Australia");
  australia.emplace_back("New Zealand");
  australia.emplace_back("Solomon Islands");
  australia.emplace_back("Kiribati");
  australia.emplace_back("Micronesia");
  australia.emplace_back("Vanuatu");
  australia.emplace_back("Marshall Islands");
  australia.emplace_back("Fiji");
  australia.emplace_back("Samoa");
  australia.emplace_back("Tuvalu");
  australia.emplace_back("Tonga");
  australia.emplace_back("Palau");
  australia.emplace_back("Vanuatu");

  china.emplace_back("China");
  china.emplace_back("North Korea");
  china.emplace_back("South Korea");
  china.emplace_back("Mongolia");
  china.emplace_back("Taiwan");

  central_america.emplace_back("Belize");
  central_america.emplace_back("Guatemala");
  central_america.emplace_back("Honduras");
  central_america.emplace_back("Nicaragua");
  central_america.emplace_back("Panama");
  central_america.emplace_back("El Salvador");
  central_america.emplace_back("Costa Rica");

  caribbean.emplace_back("Jamaica");
  caribbean.emplace_back("Cuba");
  caribbean.emplace_back("Bahamas");
  caribbean.emplace_back("Dominican Republic");
  caribbean.emplace_back("Haiti");
  caribbean.emplace_back("Saint Vincent and the Grenadines");
  caribbean.emplace_back("Trinidad and Tobago");
  caribbean.emplace_back("Grenada");
  caribbean.emplace_back("Dominica");
  caribbean.emplace_back("Barbados");
  caribbean.emplace_back("Saint Kitts and Nevis");
  caribbean.emplace_back("Antigua and Barbuda");
  caribbean.emplace_back("Saint Lucia");

  uk.emplace_back("United Kingdom");
  uk.emplace_back("Ireland");
  uk.emplace_back("Iceland");

  italy.emplace_back("Italy");
  italy.emplace_back("San Marino");
  italy.emplace_back("Malta");

  reg_name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Northern South America", northern_south_america));
  reg_name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Southern South America", southern_south_america));
  reg_name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Western South America", western_south_america));
  reg_name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Scandinavia", scandinavia));
  reg_name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Russia Area", russia));
  reg_name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Germany Area", germany));
  reg_name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("France Area", france));
  reg_name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Spain Area", spain));
  reg_name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Ukraine Area", ukraine));
  reg_name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Central Europe", central_europe));

  reg_name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Eastern Europe", eastern_europe));
  reg_name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Central Africa", central_africa));
  reg_name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Southern Africa", southern_africa));
  reg_name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Western Africa", western_africa));
  reg_name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("North Africa", north_africa));
  reg_name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Middle East", middle_east));
  reg_name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("India Area", india));
  reg_name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Pakistan Area", pakistan));
  reg_name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Stans", stans));
  reg_name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Southeast Asia", southeast_asia));

  reg_name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Indonesia Area", indonesia));
  reg_name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Australia Area", australia));
  reg_name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("China Area", china));
  reg_name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Central America", central_america));
  reg_name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Caribbean", caribbean));
  reg_name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("UK", uk));
  reg_name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Italy Area", italy));
}
//Populate airports_
void Data::PopulateAirports() {
  //Coordinates to draw the airports at
  //This was obtained from latlng of all the airports, and converting them to a 2d map

  //Open file
  std::ifstream airport_loc("resources/airports.txt");

  //Verify file was opened
  if (!airport_loc) {
    std::cerr << "A file could not be loaded properly";
    exit(1);
  }

  //Coordinates of each airport
  int x, y;

  //Add each airport to airports
  while (airport_loc >> x >> y) {
    airports.push_back(std::array<int, 2>({x, y}));
  }
}
//Populate vuln_index and adjusted_vuln_index
void Data::PopulateVuln() {
  //Load the countries and indices files
  std::ifstream countries("resources/countries.txt");
  std::ifstream indices("resources/indices.txt");

  //If they fail, exit the program and print an error message
  if (!countries || !indices) {
    std::cerr << "A file could not be loaded properly";
    exit(1);
  }

  //Create a string country and float index to read into
  std::string country;
  float index;
  
  //For each set of countries and indices, add them to vuln index
  while (indices >> index) {
    std::getline(countries, country);
    vuln_index_.insert(std::pair<std::string, float>(country, index));
  }
  
  //Adjust these indices from [0,1] to [.25, .75]
  for (const auto& pair : vuln_index_) {
    adjusted_vuln_index_.insert(
        std::pair<std::string, float>(pair.first, (pair.second / 2) + .25));
  }
}

//Populate regional vuln
void Data::PopulateRegionVuln() {
  //Calculate averages and add them to the vuln by region map
  for (const auto& pair : adjusted_vuln_index_) {
    //If the country is its own region
    if (CategorizeLoc(pair.first) == pair.first) {
      vuln_by_region_.insert(std::pair<std::string, float>(pair.first, pair.second));
    } else {
      bool found = false;
      for (const auto& other_pairs : vuln_by_region_) {
        //If the region has been calculated, flag it
        if (other_pairs.first == CategorizeLoc(pair.first)) {
          found = true;
        }
      }
      //If not flagged, calculate and add the region
      if (!found) {
        float average =
            ComputeAvgScore(reg_name_to_vec_.at(CategorizeLoc(pair.first)));
        vuln_by_region_.insert(
            std::pair<std::string, float>(CategorizeLoc(pair.first), average));
      }
    }
  }
}

//Computes average vuln of a region (helper method)
float Data::ComputeAvgScore(const std::vector<std::string>& region) {
  float sum = 0;

  for (const auto& country : region) {
    sum += adjusted_vuln_index_.at(country);
  }

  return (sum / region.size());
}

//Categorizes location from country to region
std::string Data::CategorizeLoc(const std::string& country) {
  std::string to_return;
  if (std::count(northern_south_america.begin(), northern_south_america.end(), country) != 0) {
    to_return = "Northern South America";
  } else if (std::count(western_south_america.begin(), western_south_america.end(), country) != 0) {
    to_return = "Western South America";
  } else if (std::count(southern_south_america.begin(), southern_south_america.end(), country) != 0) {
    to_return = "Southern South America";
  } else if (std::count(scandinavia.begin(), scandinavia.end(), country) != 0) {
    to_return = "Scandinavia";
  } else if (std::count(russia.begin(), russia.end(), country) != 0) {
    to_return = "Russia Area";
  } else if (std::count(germany.begin(), germany.end(), country) != 0) {
    to_return = "Germany Area";
  } else if (std::count(france.begin(), france.end(), country) != 0) {
    to_return = "France Area";
  } else if (std::count(spain.begin(), spain.end(), country) != 0) {
    to_return = "Spain Area";
  } else if (std::count(ukraine.begin(), ukraine.end(), country) != 0) {
    to_return = "Ukraine Area";
  } else if (std::count(central_europe.begin(), central_europe.end(), country) != 0) {
    to_return = "Central Europe";
  } else if (std::count(eastern_europe.begin(), eastern_europe.end(), country) != 0) {
    to_return = "Eastern Europe";
  } else if (std::count(central_africa.begin(), central_africa.end(), country) != 0) {
    to_return = "Central Africa";
  } else if (std::count(southern_africa.begin(), southern_africa.end(), country) != 0) {
    to_return = "Southern Africa";
  } else if (std::count(western_africa.begin(), western_africa.end(), country) != 0) {
    to_return = "Western Africa";
  } else if (std::count(north_africa.begin(), north_africa.end(), country) != 0) {
    to_return = "North Africa";
  } else if (std::count(middle_east.begin(), middle_east.end(), country) != 0) {
    to_return = "Middle East";
  } else if (std::count(india.begin(), india.end(), country) != 0) {
    to_return = "India Area";
  } else if (std::count(pakistan.begin(), pakistan.end(), country) != 0) {
    to_return = "Pakistan Area";
  } else if (std::count(stans.begin(), stans.end(), country) != 0) {
    to_return = "Stans";
  } else if (std::count(southeast_asia.begin(), southeast_asia.end(), country) != 0) {
    to_return = "Southeast Asia";
  } else if (std::count(indonesia.begin(), indonesia.end(), country) != 0) {
    to_return = "Indonesia Area";
  } else if (std::count(australia.begin(), australia.end(), country) != 0) {
    to_return = "Australia Area";
  } else if (std::count(china.begin(), china.end(), country) != 0) {
    to_return = "China Area";
  } else if (std::count(central_america.begin(), central_america.end(), country) != 0) {
    to_return = "Central America";
  } else if (std::count(caribbean.begin(), caribbean.end(), country) != 0) {
    to_return = "Caribbean";
  } else if (std::count(uk.begin(), uk.end(), country) != 0) {
    to_return = "UK";
  } else if (std::count(italy.begin(), italy.end(), country) != 0) {
    to_return = "Italy Area";
  } else {
    to_return = country;
  }

  return to_return;
}

}
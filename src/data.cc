//
// Created by tejas on 4/27/2020.
//
#include "data.h"

#include <iostream>

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
  germany.emplace_back("Belarus");

  france.emplace_back("France");
  france.emplace_back("Switzerland");
  france.emplace_back("Monaco");
  france.emplace_back("Andorra");
  france.emplace_back("Netherlands");
  france.emplace_back("Belgium");

  spain.emplace_back("Spain");
  spain.emplace_back("Portugal");

  ukraine.emplace_back("Ukraine");
  ukraine.emplace_back("Romania");

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

  india.emplace_back("India");
  india.emplace_back("Nepal");
  india.emplace_back("Bangladesh");
  india.emplace_back("Bhutan");
  india.emplace_back("Sri Lanka");

  pakistan.emplace_back("Pakistan");
  pakistan.emplace_back("Afghanistan");

  stans.emplace_back("Turkmenistan");
  stans.emplace_back("Tajikistan");
  stans.emplace_back("Uzbekistan");
  stans.emplace_back("Kyrgyzstan");

  southeast_asia.emplace_back("Singapore");
  southeast_asia.emplace_back("Cambodia");
  southeast_asia.emplace_back("Thailand");
  southeast_asia.emplace_back("Myanmar");
  southeast_asia.emplace_back("Cambodia");
  southeast_asia.emplace_back("Laos");
  southeast_asia.emplace_back("Philippines");
  southeast_asia.emplace_back("Malaysia");

  indonesia.emplace_back("Indonesia");
  indonesia.emplace_back("Papua New Guinea");
  indonesia.emplace_back("Brunei");

  australia.emplace_back("Australia");
  australia.emplace_back("New Zealand");

  china.emplace_back("China");
  china.emplace_back("North Korea");
  china.emplace_back("South Korea");

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

  uk.emplace_back("United Kingdom");
  uk.emplace_back("Ireland");
  uk.emplace_back("Iceland");

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
}
//Populate airports_
void Data::PopulateAirports() {
  //Coordinates to draw the airports at
  //This was obtained from latlng of all the airports, and converting them to a 2d map
  //Airport code represented in comment
  airports.push_back(std::array<int, 2>{252, 243}); //ATL
  airports.push_back(std::array<int, 2>{1101, 204}); //PEK
  airports.push_back(std::array<int, 2>{93, 235}); //LAX
  airports.push_back(std::array<int, 2>{1207, 220}); //HND
  airports.push_back(std::array<int, 2>{848, 288}); //DXB
  airports.push_back(std::array<int, 2>{235, 200}); //ORD
  airports.push_back(std::array<int, 2>{608, 141}); //LHR
  airports.push_back(std::array<int, 2>{1136, 250}); //PVG
  airports.push_back(std::array<int, 2>{623, 161}); //CDG
  airports.push_back(std::array<int, 2>{185, 245}); //DFW

  airports.push_back(std::array<int, 2>{1120, 292}); //CAN
  airports.push_back(std::array<int, 2>{630, 140}); //AMS
  airports.push_back(std::array<int, 2>{1122, 294}); //HKG
  airports.push_back(std::array<int, 2>{644, 158}); //FRA
  airports.push_back(std::array<int, 2>{145, 206}); //DEN
  airports.push_back(std::array<int, 2>{1158, 220}); //ICN
  airports.push_back(std::array<int, 2>{1080, 405}); //SIN
  airports.push_back(std::array<int, 2>{950, 275}); //DEL
  airports.push_back(std::array<int, 2>{1065, 345}); //BKK
  airports.push_back(std::array<int, 2>{1100, 445}); //CGK

  airports.push_back(std::array<int, 2>{291, 204}); //JFK
  airports.push_back(std::array<int, 2>{1075, 400}); //KUL
  airports.push_back(std::array<int, 2>{594, 207}); //MAD
  airports.push_back(std::array<int, 2>{86, 215}); //SFO
  airports.push_back(std::array<int, 2>{1080, 260}); //CTU
}
//Populate vuln_index and adjusted_vuln_index
void Data::PopulateVuln() {
  //Populate the vulnerability index for each country
  vuln_index_.insert(std::pair<std::string, float>("Somalia", 0.0));
  vuln_index_.insert(
      std::pair<std::string, float>("Central African Republic", 0.000061));
  vuln_index_.insert(std::pair<std::string, float>("Chad", 0.098450));
  vuln_index_.insert(std::pair<std::string, float>("South Sudan", 0.100836));
  vuln_index_.insert(std::pair<std::string, float>("Mauritania", 0.107294));
  vuln_index_.insert(std::pair<std::string, float>("Angola", 0.148414));
  vuln_index_.insert(std::pair<std::string, float>("Haiti", 0.149471));
  vuln_index_.insert(std::pair<std::string, float>("Afghanistan", 0.157034));
  vuln_index_.insert(std::pair<std::string, float>("Niger", 0.166531));
  vuln_index_.insert(std::pair<std::string, float>("Madagascar", 0.170787));

  vuln_index_.insert(
      std::pair<std::string, float>("Democratic Republic of the Congo", 0.181762));
  vuln_index_.insert(std::pair<std::string, float>("Mali", 0.184254));
  vuln_index_.insert(std::pair<std::string, float>("Guinea-Bissau", 0.181762));
  vuln_index_.insert(std::pair<std::string, float>("Benin", 0.206682));
  vuln_index_.insert(std::pair<std::string, float>("The Gambia", 0.207809));
  vuln_index_.insert(std::pair<std::string, float>("Liberia", 0.213114));
  vuln_index_.insert(std::pair<std::string, float>("Guinea", 0.213225));
  // vuln_index_.insert(std::pair<std::string, float>("Sao Tome and Principe", 0.223256));
  vuln_index_.insert(std::pair<std::string, float>("Sierra Leone", 0.223397));
  vuln_index_.insert(std::pair<std::string, float>("Burkina Faso", 0.231504));

  // vuln_index_.insert(std::pair<std::string, float>("Comoros", 0.238068));
  vuln_index_.insert(std::pair<std::string, float>("Yemen", 0.250277));
  vuln_index_.insert(std::pair<std::string, float>("Eritrea", 0.252978));
  vuln_index_.insert(std::pair<std::string, float>("Togo", 0.259396));
  vuln_index_.insert(std::pair<std::string, float>("Mozambique", 0.262501));
  vuln_index_.insert(
      std::pair<std::string, float>("Republic of the Congo", 0.268887));
  vuln_index_.insert(std::pair<std::string, float>("Nigeria", 0.270681));
  vuln_index_.insert(std::pair<std::string, float>("Cote d'Ivoire", 0.270743));
  vuln_index_.insert(std::pair<std::string, float>("Malawi", 0.279987));
  vuln_index_.insert(std::pair<std::string, float>("Sudan", 0.291580));

  vuln_index_.insert(std::pair<std::string, float>("Djibouti", 0.297892));
  vuln_index_.insert(std::pair<std::string, float>("Pakistan", 0.308544));
  // vuln_index_.insert(std::pair<std::string, float>("Timor-Leste", 0.310208));
  vuln_index_.insert(std::pair<std::string, float>("Senegal", 0.329156));
  vuln_index_.insert(std::pair<std::string, float>("Zimbabwe", 0.337478));
  vuln_index_.insert(std::pair<std::string, float>("Papua New Guinea", 0.339184));
  vuln_index_.insert(std::pair<std::string, float>("Tanzania", 0.340445));
  vuln_index_.insert(std::pair<std::string, float>("Lesotho", 0.344860));
  // vuln_index_.insert(std::pair<std::string, float>("Burundi", 0.354104));
  vuln_index_.insert(std::pair<std::string, float>("Laos", 0.355111));

  vuln_index_.insert(std::pair<std::string, float>("Cambodia", 0.355133));
  vuln_index_.insert(std::pair<std::string, float>("Rwanda", 0.355300));
  vuln_index_.insert(std::pair<std::string, float>("Swaziland", 0.358470));
  vuln_index_.insert(std::pair<std::string, float>("Uganda", 0.365850));
  // vuln_index_.insert(std::pair<std::string, float>("Solomon Islands", 0.370311));
  vuln_index_.insert(std::pair<std::string, float>("North Korea", 0.374870));
  vuln_index_.insert(std::pair<std::string, float>("Ethiopia", 0.382021));
  vuln_index_.insert(std::pair<std::string, float>("Kenya", 0.385436));
  // vuln_index_.insert(std::pair<std::string, float>("Kiribati", 0.388403));
  vuln_index_.insert(std::pair<std::string, float>("Cameroon", 0.388770));

  vuln_index_.insert(std::pair<std::string, float>("Syria", 0.391337));
  vuln_index_.insert(std::pair<std::string, float>("Gabon", 0.402950));
  vuln_index_.insert(std::pair<std::string, float>("Nepal", 0.404405));
  vuln_index_.insert(std::pair<std::string, float>("Honduras", 0.407296));
  vuln_index_.insert(std::pair<std::string, float>("Zambia", 0.420459));
  vuln_index_.insert(std::pair<std::string, float>("Bangladesh", 0.422107));
  // vuln_index_.insert(std::pair<std::string, float>("Micronesia", 0.425305));
  vuln_index_.insert(std::pair<std::string, float>("Equatorial Guinea", 0.430054));
  vuln_index_.insert(std::pair<std::string, float>("Iraq", 0.432182));
  vuln_index_.insert(std::pair<std::string, float>("Myanmar", 0.448176));

  // vuln_index_.insert(std::pair<std::string, float>("Palestine", 0.450415));
  vuln_index_.insert(std::pair<std::string, float>("Bhutan", 0.460880));
  vuln_index_.insert(std::pair<std::string, float>("Ghana", 0.462565));
  vuln_index_.insert(std::pair<std::string, float>("Guatemala", 0.477179));
  // vuln_index_.insert(std::pair<std::string, float>("Cape Verde", 0.486189));
  vuln_index_.insert(std::pair<std::string, float>("Turkmenistan", 0.486696));
  vuln_index_.insert(std::pair<std::string, float>("Namibia", 0.490478));
  // vuln_index_.insert(std::pair<std::string, float>("Vanuatu", 0.490878));
  vuln_index_.insert(std::pair<std::string, float>("Nicaragua", 0.492491));
  vuln_index_.insert(std::pair<std::string, float>("Libya", 0.493272));

  vuln_index_.insert(std::pair<std::string, float>("India", 0.493799));
  vuln_index_.insert(std::pair<std::string, float>("Algeria", 0.496612));
  vuln_index_.insert(std::pair<std::string, float>("Dominican Republic", 0.499533));
  vuln_index_.insert(std::pair<std::string, float>("Jamaica", 0.499783));
  vuln_index_.insert(std::pair<std::string, float>("Bolivia", 0.500436));
  vuln_index_.insert(std::pair<std::string, float>("Tajikistan", 0.507026));
  vuln_index_.insert(std::pair<std::string, float>("Uzbekistan", 0.515492));
  vuln_index_.insert(std::pair<std::string, float>("Saint Lucia", 0.516511));
  vuln_index_.insert(
      std::pair<std::string, float>("Bosnia and Herzegovina", 0.523079));
  vuln_index_.insert(std::pair<std::string, float>("Egypt", 0.530405));

  vuln_index_.insert(std::pair<std::string, float>("Venezuela", 0.530692));
  vuln_index_.insert(std::pair<std::string, float>("Tunisia", 0.535451));
  vuln_index_.insert(std::pair<std::string, float>("Paraguay", 0.541167));
  // vuln_index_.insert(std::pair<std::string, float>("Marshall Islands", 0.544611));
  vuln_index_.insert(std::pair<std::string, float>("Philippines", 0.544923));
  vuln_index_.insert(std::pair<std::string, float>("Lebanon", 0.546332));
  vuln_index_.insert(std::pair<std::string, float>("Botswana", 0.548363));
  // vuln_index_.insert(std::pair<std::string, float>("Saint Vincent and the Grenadines", 0.549145)); vuln_index_.insert(std::pair<std::string, float>("Azerbaijan", 0.550328));
  vuln_index_.insert(std::pair<std::string, float>("Belize", 0.551546));

  vuln_index_.insert(std::pair<std::string, float>("Guyana", 0.554987));
  vuln_index_.insert(std::pair<std::string, float>("Suriname", 0.555320));
  vuln_index_.insert(std::pair<std::string, float>("Kyrgyzstan", 0.555486));
  vuln_index_.insert(std::pair<std::string, float>("Indonesia", 0.562944));
  // vuln_index_.insert(std::pair<std::string, float>("Fiji", 0.567238));
  vuln_index_.insert(std::pair<std::string, float>("Iran", 0.567841));
  vuln_index_.insert(std::pair<std::string, float>("Serbia", 0.568934));
  vuln_index_.insert(std::pair<std::string, float>("Morocco", 0.569769));
  vuln_index_.insert(std::pair<std::string, float>("Sri Lanka", 0.571001));
  vuln_index_.insert(std::pair<std::string, float>("Ecuador", 0.575843));

  // vuln_index_.insert(std::pair<std::string, float>("Maldives", 0.576299));
  // vuln_index_.insert(std::pair<std::string, float>("Samoa", 0.580679));
  vuln_index_.insert(std::pair<std::string, float>("Colombia", 0.583850));
  // vuln_index_.insert(std::pair<std::string, float>("Trinidad and Tobago", 0.594998));
  vuln_index_.insert(std::pair<std::string, float>("Grenada", 0.597669));
  vuln_index_.insert(std::pair<std::string, float>("Kosovo", 0.599085));
  // vuln_index_.insert(std::pair<std::string, float>("Dominica", 0.604170));
  vuln_index_.insert(std::pair<std::string, float>("Panama", 0.606521));
  vuln_index_.insert(std::pair<std::string, float>("Kazakhstan", 0.607098));
  vuln_index_.insert(std::pair<std::string, float>("El Salvador", 0.607731));

  // vuln_index_.insert(std::pair<std::string, float>("Tuvalu", 0.608741));
  vuln_index_.insert(std::pair<std::string, float>("Montenegro", 0.612065));
  vuln_index_.insert(std::pair<std::string, float>("Belarus", 0.616419));
  vuln_index_.insert(std::pair<std::string, float>("Ukraine", 0.617343));
  vuln_index_.insert(std::pair<std::string, float>("Andorra", 0.625221));
  vuln_index_.insert(std::pair<std::string, float>("Vietnam", 0.626124));
  vuln_index_.insert(std::pair<std::string, float>("Mongolia", 0.626185));
  vuln_index_.insert(std::pair<std::string, float>("Albania", 0.626259));
  // vuln_index_.insert(std::pair<std::string, float>("Seychelles", 0.628108));
  // vuln_index_.insert(std::pair<std::string, float>("Tonga", 0.630046));

  vuln_index_.insert(std::pair<std::string, float>("Oman", 0.633743));
  // vuln_index_.insert(std::pair<std::string, float>("Mauritius", 0.635763));
  vuln_index_.insert(std::pair<std::string, float>("Moldova", 0.635987));
  vuln_index_.insert(std::pair<std::string, float>("Russia", 0.639878));
  vuln_index_.insert(std::pair<std::string, float>("Peru", 0.645670));
  vuln_index_.insert(std::pair<std::string, float>("Bahamas", 0.653653));
  vuln_index_.insert(std::pair<std::string, float>("Romania", 0.657694));
  // vuln_index_.insert(std::pair<std::string, float>("Palau", 0.658010));
  vuln_index_.insert(std::pair<std::string, float>("China", 0.663535));
  // vuln_index_.insert(std::pair<std::string, float>("Bahrain", 0.663702));

  vuln_index_.insert(std::pair<std::string, float>("Kuwait", 0.664856));
  // vuln_index_.insert(std::pair<std::string, float>("Cyprus", 0.665630));
  vuln_index_.insert(std::pair<std::string, float>("Bulgaria", 0.666120));
  vuln_index_.insert(std::pair<std::string, float>("Turkey", 0.677438));
  // vuln_index_.insert(std::pair<std::string, float>("Barbados", 0.681515));
  vuln_index_.insert(std::pair<std::string, float>("Macedonia", 0.685990));
  // vuln_index_.insert(std::pair<std::string, float>("San Marino", 0.687314));
  // vuln_index_.insert(std::pair<std::string, float>("Saint Kitts and Nevis", 0.691572)); vuln_index_.insert(std::pair<std::string, float>("Antigua and Barbuda", 0.693938));
  vuln_index_.insert(std::pair<std::string, float>("Cuba", 0.695910));

  vuln_index_.insert(std::pair<std::string, float>("South Africa", 0.697292));
  // vuln_index_.insert(std::pair<std::string, float>("Malta", 0.706869));
  vuln_index_.insert(std::pair<std::string, float>("Armenia", 0.706912));
  vuln_index_.insert(std::pair<std::string, float>("Argentina", 0.707041));
  vuln_index_.insert(std::pair<std::string, float>("Jordan", 0.707361));
  // vuln_index_.insert(std::pair<std::string, float>("Taiwan", 0.709691));
  vuln_index_.insert(std::pair<std::string, float>("Thailand", 0.711334));
  vuln_index_.insert(std::pair<std::string, float>("Brazil", 0.716641));
  vuln_index_.insert(std::pair<std::string, float>("Croatia", 0.719996));
  vuln_index_.insert(std::pair<std::string, float>("Greece", 0.734145));

  vuln_index_.insert(std::pair<std::string, float>("Mexico", 0.734971));
  vuln_index_.insert(std::pair<std::string, float>("Georgia", 0.735821));
  vuln_index_.insert(std::pair<std::string, float>("Saudi Arabia", 0.736844));
  vuln_index_.insert(std::pair<std::string, float>("Costa Rica", 0.736960));
  // vuln_index_.insert(std::pair<std::string, float>("Liechtenstein", 0.737219));
  vuln_index_.insert(std::pair<std::string, float>("Uruguay", 0.745957));
  vuln_index_.insert(std::pair<std::string, float>("Monaco", 0.753737));
  vuln_index_.insert(std::pair<std::string, float>("Malaysia", 0.761135));
  vuln_index_.insert(std::pair<std::string, float>("Brunei", 0.762886));
  vuln_index_.insert(std::pair<std::string, float>("Latvia", 0.763937));

  vuln_index_.insert(std::pair<std::string, float>("United Arab Emirates", 0.765200));
  vuln_index_.insert(std::pair<std::string, float>("Lithuania", 0.771597));
  vuln_index_.insert(std::pair<std::string, float>("Israel", 0.782439));
  vuln_index_.insert(std::pair<std::string, float>("Poland", 0.782799));
  vuln_index_.insert(std::pair<std::string, float>("Qatar", 0.787534));
  vuln_index_.insert(std::pair<std::string, float>("Hungary", 0.795623));
  vuln_index_.insert(std::pair<std::string, float>("Estonia", 0.797443));
  vuln_index_.insert(std::pair<std::string, float>("Chile", 0.801129));
  vuln_index_.insert(std::pair<std::string, float>("Slovenia", 0.805790));
  vuln_index_.insert(std::pair<std::string, float>("Slovakia", 0.808457));

  vuln_index_.insert(std::pair<std::string, float>("Italy", 0.821690));
  vuln_index_.insert(std::pair<std::string, float>("Czech Republic", 0.847175));
  vuln_index_.insert(std::pair<std::string, float>("France", 0.855407));
  vuln_index_.insert(std::pair<std::string, float>("Belgium", 0.870933));
  vuln_index_.insert(std::pair<std::string, float>("Austria", 0.874243));
  vuln_index_.insert(std::pair<std::string, float>("Spain", 0.875475));
  // vuln_index_.insert(std::pair<std::string, float>("Luxembourg", 0.875694));
  vuln_index_.insert(std::pair<std::string, float>("Singapore", 0.878289));
  vuln_index_.insert(std::pair<std::string, float>("South Korea", 0.879402));
  vuln_index_.insert(std::pair<std::string, float>("Portugal", 0.888782));

  vuln_index_.insert(std::pair<std::string, float>("United Kingdom", 0.897495));
  vuln_index_.insert(std::pair<std::string, float>("Ireland", 0.906320));
  vuln_index_.insert(std::pair<std::string, float>("Iceland", 0.908112));
  vuln_index_.insert(std::pair<std::string, float>("Australia", 0.912517));
  vuln_index_.insert(std::pair<std::string, float>("Switzerland", 0.915839));
  vuln_index_.insert(std::pair<std::string, float>("New Zealand", 0.916279));
  vuln_index_.insert(std::pair<std::string, float>("Netherlands", 0.918935));
  vuln_index_.insert(std::pair<std::string, float>("United States", 0.924939));
  vuln_index_.insert(std::pair<std::string, float>("Japan", 0.926410));
  vuln_index_.insert(std::pair<std::string, float>("Denmark", 0.953641));

  vuln_index_.insert(std::pair<std::string, float>("Sweden", 0.955625));
  vuln_index_.insert(std::pair<std::string, float>("Germany", 0.966890));
  vuln_index_.insert(std::pair<std::string, float>("Finland", 0.968274));
  vuln_index_.insert(std::pair<std::string, float>("Canada", 0.973400));
  vuln_index_.insert(std::pair<std::string, float>("Norway", 1.0));

  //Adjust these from [0,1] to [.25, .75]
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
  } else {
    to_return = country;
  }

  return to_return;
}

}
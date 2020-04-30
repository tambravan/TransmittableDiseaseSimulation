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

void Data::PopulateRegions() {
  northern_south_america.push_back("Colombia");
  northern_south_america.push_back("Venezuela");
  northern_south_america.push_back("Guyana");
  northern_south_america.push_back("Suriname");

  western_south_america.push_back("Peru");
  western_south_america.push_back("Bolivia");
  western_south_america.push_back("Ecuador");

  southern_south_america.push_back("Argentina");
  southern_south_america.push_back("Chile");
  southern_south_america.push_back("Uruguay");
  southern_south_america.push_back("Paraguay");

  scandinavia.push_back("Norway");
  scandinavia.push_back("Sweden");
  scandinavia.push_back("Finland");
  scandinavia.push_back("Denmark");

  russia.push_back("Russia");
  russia.push_back("Lithuania");
  russia.push_back("Latvia");
  russia.push_back("Estonia");

  germany.push_back("Germany");
  germany.push_back("Poland");
  germany.push_back("Belarus");

  france.push_back("France");
  france.push_back("Switzerland");
  france.push_back("Monaco");
  france.push_back("Andorra");
  france.push_back("Netherlands");
  france.push_back("Belgium");

  spain.push_back("Spain");
  spain.push_back("Portugal");

  ukraine.push_back("Ukraine");
  ukraine.push_back("Romania");

  central_europe.push_back("Austria");
  central_europe.push_back("Hungary");
  central_europe.push_back("Slovakia");
  central_europe.push_back("Czech Republic");

  eastern_europe.push_back("Croatia");
  eastern_europe.push_back("Bulgaria");
  eastern_europe.push_back("Bosnia and Herzegovina");
  eastern_europe.push_back("Macedonia");
  eastern_europe.push_back("Greece");
  eastern_europe.push_back("Bulgaria");
  eastern_europe.push_back("Moldova");
  eastern_europe.push_back("Albania");
  eastern_europe.push_back("Slovenia");
  eastern_europe.push_back("Kosovo");
  eastern_europe.push_back("Serbia");

  central_africa.push_back("Somalia");
  central_africa.push_back("Ethiopia");
  central_africa.push_back("Kenya");
  central_africa.push_back("Democratic Republic of the Congo");
  central_africa.push_back("Central African Republic");
  central_africa.push_back("Gabon");
  central_africa.push_back("Cameroon");
  central_africa.push_back("Uganda");
  central_africa.push_back("Rwanda");
  central_africa.push_back("Republic of the Congo");

  southern_africa.push_back("Swaziland");
  southern_africa.push_back("Lesotho");
  southern_africa.push_back("South Africa");
  southern_africa.push_back("Angola");
  southern_africa.push_back("Mozambique");
  southern_africa.push_back("Namibia");
  southern_africa.push_back("Botswana");
  southern_africa.push_back("Zimbabwe");
  southern_africa.push_back("Malawi");
  southern_africa.push_back("Zambia");
  southern_africa.push_back("Tanzania");
  southern_africa.push_back("Madagascar");

  western_africa.push_back("Nigeria");
  western_africa.push_back("Niger");
  western_africa.push_back("Tunisia");
  western_africa.push_back("Algeria");
  western_africa.push_back("Morocco");
  western_africa.push_back("Cote d'Ivoire");
  western_africa.push_back("Sierra Leone");
  western_africa.push_back("Guinea");
  western_africa.push_back("Guinea-Bissau");
  western_africa.push_back("Equatorial Guinea");
  western_africa.push_back("Liberia");
  western_africa.push_back("Ghana");
  western_africa.push_back("Togo");
  western_africa.push_back("Benin");
  western_africa.push_back("Mali");
  western_africa.push_back("Mauritania");
  western_africa.push_back("The Gambia");
  western_africa.push_back("Senegal");

  north_africa.push_back("Egypt");
  north_africa.push_back("South Sudan");
  north_africa.push_back("Sudan");
  north_africa.push_back("Libya");
  north_africa.push_back("Chad");
  north_africa.push_back("Djibouti");
  north_africa.push_back("Eritrea");

  middle_east.push_back("Kuwait");
  middle_east.push_back("Saudi Arabia");
  middle_east.push_back("Yemen");
  middle_east.push_back("Oman");
  middle_east.push_back("United Arab Emirates");
  middle_east.push_back("Lebanon");
  middle_east.push_back("Israel");
  middle_east.push_back("Iraq");
  middle_east.push_back("Syria");
  middle_east.push_back("Jordan");
  middle_east.push_back("Qatar");

  india.push_back("India");
  india.push_back("Nepal");
  india.push_back("Bangladesh");
  india.push_back("Bhutan");
  india.push_back("Sri Lanka");

  pakistan.push_back("Pakistan");
  pakistan.push_back("Afghanistan");

  stans.push_back("Turkmenistan");
  stans.push_back("Tajikistan");
  stans.push_back("Uzbekistan");
  stans.push_back("Kyrgyzstan");

  southeast_asia.push_back("Singapore");
  southeast_asia.push_back("Cambodia");
  southeast_asia.push_back("Thailand");
  southeast_asia.push_back("Myanmar");
  southeast_asia.push_back("Cambodia");
  southeast_asia.push_back("Laos");
  southeast_asia.push_back("Philippines");
  southeast_asia.push_back("Malaysia");

  indonesia.push_back("Indonesia");
  indonesia.push_back("Papua New Guinea");
  indonesia.push_back("Brunei");

  australia.push_back("Australia");
  australia.push_back("New Zealand");

  china.push_back("China");
  china.push_back("North Korea");
  china.push_back("South Korea");

  central_america.push_back("Belize");
  central_america.push_back("Guatemala");
  central_america.push_back("Honduras");
  central_america.push_back("Nicaragua");
  central_america.push_back("Panama");
  central_america.push_back("El Salvador");
  central_america.push_back("Costa Rica");

  caribbean.push_back("Jamaica");
  caribbean.push_back("Cuba");
  caribbean.push_back("Bahamas");
  caribbean.push_back("Dominican Republic");
  caribbean.push_back("Haiti");

  uk.push_back("United Kingdom");
  uk.push_back("Ireland");
  uk.push_back("Iceland");

  name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Northern South America", northern_south_america));
  name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Southern South America", southern_south_america));
  name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Western South America", western_south_america));
  name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Scandinavia", scandinavia));
  name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Russia Area", russia));
  name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Germany Area", germany));
  name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("France Area", france));
  name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Spain Area", spain));
  name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Ukraine Area", ukraine));
  name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Central Europe", central_europe));

  name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Eastern Europe", eastern_europe));
  name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Central Africa", central_africa));
  name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Southern Africa", southern_africa));
  name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Western Africa", western_africa));
  name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("North Africa", north_africa));
  name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Middle East", middle_east));
  name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("India Area", india));
  name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Pakistan Area", pakistan));
  name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Stans", stans));
  name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Southeast Asia", southeast_asia));

  name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Indonesia Area", indonesia));
  name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Australia Area", australia));
  name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("China Area", china));
  name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Central America", central_america));
  name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("Caribbean", caribbean));
  name_to_vec_.insert(std::pair<std::string, std::vector<std::string>>("UK", uk));
}

void Data::PopulateAirports() {
  airports.push_back(std::array<int, 4>{252, 243, 262, 253}); //ATL
  airports.push_back(std::array<int, 4>{1101, 204, 1111, 214}); //PEK
  airports.push_back(std::array<int, 4>{93, 235, 103, 245}); //LAX
  airports.push_back(std::array<int, 4>{1207, 220, 1217, 230}); //HND
  airports.push_back(std::array<int, 4>{848, 288, 858, 298}); //DXB
  airports.push_back(std::array<int, 4>{235, 200, 245, 210}); //ORD
  airports.push_back(std::array<int, 4>{608, 141, 618, 151}); //LHR
  airports.push_back(std::array<int, 4>{1136, 250, 1146, 260}); //PVG
  airports.push_back(std::array<int, 4>{623, 161, 633, 171}); //CDG
  airports.push_back(std::array<int, 4>{185, 245, 195, 255}); //DFW

  airports.push_back(std::array<int, 4>{1120, 292, 1130, 302}); //CAN
  airports.push_back(std::array<int, 4>{630, 140, 640, 150}); //AMS
  airports.push_back(std::array<int, 4>{1122, 294, 1132, 304}); //HKG
  airports.push_back(std::array<int, 4>{644, 158, 654, 168}); //FRA
  airports.push_back(std::array<int, 4>{145, 206, 155, 216}); //DEN
  airports.push_back(std::array<int, 4>{1158, 220, 1168, 230}); //ICN
  airports.push_back(std::array<int, 4>{1080, 405, 1090, 415}); //SIN
  airports.push_back(std::array<int, 4>{950, 275, 960, 285}); //DEL
  airports.push_back(std::array<int, 4>{1065, 345, 1075, 355}); //BKK
  airports.push_back(std::array<int, 4>{1100, 445, 1110, 455}); //CGK

  airports.push_back(std::array<int, 4>{291, 204, 301, 214}); //JFK
  airports.push_back(std::array<int, 4>{1075, 400, 1085, 410}); //KUL
  airports.push_back(std::array<int, 4>{594, 207, 604, 217}); //MAD
  airports.push_back(std::array<int, 4>{86, 215, 96, 225}); //SFO
  airports.push_back(std::array<int, 4>{1080, 260, 1090, 270}); //CTU

}

void Data::PopulateVuln() {
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

  // Adjust these from [0,1] to [.25, .75]
  for (auto pair : vuln_index_) {
    adjusted_vuln_index_.insert(
        std::pair<std::string, float>(pair.first, (pair.second / 2) + .25));
  }
}

void Data::PopulateRegionVuln() {
  //Calculate averages and add them to the vuln by region map
  for (const auto& pair : adjusted_vuln_index_) {
    //If the country is its own region
    if (CategorizeLoc(pair.first) == pair.first) {
      vuln_by_region_.insert(std::pair<std::string, float>(pair.first, pair.second));
    } else {
      bool found = false;
      for (const auto& other_pairs : vuln_by_region_) {
        // If the region has been calculated, break
        // Otherwise calculate and add the region
        if (other_pairs.first == CategorizeLoc(pair.first)) {
          found = true;
        }
      }
      // TODO: Office hours to find out why this is an invalid key
      if (!found) {
        float average =
            ComputeAvgScore(name_to_vec_.at(CategorizeLoc(pair.first)));
        vuln_by_region_.insert(
            std::pair<std::string, float>(CategorizeLoc(pair.first), average));

      }
    }
  }
  std::cout << "blank" << std::endl;
}

float Data::ComputeAvgScore(const std::vector<std::string>& region) {
  float sum = 0;

  for (auto country : region) {
    sum += adjusted_vuln_index_.at(country);
  }

  return (sum / region.size());
}

std::string Data::CategorizeLoc(std::string country) {
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
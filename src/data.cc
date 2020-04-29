//
// Created by tejas on 4/27/2020.
//
#include "data.h"

namespace data {

Data::Data() {
  PopulateRegions();
  PopulateAirports();
  PopulateVuln();
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
  vuln_index_.insert(std::pair<char*, float>("Somalia", 0.0));
  vuln_index_.insert(std::pair<char*, float>("Central African Republic", 0.000061));
  vuln_index_.insert(std::pair<char*, float>("Chad", 0.098450));
  vuln_index_.insert(std::pair<char*, float>("South Sudan", 0.100836));
  vuln_index_.insert(std::pair<char*, float>("Mauritania", 0.107294));
  vuln_index_.insert(std::pair<char*, float>("Angola", 0.148414));
  vuln_index_.insert(std::pair<char*, float>("Haiti", 0.149471));
  vuln_index_.insert(std::pair<char*, float>("Afghanistan", 0.157034));
  vuln_index_.insert(std::pair<char*, float>("Niger", 0.166531));
  vuln_index_.insert(std::pair<char*, float>("Madagascar", 0.170787));

  vuln_index_.insert(std::pair<char*, float>("Democratic Republic of the Congo", 0.181762));
  vuln_index_.insert(std::pair<char*, float>("Mali", 0.184254));
  vuln_index_.insert(std::pair<char*, float>("Guinea-Bissau", 0.181762));
  vuln_index_.insert(std::pair<char*, float>("Benin", 0.206682));
  vuln_index_.insert(std::pair<char*, float>("The Gambia", 0.207809));
  vuln_index_.insert(std::pair<char*, float>("Liberia", 0.213114));
  vuln_index_.insert(std::pair<char*, float>("Guinea", 0.213225));
  //vuln_index_.insert(std::pair<char*, float>("Sao Tome and Principe", 0.223256));
  vuln_index_.insert(std::pair<char*, float>("Sierra Leone", 0.223397));
  vuln_index_.insert(std::pair<char*, float>("Burkina Faso", 0.231504));

  vuln_index_.insert(std::pair<char*, float>("Comoros", 0.238068));
  vuln_index_.insert(std::pair<char*, float>("Yemen", 0.250277));
  vuln_index_.insert(std::pair<char*, float>("Eritrea", 0.252978));
  vuln_index_.insert(std::pair<char*, float>("Togo", 0.259396));
  vuln_index_.insert(std::pair<char*, float>("Mozambique", 0.262501));
  vuln_index_.insert(std::pair<char*, float>("Republic of the Congo", 0.268887));
  vuln_index_.insert(std::pair<char*, float>("Nigeria", 0.270681));
  vuln_index_.insert(std::pair<char*, float>("Cote d'Ivoire", 0.270743));
  vuln_index_.insert(std::pair<char*, float>("Malawi", 0.279987));
  vuln_index_.insert(std::pair<char*, float>("Sudan", 0.291580));

  vuln_index_.insert(std::pair<char*, float>("Djibouti", 0.297892));
  vuln_index_.insert(std::pair<char*, float>("Pakistan", 0.308544));
  //vuln_index_.insert(std::pair<char*, float>("Timor-Leste", 0.310208));
  vuln_index_.insert(std::pair<char*, float>("Senegal", 0.329156));
  vuln_index_.insert(std::pair<char*, float>("Zimbabwe", 0.337478));
  vuln_index_.insert(std::pair<char*, float>("Papua New Guinea", 0.339184));
  vuln_index_.insert(std::pair<char*, float>("Tanzania", 0.340445));
  vuln_index_.insert(std::pair<char*, float>("Lesotho", 0.344860));
  //vuln_index_.insert(std::pair<char*, float>("Burundi", 0.354104));
  vuln_index_.insert(std::pair<char*, float>("Laos", 0.355111));

  vuln_index_.insert(std::pair<char*, float>("Cambodia", 0.355133));
  vuln_index_.insert(std::pair<char*, float>("Rwanda", 0.355300));
  vuln_index_.insert(std::pair<char*, float>("Swaziland", 0.358470));
  vuln_index_.insert(std::pair<char*, float>("Uganda", 0.365850));
  //vuln_index_.insert(std::pair<char*, float>("Solomon Islands", 0.370311));
  vuln_index_.insert(std::pair<char*, float>("North Korea", 0.374870));
  vuln_index_.insert(std::pair<char*, float>("Ethiopia", 0.382021));
  vuln_index_.insert(std::pair<char*, float>("Kenya", 0.385436));
  //vuln_index_.insert(std::pair<char*, float>("Kiribati", 0.388403));
  vuln_index_.insert(std::pair<char*, float>("Cameroon", 0.388770));

  vuln_index_.insert(std::pair<char*, float>("Syria", 0.391337));
  vuln_index_.insert(std::pair<char*, float>("Gabon", 0.402950));
  vuln_index_.insert(std::pair<char*, float>("Nepal", 0.404405));
  vuln_index_.insert(std::pair<char*, float>("Honduras", 0.407296));
  vuln_index_.insert(std::pair<char*, float>("Zambia", 0.420459));
  vuln_index_.insert(std::pair<char*, float>("Bangladesh", 0.422107));
  //vuln_index_.insert(std::pair<char*, float>("Micronesia", 0.425305));
  vuln_index_.insert(std::pair<char*, float>("Equatorial Guinea", 0.430054));
  vuln_index_.insert(std::pair<char*, float>("Iraq", 0.432182));
  vuln_index_.insert(std::pair<char*, float>("Myanmar", 0.448176));

  //vuln_index_.insert(std::pair<char*, float>("Palestine", 0.450415));
  vuln_index_.insert(std::pair<char*, float>("Bhutan", 0.460880));
  vuln_index_.insert(std::pair<char*, float>("Ghana", 0.462565));
  vuln_index_.insert(std::pair<char*, float>("Guatemala", 0.477179));
  //vuln_index_.insert(std::pair<char*, float>("Cape Verde", 0.486189));
  vuln_index_.insert(std::pair<char*, float>("Turkmenistan", 0.486696));
  vuln_index_.insert(std::pair<char*, float>("Namibia", 0.490478));
  //vuln_index_.insert(std::pair<char*, float>("Vanuatu", 0.490878));
  vuln_index_.insert(std::pair<char*, float>("Nicaragua", 0.492491));
  vuln_index_.insert(std::pair<char*, float>("Libya", 0.493272));

  vuln_index_.insert(std::pair<char*, float>("India", 0.493799));
  vuln_index_.insert(std::pair<char*, float>("Algeria", 0.496612));
  vuln_index_.insert(std::pair<char*, float>("Dominican Republic", 0.499533));
  vuln_index_.insert(std::pair<char*, float>("Jamaica", 0.499783));
  vuln_index_.insert(std::pair<char*, float>("Bolivia", 0.500436));
  vuln_index_.insert(std::pair<char*, float>("Tajikistan", 0.507026));
  vuln_index_.insert(std::pair<char*, float>("Uzbekistan", 0.515492));
  vuln_index_.insert(std::pair<char*, float>("Saint Lucia", 0.516511));
  vuln_index_.insert(std::pair<char*, float>("Bosnia and Herzegovina", 0.523079));
  vuln_index_.insert(std::pair<char*, float>("Egypt", 0.530405));

  vuln_index_.insert(std::pair<char*, float>("Venezuela", 0.530692));
  vuln_index_.insert(std::pair<char*, float>("Tunisia", 0.535451));
  vuln_index_.insert(std::pair<char*, float>("Paraguay", 0.541167));
  //vuln_index_.insert(std::pair<char*, float>("Marshall Islands", 0.544611));
  vuln_index_.insert(std::pair<char*, float>("Philippines", 0.544923));
  vuln_index_.insert(std::pair<char*, float>("Lebanon", 0.546332));
  vuln_index_.insert(std::pair<char*, float>("Botswana", 0.548363));
  //vuln_index_.insert(std::pair<char*, float>("Saint Vincent and the Grenadines", 0.549145));
  //vuln_index_.insert(std::pair<char*, float>("Azerbaijan", 0.550328));
  vuln_index_.insert(std::pair<char*, float>("Belize", 0.551546));

  vuln_index_.insert(std::pair<char*, float>("Guyana", 0.554987));
  vuln_index_.insert(std::pair<char*, float>("Suriname", 0.555320));
  vuln_index_.insert(std::pair<char*, float>("Kyrgyzstan", 0.555486));
  vuln_index_.insert(std::pair<char*, float>("Indonesia", 0.562944));
  //vuln_index_.insert(std::pair<char*, float>("Fiji", 0.567238));
  vuln_index_.insert(std::pair<char*, float>("Iran", 0.567841));
  vuln_index_.insert(std::pair<char*, float>("Serbia", 0.568934));
  vuln_index_.insert(std::pair<char*, float>("Morocco", 0.569769));
  vuln_index_.insert(std::pair<char*, float>("Sri Lanka", 0.571001));
  vuln_index_.insert(std::pair<char*, float>("Ecuador", 0.575843));

  //vuln_index_.insert(std::pair<char*, float>("Maldives", 0.576299));
  //vuln_index_.insert(std::pair<char*, float>("Samoa", 0.580679));
  vuln_index_.insert(std::pair<char*, float>("Colombia", 0.583850));
  //vuln_index_.insert(std::pair<char*, float>("Trinidad and Tobago", 0.594998));
  vuln_index_.insert(std::pair<char*, float>("Grenada", 0.597669));
  vuln_index_.insert(std::pair<char*, float>("Kosovo", 0.599085));
  //vuln_index_.insert(std::pair<char*, float>("Dominica", 0.604170));
  vuln_index_.insert(std::pair<char*, float>("Panama", 0.606521));
  vuln_index_.insert(std::pair<char*, float>("Kazakhstan", 0.607098));
  vuln_index_.insert(std::pair<char*, float>("El Salvador", 0.607731));

  //vuln_index_.insert(std::pair<char*, float>("Tuvalu", 0.608741));
  vuln_index_.insert(std::pair<char*, float>("Montenegro", 0.612065));
  vuln_index_.insert(std::pair<char*, float>("Belarus", 0.616419));
  vuln_index_.insert(std::pair<char*, float>("Ukraine", 0.617343));
  vuln_index_.insert(std::pair<char*, float>("Andorra", 0.625221));
  vuln_index_.insert(std::pair<char*, float>("Vietnam", 0.626124));
  vuln_index_.insert(std::pair<char*, float>("Mongolia", 0.626185));
  vuln_index_.insert(std::pair<char*, float>("Albania", 0.626259));
  //vuln_index_.insert(std::pair<char*, float>("Seychelles", 0.628108));
  //vuln_index_.insert(std::pair<char*, float>("Tonga", 0.630046));

  vuln_index_.insert(std::pair<char*, float>("Oman", 0.633743));
  //vuln_index_.insert(std::pair<char*, float>("Mauritius", 0.635763));
  vuln_index_.insert(std::pair<char*, float>("Moldova", 0.635987));
  vuln_index_.insert(std::pair<char*, float>("Russia", 0.639878));
  vuln_index_.insert(std::pair<char*, float>("Peru", 0.645670));
  vuln_index_.insert(std::pair<char*, float>("Bahamas", 0.653653));
  vuln_index_.insert(std::pair<char*, float>("Romania", 0.657694));
  //vuln_index_.insert(std::pair<char*, float>("Palau", 0.658010));
  vuln_index_.insert(std::pair<char*, float>("China", 0.663535));
  //vuln_index_.insert(std::pair<char*, float>("Bahrain", 0.663702));

  vuln_index_.insert(std::pair<char*, float>("Kuwait", 0.664856));
  //vuln_index_.insert(std::pair<char*, float>("Cyprus", 0.665630));
  vuln_index_.insert(std::pair<char*, float>("Bulgaria", 0.666120));
  vuln_index_.insert(std::pair<char*, float>("Turkey", 0.677438));
  //vuln_index_.insert(std::pair<char*, float>("Barbados", 0.681515));
  vuln_index_.insert(std::pair<char*, float>("Macedonia", 0.685990));
  //vuln_index_.insert(std::pair<char*, float>("San Marino", 0.687314));
  //vuln_index_.insert(std::pair<char*, float>("Saint Kitts and Nevis", 0.691572));
  //vuln_index_.insert(std::pair<char*, float>("Antigua and Barbuda", 0.693938));
  vuln_index_.insert(std::pair<char*, float>("Cuba", 0.695910));

  vuln_index_.insert(std::pair<char*, float>("South Africa", 0.697292));
  //vuln_index_.insert(std::pair<char*, float>("Malta", 0.706869));
  vuln_index_.insert(std::pair<char*, float>("Armenia", 0.706912));
  vuln_index_.insert(std::pair<char*, float>("Argentina", 0.707041));
  vuln_index_.insert(std::pair<char*, float>("Jordan", 0.707361));
  //vuln_index_.insert(std::pair<char*, float>("Taiwan", 0.709691));
  vuln_index_.insert(std::pair<char*, float>("Thailand", 0.711334));
  vuln_index_.insert(std::pair<char*, float>("Brazil", 0.716641));
  vuln_index_.insert(std::pair<char*, float>("Croatia", 0.719996));
  vuln_index_.insert(std::pair<char*, float>("Greece", 0.734145));

  vuln_index_.insert(std::pair<char*, float>("Mexico", 0.734971));
  vuln_index_.insert(std::pair<char*, float>("Georgia", 0.735821));
  vuln_index_.insert(std::pair<char*, float>("Saudi Arabia", 0.736844));
  vuln_index_.insert(std::pair<char*, float>("Costa Rica", 0.736960));
  //vuln_index_.insert(std::pair<char*, float>("Liechtenstein", 0.737219));
  vuln_index_.insert(std::pair<char*, float>("Uruguay", 0.745957));
  vuln_index_.insert(std::pair<char*, float>("Monaco", 0.753737));
  vuln_index_.insert(std::pair<char*, float>("Malaysia", 0.761135));
  vuln_index_.insert(std::pair<char*, float>("Brunei", 0.762886));
  vuln_index_.insert(std::pair<char*, float>("Latvia", 0.763937));

  vuln_index_.insert(std::pair<char*, float>("United Arab Emirates", 0.765200));
  vuln_index_.insert(std::pair<char*, float>("Lithuania", 0.771597));
  vuln_index_.insert(std::pair<char*, float>("Israel", 0.782439));
  vuln_index_.insert(std::pair<char*, float>("Poland", 0.782799));
  vuln_index_.insert(std::pair<char*, float>("Qatar", 0.787534));
  vuln_index_.insert(std::pair<char*, float>("Hungary", 0.795623));
  vuln_index_.insert(std::pair<char*, float>("Estonia", 0.797443));
  vuln_index_.insert(std::pair<char*, float>("Chile", 0.801129));
  vuln_index_.insert(std::pair<char*, float>("Slovenia", 0.805790));
  vuln_index_.insert(std::pair<char*, float>("Slovakia", 0.808457));

  vuln_index_.insert(std::pair<char*, float>("Italy", 0.821690));
  vuln_index_.insert(std::pair<char*, float>("Czech Republic", 0.847175));
  vuln_index_.insert(std::pair<char*, float>("France", 0.855407));
  vuln_index_.insert(std::pair<char*, float>("Belgium", 0.870933));
  vuln_index_.insert(std::pair<char*, float>("Austria", 0.874243));
  vuln_index_.insert(std::pair<char*, float>("Spain", 0.875475));
  //vuln_index_.insert(std::pair<char*, float>("Luxembourg", 0.875694));
  vuln_index_.insert(std::pair<char*, float>("Singapore", 0.878289));
  vuln_index_.insert(std::pair<char*, float>("South Korea", 0.879402));
  vuln_index_.insert(std::pair<char*, float>("Portugal", 0.888782));

  vuln_index_.insert(std::pair<char*, float>("United Kingdom", 0.897495));
  vuln_index_.insert(std::pair<char*, float>("Ireland", 0.906320));
  vuln_index_.insert(std::pair<char*, float>("Iceland", 0.908112));
  vuln_index_.insert(std::pair<char*, float>("Australia", 0.912517));
  vuln_index_.insert(std::pair<char*, float>("Switzerland", 0.915839));
  vuln_index_.insert(std::pair<char*, float>("New Zealand", 0.916279));
  vuln_index_.insert(std::pair<char*, float>("Netherlands", 0.918935));
  vuln_index_.insert(std::pair<char*, float>("United States", 0.924939));
  vuln_index_.insert(std::pair<char*, float>("Japan", 0.926410));
  vuln_index_.insert(std::pair<char*, float>("Denmark", 0.953641));

  vuln_index_.insert(std::pair<char*, float>("Sweden", 0.955625));
  vuln_index_.insert(std::pair<char*, float>("Germany", 0.966890));
  vuln_index_.insert(std::pair<char*, float>("Finland", 0.968274));
  vuln_index_.insert(std::pair<char*, float>("Canada", 0.973400));
  vuln_index_.insert(std::pair<char*, float>("Norway", 1.0));

  //Adjust these from [0,1] to [.25, .75]
  for (auto pair : adjusted_vuln_index_) {
    pair.second = (pair.second / 2) + .25;
  }

  //Calculate averages and add them to the vuln by region map
  vuln_by_region_.insert(std::pair<char*, float>("United Kingdom", ComputeAvgScore(uk)));
  vuln_by_region_.insert(std::pair<char*, float>("Northern South America", ComputeAvgScore(northern_south_america)));
  vuln_by_region_.insert(std::pair<char*, float>("Western South America", ComputeAvgScore(western_south_america)));
  vuln_by_region_.insert(std::pair<char*, float>("Southern South America", ComputeAvgScore(southern_south_america)));
  vuln_by_region_.insert(std::pair<char*, float>("Caribbean", ComputeAvgScore(caribbean)));
  vuln_by_region_.insert(std::pair<char*, float>("Central America", ComputeAvgScore(central_america)));
  vuln_by_region_.insert(std::pair<char*, float>("United Kingdom", 0.0));
  vuln_by_region_.insert(std::pair<char*, float>("United Kingdom", 0.0));
  vuln_by_region_.insert(std::pair<char*, float>("United Kingdom", 0.0));
  vuln_by_region_.insert(std::pair<char*, float>("United Kingdom", 0.0));

  vuln_by_region_.insert(std::pair<char*, float>("United Kingdom", 0.0));
  vuln_by_region_.insert(std::pair<char*, float>("United Kingdom", 0.0));
  vuln_by_region_.insert(std::pair<char*, float>("United Kingdom", 0.0));
  vuln_by_region_.insert(std::pair<char*, float>("United Kingdom", 0.0));
  vuln_by_region_.insert(std::pair<char*, float>("United Kingdom", 0.0));
  vuln_by_region_.insert(std::pair<char*, float>("United Kingdom", 0.0));
  vuln_by_region_.insert(std::pair<char*, float>("United Kingdom", 0.0));
  vuln_by_region_.insert(std::pair<char*, float>("United Kingdom", 0.0));
  vuln_by_region_.insert(std::pair<char*, float>("United Kingdom", 0.0));
  vuln_by_region_.insert(std::pair<char*, float>("United Kingdom", 0.0));

  vuln_by_region_.insert(std::pair<char*, float>("United Kingdom", 0.0));
  vuln_by_region_.insert(std::pair<char*, float>("United Kingdom", 0.0));
  vuln_by_region_.insert(std::pair<char*, float>("United Kingdom", 0.0));
  vuln_by_region_.insert(std::pair<char*, float>("United Kingdom", 0.0));
  vuln_by_region_.insert(std::pair<char*, float>("United Kingdom", 0.0));
  vuln_by_region_.insert(std::pair<char*, float>("United Kingdom", 0.0));
  vuln_by_region_.insert(std::pair<char*, float>("United Kingdom", 0.0));
  vuln_by_region_.insert(std::pair<char*, float>("United Kingdom", 0.0));
  vuln_by_region_.insert(std::pair<char*, float>("United Kingdom", 0.0));
  vuln_by_region_.insert(std::pair<char*, float>("United Kingdom", 0.0));
}

float Data::ComputeAvgScore(const std::vector<char*>& region) {
  float sum = 0;

  for (auto& country : region) {
    sum += vuln_index_.at(country);
  }

  return sum / region.size();
}

}
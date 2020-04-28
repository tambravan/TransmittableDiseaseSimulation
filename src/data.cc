//
// Created by tejas on 4/27/2020.
//
#include "data.h"

namespace data {

Data::Data() = default;
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
  vuln_index_.insert(std::pair<std::string, float>("Central African Republic", 0.000061));
  vuln_index_.insert(std::pair<std::string, float>("Chad", 0.098450));
  vuln_index_.insert(std::pair<std::string, float>("South Sudan", 0.100836));
  vuln_index_.insert(std::pair<std::string, float>("Mauritania", 0.107294));
  vuln_index_.insert(std::pair<std::string, float>("Angola", 0.148414));
  vuln_index_.insert(std::pair<std::string, float>("Haiti", 0.149471));
  vuln_index_.insert(std::pair<std::string, float>("Afghanistan", 0.157034));
  vuln_index_.insert(std::pair<std::string, float>("Niger", 0.166531));
  vuln_index_.insert(std::pair<std::string, float>("Madagascar", 0.170787));

  vuln_index_.insert(std::pair<std::string, float>("Democratic Republic of the Congo", 0.181762));
  vuln_index_.insert(std::pair<std::string, float>("Mali", 0.184254));
  vuln_index_.insert(std::pair<std::string, float>("Guinea-Bissau", 0.181762));
  vuln_index_.insert(std::pair<std::string, float>("Benin", 0.206682));
  vuln_index_.insert(std::pair<std::string, float>("The Gambia", 0.207809));
  vuln_index_.insert(std::pair<std::string, float>("Liberia", 0.213114));
  vuln_index_.insert(std::pair<std::string, float>("Guinea", 0.213225));
  vuln_index_.insert(std::pair<std::string, float>("Sao Tome and Principe", 0.223256));
  vuln_index_.insert(std::pair<std::string, float>("Sierra Leone", 0.223397));
  vuln_index_.insert(std::pair<std::string, float>("Burkina Faso", 0.231504));

  vuln_index_.insert(std::pair<std::string, float>("Comoros", 0.238068));
  vuln_index_.insert(std::pair<std::string, float>("Yemen", 0.250277));
  vuln_index_.insert(std::pair<std::string, float>("Eritrea", 0.252978));
  vuln_index_.insert(std::pair<std::string, float>("Togo", 0.259396));
  vuln_index_.insert(std::pair<std::string, float>("Mozambique", 0.262501));
  vuln_index_.insert(std::pair<std::string, float>("Republic of the Congo", 0.268887));
  vuln_index_.insert(std::pair<std::string, float>("Nigeria", 0.270681));
  vuln_index_.insert(std::pair<std::string, float>("Cote d'Ivoire", 0.270743));
  vuln_index_.insert(std::pair<std::string, float>("Malawi", 0.279987));
  vuln_index_.insert(std::pair<std::string, float>("Sudan", 0.291580));

  vuln_index_.insert(std::pair<std::string, float>("Djibouti", 0.297892));
  vuln_index_.insert(std::pair<std::string, float>("Pakistan", 0.308544));
  vuln_index_.insert(std::pair<std::string, float>("Timor-Leste", 0.310208));
  vuln_index_.insert(std::pair<std::string, float>("Senegal", 0.329156));
  vuln_index_.insert(std::pair<std::string, float>("Zimbabwe", 0.337478));
  vuln_index_.insert(std::pair<std::string, float>("Papua New Guinea", 0.339184));
  vuln_index_.insert(std::pair<std::string, float>("Tanzania", 0.340445));
  vuln_index_.insert(std::pair<std::string, float>("Lesotho", 0.344860));
  vuln_index_.insert(std::pair<std::string, float>("Burundi", 0.354104));
  vuln_index_.insert(std::pair<std::string, float>("Laos", 0.355111));

  vuln_index_.insert(std::pair<std::string, float>("Cambodia", 0.355133));
  vuln_index_.insert(std::pair<std::string, float>("Rwanda", 0.355300));
  vuln_index_.insert(std::pair<std::string, float>("Swaziland", 0.358470));
  vuln_index_.insert(std::pair<std::string, float>("Uganda", 0.365850));
  vuln_index_.insert(std::pair<std::string, float>("Solomon Islands", 0.370311));
  vuln_index_.insert(std::pair<std::string, float>("North Korea", 0.374870));
  vuln_index_.insert(std::pair<std::string, float>("Ethiopia", 0.382021));
  vuln_index_.insert(std::pair<std::string, float>("Kenya", 0.385436));
  vuln_index_.insert(std::pair<std::string, float>("Kiribati", 0.388403));
  vuln_index_.insert(std::pair<std::string, float>("Cameroon", 0.388770));

  vuln_index_.insert(std::pair<std::string, float>("Syria", 0.391337));
  vuln_index_.insert(std::pair<std::string, float>("Gabon", 0.402950));
  vuln_index_.insert(std::pair<std::string, float>("Nepal", 0.404405));
  vuln_index_.insert(std::pair<std::string, float>("Honduras", 0.407296));
  vuln_index_.insert(std::pair<std::string, float>("Zambia", 0.420459));
  vuln_index_.insert(std::pair<std::string, float>("Bangladesh", 0.422107));
  vuln_index_.insert(std::pair<std::string, float>("Micronesia", 0.425305));
  vuln_index_.insert(std::pair<std::string, float>("Equatorial Guinea", 0.430054));
  vuln_index_.insert(std::pair<std::string, float>("Iraq", 0.432182));
  vuln_index_.insert(std::pair<std::string, float>("Myanmar", 0.448176));

  vuln_index_.insert(std::pair<std::string, float>("Palestine", 0.450415));
  vuln_index_.insert(std::pair<std::string, float>("Bhutan", 0.460880));
  vuln_index_.insert(std::pair<std::string, float>("Ghana", 0.462565));
  vuln_index_.insert(std::pair<std::string, float>("Guatemala", 0.477179));
  vuln_index_.insert(std::pair<std::string, float>("Cape Verde", 0.486189));
  vuln_index_.insert(std::pair<std::string, float>("Turkmenistan", 0.486696));
  vuln_index_.insert(std::pair<std::string, float>("Namibia", 0.490478));
  vuln_index_.insert(std::pair<std::string, float>("Vanuatu", 0.490878));
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
  vuln_index_.insert(std::pair<std::string, float>("Bosnia and Herzegovina", 0.523079));
  vuln_index_.insert(std::pair<std::string, float>("Egypt", 0.530405));

  vuln_index_.insert(std::pair<std::string, float>("Venezuela", 0.530692));
  vuln_index_.insert(std::pair<std::string, float>("Tunisia", 0.535451));
  vuln_index_.insert(std::pair<std::string, float>("Paraguay", 0.541167));
  vuln_index_.insert(std::pair<std::string, float>("Marshall Islands", 0.544611));
  vuln_index_.insert(std::pair<std::string, float>("Philippines", 0.544923));
  vuln_index_.insert(std::pair<std::string, float>("Lebanon", 0.546332));
  vuln_index_.insert(std::pair<std::string, float>("Botswana", 0.548363));
  vuln_index_.insert(std::pair<std::string, float>("Saint Vincent and the Grenadines", 0.549145));
  vuln_index_.insert(std::pair<std::string, float>("Azerbaijan", 0.550328));
  vuln_index_.insert(std::pair<std::string, float>("Belize", 0.551546));

  vuln_index_.insert(std::pair<std::string, float>("Guyana", 0.554987));
  vuln_index_.insert(std::pair<std::string, float>("Suriname", 0.555320));
  vuln_index_.insert(std::pair<std::string, float>("Kyrgyzstan", 0.555486));
  vuln_index_.insert(std::pair<std::string, float>("Indonesia", 0.562944));
  vuln_index_.insert(std::pair<std::string, float>("Fiji", 0.567238));
  vuln_index_.insert(std::pair<std::string, float>("Iran", 0.567841));
  vuln_index_.insert(std::pair<std::string, float>("Serbia", 0.568934));
  vuln_index_.insert(std::pair<std::string, float>("Morocco", 0.569769));
  vuln_index_.insert(std::pair<std::string, float>("Sri Lanka", 0.571001));
  vuln_index_.insert(std::pair<std::string, float>("Ecuador", 0.575843));

  vuln_index_.insert(std::pair<std::string, float>("Maldives", 0.576299));
  vuln_index_.insert(std::pair<std::string, float>("Samoa", 0.580679));
  vuln_index_.insert(std::pair<std::string, float>("Colombia", 0.583850));
  vuln_index_.insert(std::pair<std::string, float>("Trinidad and Tobago", 0.594998));
  vuln_index_.insert(std::pair<std::string, float>("Grenada", 0.597669));
  vuln_index_.insert(std::pair<std::string, float>("Kosovo", 0.599085));
  vuln_index_.insert(std::pair<std::string, float>("Dominica", 0.604170));
  vuln_index_.insert(std::pair<std::string, float>("Panama", 0.606521));
  vuln_index_.insert(std::pair<std::string, float>("Kazakhstan", 0.607098));
  vuln_index_.insert(std::pair<std::string, float>("El Salvador", 0.607731));

  vuln_index_.insert(std::pair<std::string, float>("Tuvalu", 0.608741));
  vuln_index_.insert(std::pair<std::string, float>("Montenegro", 0.612065));
  vuln_index_.insert(std::pair<std::string, float>("Belarus", 0.616419));
  vuln_index_.insert(std::pair<std::string, float>("Ukraine", 0.617343));
  vuln_index_.insert(std::pair<std::string, float>("Andorra", 0.625221));
  vuln_index_.insert(std::pair<std::string, float>("Vietnam", 0.626124));
  vuln_index_.insert(std::pair<std::string, float>("Mongolia", 0.626185));
  vuln_index_.insert(std::pair<std::string, float>("Albania", 0.626259));
  vuln_index_.insert(std::pair<std::string, float>("Seychelles", 0.628108));
  vuln_index_.insert(std::pair<std::string, float>("Tonga", 0.630046));

  vuln_index_.insert(std::pair<std::string, float>("Oman", 0.633743));
  vuln_index_.insert(std::pair<std::string, float>("Mauritius", 0.635763));
  vuln_index_.insert(std::pair<std::string, float>("Moldova", 0.635987));
  vuln_index_.insert(std::pair<std::string, float>("Russia", 0.639878));
  vuln_index_.insert(std::pair<std::string, float>("Peru", 0.645670));
  vuln_index_.insert(std::pair<std::string, float>("Bahamas", 0.653653));
  vuln_index_.insert(std::pair<std::string, float>("Romania", 0.657694));
  vuln_index_.insert(std::pair<std::string, float>("Palau", 0.658010));
  vuln_index_.insert(std::pair<std::string, float>("China", 0.663535));
  vuln_index_.insert(std::pair<std::string, float>("Bahrain", 0.663702));

  vuln_index_.insert(std::pair<std::string, float>("Kuwait", 0.664856));
  vuln_index_.insert(std::pair<std::string, float>("Cyprus", 0.665630));
  vuln_index_.insert(std::pair<std::string, float>("Bulgaria", 0.666120));
  vuln_index_.insert(std::pair<std::string, float>("Turkey", 0.677438));
  vuln_index_.insert(std::pair<std::string, float>("Barbados", 0.681515));
  vuln_index_.insert(std::pair<std::string, float>("Macedonia", 0.685990));
  vuln_index_.insert(std::pair<std::string, float>("San Marino", 0.687314));
  vuln_index_.insert(std::pair<std::string, float>("Saint Kitts and Nevis", 0.691572));
  vuln_index_.insert(std::pair<std::string, float>("Antigua and Barbuda", 0.693938));
  vuln_index_.insert(std::pair<std::string, float>("Cuba", 0.695910));

  vuln_index_.insert(std::pair<std::string, float>("South Africa", 0.697292));
  vuln_index_.insert(std::pair<std::string, float>("Malta", 0.706869));
  vuln_index_.insert(std::pair<std::string, float>("Armenia", 0.706912));
  vuln_index_.insert(std::pair<std::string, float>("Argentina", 0.707041));
  vuln_index_.insert(std::pair<std::string, float>("Jordan", 0.707361));
  vuln_index_.insert(std::pair<std::string, float>("Taiwan", 0.709691));
  vuln_index_.insert(std::pair<std::string, float>("Thailand", 0.711334));
  vuln_index_.insert(std::pair<std::string, float>("Brazil", 0.716641));
  vuln_index_.insert(std::pair<std::string, float>("Croatia", 0.719996));
  vuln_index_.insert(std::pair<std::string, float>("Greece", 0.734145));

  vuln_index_.insert(std::pair<std::string, float>("Mexico", 0.734971));
  vuln_index_.insert(std::pair<std::string, float>("Georgia", 0.735821));
  vuln_index_.insert(std::pair<std::string, float>("Saudi Arabia", 0.736844));
  vuln_index_.insert(std::pair<std::string, float>("Costa Rica", 0.736960));
  vuln_index_.insert(std::pair<std::string, float>("Liechtenstein", 0.737219));
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
  vuln_index_.insert(std::pair<std::string, float>("Luxembourg", 0.875694));
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
  for (auto pair : adjusted_vuln_index_) {
    pair.second = (pair.second / 2) + .25;
  }
}
}
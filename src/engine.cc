//
// Created by tejas on 4/28/2020.
//

#include "engine.h"

namespace engine {

void engine::Begin(char* start_loc) {

  std::string start(start_loc);

  startloc = CategorizeLoc(start);

}

std::string CategorizeLoc(std::string country) {
  std::string to_return;
  if (country == "Colombia" || country == "Venezuela" || country == "Guyana" || country == "Suriname") {
    to_return = "Northern South America";
  } else if (country == "Peru" || country == "Ecuador" || country == "Bolivia") {
    to_return = "Western South America";
  } else if (country == "Argentina" || country == "Paraguay" || country == "Chile" || country == "Uruguay") {
    to_return = "Southern South America";
  } else if (country == "Norway" || country == "Sweden" || country == "Finland" || country == "Denmark") {
    to_return = "Scandinavia";
  } else if (country == "Russia" || country == "Lithuania" || country == "Latvia" || country == "Estonia") {
    to_return = "Russia";
  } else if (country == "Germany" || country == "Poland" || country == "Belarus") {
    to_return = "Germany";
  } else if (country == "France" || country == "Monaco" || country == "Andorra" || country == "Netherlands" || country == "Belgium" || country == "Switzerland") {
    to_return = "France";
  } else if (country == "Spain" || country == "Portugal") {
    to_return = "Spain";
  } else if (country == "Romania" || country == "Ukraine") {
    to_return = "Ukraine";
  } else if (country == "Austria" || country == "Hungary" || country == "Czech Republic" || country == "Slovakia") {
    to_return = "Central Europe";
  } else if (country == "Slovenia" || country == "Croatia" || country == "Bosnia and Herzegovina" || country == "Serbia" || country == "Bulgaria"
    || country == "Greece" || country == "Macedonia" || country == "Albania" || country == "Montenegro" || country == "Moldova" || country == "Kosovo") {
    to_return == "Eastern Europe";
  } else if (country == "Somalia" || country == "Ethiopia" || country == "Kenya" || country == "Democratic Republic of the Congo" || country == "Gabon"
    || country == "Central African Republic" || country == "Cameroon" || country == "Republic of the Congo" || country == "Uganda" || country == "Rwanda") {
    to_return = "Central Africa";
  } else if (country == "South Africa" || country == "Lesotho" || country == "Swaziland" || country == "Mozambique" || country == "Angola" || country == "Botswana"
    || country == "Namibia" || country == "Zimbabwe" || country == "Zambia" || country == "Malawi" || country == "Tanzania") {
    to_return = "Southern Africa";
  } else if (country == "Tunisia" || country == "Algeria" || country == "Nigeria" || country == "Niger" || country == "Morocco" || country == "Mali"
    || country == "Mauritania" || country == "Senegal" || country == "The Gambia" || country == "Guinea-Bissau" || country == "Guinea" || country == "Sierra Leone"
    || country == "Liberia" || country == "Cote d'Ivoire" || country == "Equatorial Guinea" || country == "Ghana" || country == "Togo" || country == "Benin") {
    to_return == "Western Africa";
  } else if (country == "Libya" || country == "Egypt" || country == "Sudan" || country == "South Sudan" || country == "Chad" || country == "Eritrea") {
    to_return = "North Africa";
  } else if (country == "Saudi Arabia" || country == "Yemen" || country == "Oman" || country == "United Arab Emirates" || country == "Qatar" || country == "Israel"
    || country == "Jordan" || country == "Iraq" || country == "Lebanon" || country == "Syria" || country == "Kuwait") {
    to_return = "Middle East";
  } else if (country == "India" || country == "Nepal" || country == "Bangladesh" || country == "Bhutan" || country == "Sri Lanka") {
    to_return = "India";
  } else if (country == "Pakistan" || country == "Afghanistan") {
    to_return = "Pakistan";
  } else if (country == "Turkmenistan" || country == "Uzbekistan" || country == "Kyrgyzstan" || country == "Tajikistan") {
    to_return = "Stans";
  } else if (country == "Myanmar" || country == "Thailand" || country == "Laos" || country == "Cambodia" || country == "Vietnam" || country == "Malaysia"
    || country == "Singapore") {
    to_return = "Southeast Asia";
  } else if (country == "Indonesia" || country == "Brunei" || country == "Papua New Guinea") {
    to_return = "Indonesia";
  } else if (country == "Australia" || country == "New Zealand" || country == "Marshall Islands") {
    to_return = "Australia";
  } else {
    to_return = country;
  }

  return to_return;
}

}
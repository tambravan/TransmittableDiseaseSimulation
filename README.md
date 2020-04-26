# Transmittable Disease Simulation: Generating Heatmaps for Diseases Based on Various Real World Factors
A C++ project by Tejas Ambravan

## Project Summary
  This project is created in light of the recent events of the COVID-19 Global Pandemic. This is a simulation that is run on the spreading of diseases based on various factors. Users will be able to pick a starting location for a disease, and adjust various factors that contribute to disease spread. This would include sliders for variables such as R<sub>0</sub>, research funding, social distancing measures, awareness, travel restrictions, economic factors, etc.
  
  The end goal is to be as realistic as possible in the simulation. Below are detailed items to take into account for the major variables in disease spread.
  
  The main deliverable is a graphical representation of disease spread using C++ libraries and framework. This will be the form of a heatmap mapping the spread of the disease.
  
## Background
  I have always had an interest in the spreading of major diseases and past pandemics, ranging from extremely early plagues such as the Plague of Justinian in the 6th century all the way to recent outbreaks such as SARS, Swine Flu, and COVID-19. Current world events allow an opportunity to channel this interest into a C++ project.
  
## Main Spread Factors (By Country)
These factors can be read about in more detail with descriptions [here](https://www.rand.org/pubs/research_reports/RR1605.html). Data was collected through this study, and all credit to them for calculating the indices.
### Population/Quality of life
  * Population Density
  * Urbanization
  * Population Growth
  * Education/Literacy
  * Population mobility
    * High mobility increase disease susceptability
  * Water, sanitation, and hygiene
  * Human Rights
  
### Medical Capabilities
  * Medical care workforce
  * Medical expenditures
  * Medical infrastructure
  * Overall health status
  * Health services/primary care delivery
  * Basic public health
  * International Health Regulation core capacity
  
### Social/Economic/Political status
  * [GHSA](https://www.thecompassforsbc.org/sbcc-tools/ghsa-action-packages) Action Packages
  * Governance
  * Corruption
  * Service provision
  * Decentralization
  * Democracy
  * Government Stability
  * Conflict

### Environment
  * Precipitation/Rainfall
  * Temperature
  * Land Use
   
## External Libraries and Sources
This Transmittable Disease Simulation will leverage the following libraries:
  * Cinder
    * Cinder is a free open source library for professional quality creative and visual coding in C++
    * Cinder can be read more about [here](https://libcinder.org/).
  * Cinder Block: Cinder-ImGui
    * ImGui is a graphical user interface which works with Cinder. It simplifies the process of creating user interfaces and improves visualization and debugging.
    * ImGui is suited for real time 3D applications, full screen applications, games, etc.
    * More about ImGui can be read about [here](https://github.com/simongeilfus/Cinder-ImGui) (GitHub).
  * Research study: Identifying Future Disease Hot Spots
    * This is a study done by Melinda Moore, Bill Gelfeld, Adeyemi Theophilus Okunogbe, and Christopher Paul
    * This study takes into account the current state of every country and gives a ranking (disease vulnerability index) and a score normalized from 0 to 1, inclusive ([0, 1])
    * More can be read about [here](https://www.rand.org/pubs/research_reports/RR1605.html)
    * The calculated index takes into account all factors listed above
### Regional Divisions
These are the regions the world will be divided into for simplicity
* North America
    * Canada
    * USA
    * Mexico
    * Caribbean
    * Central America
* South America
    * Brazil
    * Northen South America
        * Colombua
        * Venezuela
        * Guyana
        * Suriname
    * Eastern South America
        * Peru
        * Ecuador
        * Bolivia
    * Southern South America
        * Argentina
        * Chile
        * Paraguay
        * Uruguay
* Europe
    * Scandinavia
        * Norway
        * Sweden
        * Finland
        * Denmark
    * Russia/Lithania/Latvia/Estonia
    * Germany/Poland/Belarus
    * UK
    * France/Netherlands/Belgium/Switzerland
    * Spain/Portugal
    * Italy
    * Ukraine/Romania
    * Central Europe
        * Austria
        * Hungary
        * Czech Republic
        * Hungary
        * Slovakia
    * Eastern Europe
        * Slovenia
        * Croatia
        * Bosnia and Herzegovina
        * Serbia
        * Bulgaria
        * Greece
        * Etc.
* Africa
    * Southern Africa
        * South of 7°S latitude
    * Central Africa
        * Somalia
        * Ethiopia
        * Kenya
        * DRC
        * Gabon
        * CAR
        * Cameroon
        * ROC
        * Uganda
        * Rwanda
    * West Africa
        * West of 10°E longitude
    * North Africa
        * Egypt
        * Libya
        * Chad
        * Sudan
        * Eritrea
* Asia
    * Turkey
    * Middle East
        * Saudi Arabia
        * Yemen
        * Oman
        * UAE
        * Qatar
        * Israel
        * Jordan
        * Iraq
        * Lebanon
        * Syria
        * Kuwait
    * Iran
    * Kazakhstan
    * India/Nepal/Bangladesh/Sri Lanka
    * Pakistan/Afghanistan
    * Turkmenistan/Uzbekistan/Kyrgyzstan/Tajikistan
    * Mongolia
    * China
    * Japan
    * South East Asia
        * Myanmar
        * Thailand
        * Laos
        * Cambodia
        * Vietnam
        * Malaysia
        * Singapore
    * Indonesia/Brunei/PNG
* Australia/NZ/Pacific Islands
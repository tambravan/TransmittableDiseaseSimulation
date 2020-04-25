# Transmittable Disease Simulation: Generating Heatmaps for Diseases Based on Various Real World Factors
A C++ project by Tejas Ambravan

## Project Summary
  This project is created in light of the recent events of the COVID-19 Global Pandemic. This is a simulation that is run on the spreading of diseases based on various factors. Users will be able to pick a starting location for a disease, and adjust various factors that contribute to disease spread. This would include sliders for variables such as R<sub>0</sub>, research funding, social distancing measures, awareness, travel restrictions, economic factors, etc.
  
  The end goal is to be as realistic as possible in the simulation. Below are detailed items to take into account for the major variables in disease spread.
  
  The main deliverable is a graphical representation of disease spread using C++ libraries and framework. This will be the form of a heatmap mapping the spread of the disease.
  
## Background
  I have always had an interest in the spreading of major diseases and past pandemics, ranging from extremely early plagues such as the Plague of Justinian in the 6th century all the way to recent outbreaks such as SARS, Swine Flu, and COVID-19. Current world events allow an opportunity to channel this interest into a C++ project.
  
## Main Spread Factors 
### Travel
  
  * Flights
    * Domestic flight Travel
    * International flight Travel
    * High traffic airports
  * Water
    * Common cargo ports
    * Cruise liners
    * Passenger boats
  * Ground Vehicles
    * Car travel between states, countries

### Risk By Country
  * Economy
    * Strength of economy
    * Ability to fund relief checks
    * Loss of business, jobs, and unemployment
  * Quality of Life
    * Population density
    * Cleanliness and hygiene
    * Average age
    * Life expectancy
  * Environment
    * Temperature
    * Possible vectors (e.g. mosquitos in warmer climates)
    
### Infectivity
  * Basic repriduction number, R<sub>0</sub>, which represents the expected number of cases genereated by one case
  * Death rates
  * Detectability (symptoms)

### Preventative Measures
  * Travel Bans
    * Closing air and sea ports
    * Blocking domestic travel
  * Quarantine and testing
    * Testing and availability by country
    * Forced/self quarantine
  * Research
    * Research funding and subsidies
    
## External Libraries
This Transmittable Disease Simulation will leverage the following libraries:
  * Cinder
    * Cinder is a free open source library for professional quality creative and visual coding in C++
    * Cinder can be read more about [here](https://libcinder.org/).
  * EpiFire
    * EpiFire is a C++ library for contact network epidemiology.
    * More information about EpiFire is located [here](https://bmcbioinformatics.biomedcentral.com/articles/10.1186/1471-2105-13-76) and [here (GitHub)](https://github.com/tjhladish/EpiFire).
  * Infectious Disease Modelling
    * This is a model which provides some framework on spread of diseases
    * Infectious Disease modelling can be read more about [here](https://github.com/temp3rr0r/InfectiousDiseaseModelling).
  * Cinder Block: Cinder-ImGui
    * ImGui is a graphical user interface which works with Cinder. It simplifies the process of creating user interfaces and improves visualization and debugging.
    * ImGui is suited for real time 3D applications, full screen applications, games, etc.
    * More about ImGui can be read about [here(GitHub)](https://github.com/simongeilfus/Cinder-ImGui).

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
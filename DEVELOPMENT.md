# Development

- **04/13/2020** Wrote outline and goals for project in README
  - Contains factors, libraries, and goals for the project
  - Next steps are to configure libraries with CMake

- **04/16/2020** Start working on configuration for EpiFire
  - Update CMake, found some build issues
  
- **04/19/2020** Find new library: Cinder Block ImGui
  - Start working on configuration for ImGui
  - Import the ImGui repository
  - Start debugging build error
  
- **04/20/2020** Fix and configure ImGui
  - Add sliders, text, etc to experiment with features

- **04/23/2020 - 04/24/2020** Find image to use as background for project, set its size
  - Start developing UI in ImGui

- **04/25/2020** Find existing data for disease vulnerability
  - Add citation to README and update factors shown
  
- **04/26/2020** Develop the UI With ImGui
  - Add sliders for more factors
  - Start/Pause button
  - Experiment with adding ports to the map
  
- **04/27/2020** Add indices for disease vulnerability
  - Basic python script to print out all the map.insert() statements
  - Populate the indices from 0-1 and adjust them to .25-.75
  
- **04/27/2020** Add data.h/.cc for storing vulnerability and airport data
  - Populates and stores data about airports and vulnerability
  
- **04/28/2020** Work with ImGui to create a listbox for displaying data
  - List box should show starting countries and the stats when selected
  - Need to figure out issues with types (ImGui uses char* instead of std::string)
  
- **04/28/2020** Create engine.cc/.h, the core of the game
  - Create a begin method and categorize method, which store the start location and reset all factors
  - Add to data struct vectors of groupings for countries
  - Comment out some countries in data that are small (e.g. vatican city/vanuatu/monaco etc.)
  
- **04/29/2020** Debug errors with ImGui ListBox
  - Display list box of all countries
  - Add functionality to dynamically change the displayed name and index in ImGui
  - Refactor CategorizeLoc() to use created vectors
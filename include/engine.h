//
// Created by tejas on 4/26/2020.
//

#ifndef FINALPROJECT_ENGINE_H
#define FINALPROJECT_ENGINE_H

#endif  // FINALPROJECT_ENGINE_H

#include <string>
#include <map>

namespace engine {
  std::map<std::string, float> vuln_index_;
  std::map<std::string, float> adjusted_vuln_index;

  void PopulateVuln();
}
#ifndef TOKEN_FUN_H_
#define TOKEN_FUN_H_

#include <iostream>
#include <iterator>
#include <map>
#include <string>

#include "fun.hpp"

struct data {
    float deceleration;
    bool enable;
};

class MapExample {
  public:
    MapExample();
    void FillMap();
    void PrintMapData();
    void SearchMapData();
    std::map<int, data> MapOfData;
    data data_one;
    data data_two;
};

#endif  // TOKEN_FUN_H_

#include "fun.hpp"

// Define constructor
MapExample::MapExample(){};

void MapExample::FillMap()
{
    // Inserting data
    data_one.deceleration = 10;
    data_one.enable = true;
    MapOfData.insert(std::make_pair(1,data_one));
    data_two.deceleration = 10;
    data_two.enable = true;
    MapOfData.insert(std::make_pair(2,data_two));   
}

void MapExample::PrintMapData()
{
    // Check map size
    std::cout << "Map size: " << MapOfData.size() << std::endl;
    // Plot all elements
    std::map<int,data>::iterator it = MapOfData.begin();
    while (it != MapOfData.end())
    {
        data data_value = it->second;
        std::cout << "Key value: " << it->first << std::endl;
        std::cout << "Data - deceleration: " << data_value.deceleration << std::endl;
        std::cout << "Data - enable; " << data_value.enable << std::endl;
        it++;
    }
}

void MapExample::SearchMapData()
{
    data data_searched = MapOfData.find(1)->second;
    std::cout << data_searched.deceleration << std::endl;
}

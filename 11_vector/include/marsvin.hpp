#ifndef MARSVIN_H_
#define MARSVIN_H_

#include <iostream>
#include <vector>

class Marsvin {
  public:
    Marsvin();
    static void PrintVector(const std::vector<float>& vec);
    static std::vector<float> GetSubvector(const std::vector<float>& vec,
                                           std::size_t i,
                                           std::size_t j);
};

#endif  // MARSVIN_H_

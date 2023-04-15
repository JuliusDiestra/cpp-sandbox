#ifndef MARSVIN_H_
#define MARSVIN_H_

#include <iostream>
#include <vector>

class LogMarsvin {
  public:
    LogMarsvin();
    static void PrintVector(const std::vector<float>& vec);
    static std::vector<float> GetSubvector(const std::vector<float>& vec,
                                           std::size_t i,
                                           std::size_t j);
    void operator<<(const std::vector<float>& vect);
    void operator<<(const float number);
};

#endif  // MARSVIN_H_

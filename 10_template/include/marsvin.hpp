#ifndef MARSVIN_H_
#define MARSVIN_H_

#include <functional>
#include <iostream>

// template <typename T>
class Marsvin {
  public:
    Marsvin();
    int AddingInt(int, int);
    template <typename T>
    T Adding(T, T);
};

template <typename T>
T Marsvin::Adding(T x, T y) {
    return x + y;
}

#endif  // MARSVIN_H_

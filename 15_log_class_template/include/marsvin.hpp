#ifndef MARSVIN_H_
#define MARSVIN_H_

#include <iostream>
#include <vector>

class LogMarsvin {
  public:
    LogMarsvin();
    template <typename T>
    void operator<<(const std::vector<T>& vect);
};

LogMarsvin::LogMarsvin() {
}

template <typename T>
void LogMarsvin::operator<<(const std::vector<T>& vect) {
    for (int j = 0; j < vect.size(); j++) {
        std::cout << vect[j] << std::endl;
    }
}

#endif  // MARSVIN_H_

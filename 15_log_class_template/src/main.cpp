#include "marsvin.hpp"

int main() {
    LogMarsvin logger_;
    std::vector<float> vect{1, 2, 3};
    std::cout << vect.size() << std::endl;
    logger_ << vect;
}

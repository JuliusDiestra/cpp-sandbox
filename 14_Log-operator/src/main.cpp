#include "marsvin.hpp"

int main() {
    LogMarsvin logger_;
    // Initate vector
    std::vector<float> vec_{1,2,3,4,5,6};
    // Print size of vector
    std::cout << "Vector size: " << vec_.size()  << std::endl;
    // Print vector
    logger_ << vec_;
    logger_ << 5;


    return 0;
}


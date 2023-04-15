#include "marsvin.hpp"

// Define constructor
Marsvin::Marsvin(){};

void Marsvin::PrintVector(const std::vector<float>& vec) {
    for (std::size_t j = 0; j < vec.size(); j++) {
        if (j != vec.size() - 1) {
            std::cout << vec.at(j) << '\t';
        } else {
            std::cout << vec.at(j) << '\n';
        }
    }
}

std::vector<float> Marsvin::GetSubvector(const std::vector<float>& vec,
                                         std::size_t i,
                                         std::size_t j) {
    std::vector<float>::const_iterator i_iterator = vec.begin() + i;
    std::vector<float>::const_iterator j_iterator = vec.begin() + j + 1;
    std::vector<float> subvector{i_iterator, j_iterator};
    return subvector;
}

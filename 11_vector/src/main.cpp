#include "marsvin.hpp"

int main() {
    // Initate vector
    std::vector<float> vec_{1,2,3,4,5,6};
    // Print size of vector
    std::cout << "Vector size: " << vec_.size()  << std::endl;
    // Print vector using marsvin functions
    Marsvin::PrintVector(vec_);
    // Apend value to vector
    vec_.push_back(7);
    std::cout << "Append value to vector: " << std::endl;
    Marsvin::PrintVector(vec_);
    // Replace value in vector
    std::cout << "Set value 30 into position 3: " << std::endl;
    vec_.at(3) = 30;
    Marsvin::PrintVector(vec_);
    // Insert value at specific location
    std::cout << "Insert value after position 3: " << std::endl;
    vec_.insert(vec_.begin()+4,40.0f);
    Marsvin::PrintVector(vec_);
    // Get subvector
    std::cout << "Get subvector. Intervars 0-3 : " << std::endl;
    std::vector<float> subVector = Marsvin::GetSubvector(vec_,0,3);
    Marsvin::PrintVector(subVector);
    return 0;
}


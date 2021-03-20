#include "fun.hpp"

// Define constructor
LongitudinalControl::LongitudinalControl() {};

void LongitudinalControl::Algorithm() {
    if (input_.enable == true)
    {
        output_.deceleration = 10*input_.velocity;
    }
    else 
    {
        output_.deceleration = 0;
    }
}

void LongitudinalControl::SetInput(InputData input_) {
    this->input_ = input_;
    std::cout << " Input Data set: " << std::endl;
    std::cout << " velocity : " << input_.velocity  << std::endl;
    std::cout << " enable : " << input_.enable  << std::endl;
}

InputData LongitudinalControl::GetInputData() {
    return input_;   
}

OutputData LongitudinalControl::GetOutputData() {
    return output_;
}

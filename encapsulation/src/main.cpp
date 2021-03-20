#include "fun.hpp"

int main(int argc, char *argv[])
{
    // Create LongitudinalControl Object
    LongitudinalControl object;
    // Set inputs
    std::cout << "Setting inputs in object" << std::endl;
    InputData input_;
    input_.velocity = 10;
    input_.enable = true;
    object.SetInput(input_);
    // Run Complex Algorithm
    std::cout << "### Running Algorithm ###" << std::endl;
    object.Algorithm();
    // Read output
    std::cout << "### Get Outputs of object ###" << std::endl;
    std::cout << "Deceleration : " << object.GetOutputData().deceleration << std::endl;
    // Read Input....just in case
    std::cout << "### Get Inputs of object ###" << std::endl;
    std::cout << "Input - velocity : " << object.GetInputData().velocity << std::endl;
    std::cout << "Input - enable : " << object.GetInputData().enable << std::endl;
    return 0;
}

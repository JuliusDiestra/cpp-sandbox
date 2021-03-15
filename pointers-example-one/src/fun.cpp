#include "fun.hpp"

// Define constructor
PointerExample::PointerExample(){};

void PointerExample::Run()
{
    // Define variable
    int var = 8;
    // Define pointer
    int *pointerVar;
    // Store address of "var" variable in pointerVar
    pointerVar = &var;
    // Prints "var" value
    std::cout << "var :" << var << std::endl;
    // Prints pointer value (it's an address)
    std::cout << "pointerVar :" << pointerVar << std::endl;
    // Prints address of variable "var"
    std::cout << "&var :" << &var << std::endl;
    // Prints value store in adress "pointerVar"
    std::cout << "*pointerVar :" << *pointerVar << std::endl;
    // Change value store in address "pointerVar"
    *pointerVar = 9;
    // Prints new value store in address "pointerVar"
    std::cout << "*pointerVar :" << *pointerVar << std::endl;
    // Update Pointer Value
    UpdateValue(pointerVar,10);
    std::cout << "*pointerVar :" << *pointerVar << std::endl;
    // Define structure
    data data_one;
    data_one.deceleration = 10;
    data_one.enable = true;
    // Define pointer to structure
    data *pointerData;
    pointerData = &data_one;
    // Print pointer data values
    std::cout << "Define porinter to structure" << std::endl;
    std::cout << "Pointer deceleration : " << (*pointerData).deceleration << std::endl;
    std::cout << "Pointer enable : " << (*pointerData).enable << std::endl;
    
    
}


void PointerExample::UpdateValue(int *pointer,int value)
{
    *pointer = value;
}


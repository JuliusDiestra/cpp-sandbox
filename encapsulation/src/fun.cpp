#include "fun.hpp"

// Define constructor
LongitudinalControl::LongitudinalControl(){};

void LongitudinalControl::Algorithm()
{
    if (input.enable == true)
    {
        output.deceleration = 10*input.velocity;
    }
    else 
    {
        output.deceleration = 0;
    }
}


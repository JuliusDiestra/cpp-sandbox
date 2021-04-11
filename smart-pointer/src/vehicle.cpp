#include "vehicle.hpp"

// Define constructor
Vehicle::Vehicle(){};

void Vehicle::SetVelocity(float velocity_)
{
    this->velocity_ = velocity_;         
}

void Vehicle::SetAcceleration(float acceleration_)
{
    this->acceleration_ = acceleration_;
}

float Vehicle::GetVelocity() {
    return velocity_;
}

float Vehicle::GetAcceleration() {
    return acceleration_;
}



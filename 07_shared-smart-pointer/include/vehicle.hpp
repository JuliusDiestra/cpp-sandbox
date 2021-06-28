#ifndef TOKEN_VEHICLE_H_
#define TOKEN_VEHICLE_H_

#include <iostream>
#include <memory>

class Vehicle
{
    public:
        Vehicle();
        float GetVelocity();
        float GetAcceleration();
        void SetVelocity(float velocity_);
        void SetAcceleration(float acceleration_);
    private:
        float velocity_;
        float acceleration_;
};

#endif // TOKEN_VEHICLE_H_


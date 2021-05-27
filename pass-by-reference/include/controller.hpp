#ifndef TOKEN_CONTROLLER_H_
#define TOKEN_CONTROLLER_H_

#include <iostream>
#include <memory>
#include "vehicle.hpp"

class Controller
{
    public:
        Controller(Vehicle& _vehicle);
        float GetActuation();
        void CalculateActuation(std::shared_ptr<Vehicle> vehicle_);
        void ChangeVehicleVelocity(float new_velocity);
    private:
        float actuation_;
        float new_velocity;
        Vehicle& vehicle;
};

#endif // TOKEN_CONTROLLER_H_


#include "controller.hpp"

#include "vehicle.hpp"

// Define constructor
Controller::Controller(){};

float Controller::GetActuation() {
    return actuation_;
}

void Controller::CalculateActuation(std::unique_ptr<Vehicle> vehicle_) {
    float velocity = vehicle_->GetVelocity();
    float acceleration = vehicle_->GetAcceleration();
    actuation_ = 2 * velocity + 4 * acceleration;
}

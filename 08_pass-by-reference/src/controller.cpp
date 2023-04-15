#include "controller.hpp"

#include "vehicle.hpp"

// Define constructor
Controller::Controller(Vehicle& _vehicle) :
  vehicle(_vehicle){};

float Controller::GetActuation() {
    return actuation_;
}

void Controller::CalculateActuation(std::shared_ptr<Vehicle> vehicle_) {
    float velocity = vehicle_->GetVelocity();
    float acceleration = vehicle_->GetAcceleration();
    actuation_ = 2 * velocity + 4 * acceleration;
}

void Controller::ChangeVehicleVelocity(float new_velocity) {
    vehicle.SetVelocity(new_velocity);
}

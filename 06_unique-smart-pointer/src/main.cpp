#include "controller.hpp"
#include "vehicle.hpp"

int main(int argc, char *argv[]) {
    // Define Unique pointer
    std::unique_ptr<Vehicle> vehicle_ = std::make_unique<Vehicle>();
    // Define another unique pointer
    std::unique_ptr<Vehicle> vehicle_two_ = std::make_unique<Vehicle>();
    // Set velocity values
    vehicle_->SetVelocity(20);
    vehicle_->SetAcceleration(30);
    // Set acceleration values
    vehicle_two_->SetVelocity(40);
    vehicle_two_->SetAcceleration(60);
    // Print velocity and acceleration from vehicle_ pointer
    std::cout << "## vehicle_ ##:" << std::endl;
    std::cout << "Velocity: " << vehicle_->GetVelocity() << std::endl;
    std::cout << "Acceleration: " << vehicle_->GetAcceleration() << std::endl;
    std::cout << "## vehicle_two_ ##:" << std::endl;
    std::cout << "Velocity: " << vehicle_two_->GetVelocity() << std::endl;
    std::cout << "Acceleration: " << vehicle_two_->GetAcceleration()
              << std::endl;
    // Using std::move
    std::cout << "##### Moving vehicle_ to vehicle_three_ ####" << std::endl;
    std::unique_ptr<Vehicle> vehicle_three_;
    vehicle_three_ = std::move(vehicle_);
    // Print velocity value from new smart pointer vehicle_three_
    std::cout << "##vehicle_three:##" << std::endl;
    std::cout << "Velocity: " << vehicle_three_->GetVelocity() << std::endl;
    std::cout << "Acceleration: " << vehicle_three_->GetAcceleration()
              << std::endl;
    // Create Controller Pointer
    std::unique_ptr<Controller> controller_ = std::make_unique<Controller>();
    // Run controller using vehicle_ pointer information
    std::cout << "##Controller##" << std::endl;
    controller_->CalculateActuation(std::move(vehicle_three_));
    float actuation = controller_->GetActuation();
    std::cout << "Actuation :" << actuation << std::endl;
    return 0;
}

#include "controller.hpp"
#include "vehicle.hpp"

int main(int argc, char *argv[]) {
    // Define Unique pointer
    std::unique_ptr<Vehicle> vehicle_ = std::make_unique<Vehicle>();

    // Set velocity values
    vehicle_->SetVelocity(20);
    vehicle_->SetAcceleration(30);
    // Print velocity and acceleration from vehicle_ pointer
    std::cout << "## vehicle_ ##:" << std::endl;
    std::cout << "Velocity: " << vehicle_->GetVelocity() << std::endl;
    std::cout << "Acceleration: " << vehicle_->GetAcceleration() << std::endl;
    // Create Controller Pointer
    std::unique_ptr<Controller> controller_ = std::make_unique<Controller>();
    // Run controller using vehicle_ pointer information
    std::cout << "##Controller##" << std::endl;
    controller_->CalculateActuation(std::move(vehicle_));
    std::cout << "Actuation :" << controller_->GetActuation() << std::endl;
    std::cout << "controller_ memory:" << controller_.get() << std::endl;
    // vehicle_ was moved to controller_ , after that the unique_prt was
    // destroyed. The following addres is NULL or zero.
    std::cout << "vehicle_ memory:" << vehicle_.get() << std::endl;

    // Using shared_ptr
    std::shared_ptr<Vehicle> vehicle_shared_ = std::make_shared<Vehicle>();
    // Set velocity values
    vehicle_shared_->SetVelocity(20);
    vehicle_shared_->SetAcceleration(50);
    // Print velocity and acceleration from vehicle_ pointer
    std::cout << "## vehicle_shared_ ##:" << std::endl;
    std::cout << "Velocity: " << vehicle_shared_->GetVelocity() << std::endl;
    std::cout << "Acceleration: " << vehicle_shared_->GetAcceleration()
              << std::endl;
    std::cout << "vehicle_shared_ memory:" << vehicle_shared_.get()
              << std::endl;
    // Create Controller Pointer
    // std::unique_ptr<Controller> controller_ = std::make_unique<Controller>();
    // Run controller using vehicle_ pointer information
    std::cout << "##Controller##" << std::endl;
    // controller_-> CalculateActuation(std::move(vehicle_shared_));
    controller_->CalculateActuation(vehicle_shared_);
    std::cout << "Actuation :" << controller_->GetActuation() << std::endl;
    std::cout << "controller_ memory:" << controller_.get() << std::endl;
    // vehicle_ was moved to controller_ , after that the unique_prt was
    // destroyed. The following addres is NULL or zero.
    std::cout << "vehicle_shared_ memory:" << vehicle_shared_.get()
              << std::endl;
    return 0;
}

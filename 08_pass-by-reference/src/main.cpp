#include "vehicle.hpp"
#include "controller.hpp"

int main(int argc, char *argv[]) {

    // Create vehicle object
    Vehicle vehicle;
    vehicle.SetVelocity(20);
    vehicle.SetAcceleration(30);
    std::cout << "### Vehicle Object ###" << std::endl;
    std::cout << "velocity:" << vehicle.GetVelocity() << std::endl;
    std::cout << "acceleration:" << vehicle.GetAcceleration() << std::endl;
    Controller controller(vehicle);
    controller.ChangeVehicleVelocity(40);
    std::cout << "### Vehicle Object ###" << std::endl;
    std::cout << "velocity:" << vehicle.GetVelocity() << std::endl;
    return 0;
}

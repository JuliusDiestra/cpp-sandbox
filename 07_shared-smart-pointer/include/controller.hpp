#ifndef TOKEN_CONTROLLER_H_
#define TOKEN_CONTROLLER_H_

#include <iostream>
#include <memory>

#include "vehicle.hpp"

class Controller {
  public:
    Controller();
    float GetActuation();
    void CalculateActuation(std::shared_ptr<Vehicle> vehicle_);

  private:
    float actuation_;
};

#endif  // TOKEN_CONTROLLER_H_

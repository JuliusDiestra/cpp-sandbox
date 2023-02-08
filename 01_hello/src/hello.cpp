#include "hello.hpp"

Hello::Hello() :
  value_(value),
  mod_(mod){};

void Hello::GreetingOne() {
    std::cout << "Hello, dude" << std::endl;
}

void Hello::GreetingTwo() {
    std::cout << "How are you?" << std::endl;
}

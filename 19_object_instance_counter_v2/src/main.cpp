
#include <iostream>

#include "my_data.hpp"

int main() {
    std::cout << "Create object one" << std::endl;
    MyData instance_one;
    std::cout << "Counter : " << InstanceCounter<MyData>::counter()
              << std::endl;
    std::cout << "ID : " << instance_one.id() << std::endl;
    std::cout << "Instance one data : " << instance_one.data() << std::endl;
    std::cout << "Create object two as copy of obj. one" << std::endl;
    MyData instance_two = instance_one;
    std::cout << "Counter : " << InstanceCounter<MyData>::counter()
              << std::endl;
    std::cout << "ID : " << instance_two.id() << std::endl;
    std::cout << "Instance two data : " << instance_two.data() << std::endl;
    std::cout << "Create object three moving obj. one" << std::endl;
    MyData instance_three = std::move(instance_one);
    std::cout << "Counter : " << InstanceCounter<MyData>::counter()
              << std::endl;
    std::cout << "ID : " << instance_three.id() << std::endl;
    std::cout << "Instance three data : " << instance_three.data() << std::endl;
    return 0;
}

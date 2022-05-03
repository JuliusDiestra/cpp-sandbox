#include "marsvin.hpp"

int main(int argc, char *argv[]) {
    // Function using class object instance
    Marsvin object;
    std::cout << "Adding using template : " <<object.Adding(2.2,3.3) << std::endl;
    int a = 2;
    int b = 3;
    std::cout << "Adding using method fix type : " <<object.AddingInt(a,b) << std::endl;
    return 0;
}


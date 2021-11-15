#include "marsvin.hpp"

int main(int argc, char *argv[]) {
    // Function using class object instance
    Marsvin object;
    std::function<int(int)> f_xtwo = std::bind(&Marsvin::MultiplyByTwo, object, std::placeholders::_1);
    std::cout << "f_xtwo(2) : " <<f_xtwo(2) << std::endl;
    return 0;
}


#include "marsvin.hpp"

int main() {
    std::cout << "------- Marsvin Object One ---------" << std::endl;
    Marsvin<int> marsvin_(3);
    std::cout << "Marsvin Object One - size : " << marsvin_.getSize()
              << std::endl;
    marsvin_.setElement(0, 5);
    marsvin_.setElement(1, 55);
    marsvin_.setElement(2, 555);
    std::cout << "Element 0 : " << marsvin_.getElement(0) << std::endl;
    std::cout << "Element 1 : " << marsvin_.getElement(1) << std::endl;
    std::cout << "Element 2 : " << marsvin_.getElement(2) << std::endl;
    std::cout << "------- Marsvin Object Two ---------" << std::endl;
    Marsvin<int> marsvin_extra_(2);
    marsvin_extra_.setElement(0, 100);
    marsvin_extra_.setElement(1, 200);
    std::cout << "Marsvin Object Two - size : " << marsvin_extra_.getSize()
              << std::endl;
    std::cout << "Element 0 : " << marsvin_extra_.getElement(0) << std::endl;
    std::cout << "Element 1 : " << marsvin_extra_.getElement(1) << std::endl;
    marsvin_.Append(marsvin_extra_);
    std::cout << "------- After appending ---------" << std::endl;
    std::cout << "Marsvin size : " << marsvin_.getSize() << std::endl;
    std::cout << "Element 0 : " << marsvin_.getElement(0) << std::endl;
    std::cout << "Element 1 : " << marsvin_.getElement(1) << std::endl;
    std::cout << "Element 2 : " << marsvin_.getElement(2) << std::endl;
    std::cout << "Element 3 : " << marsvin_.getElement(3) << std::endl;
    std::cout << "Element 4 : " << marsvin_.getElement(4) << std::endl;

    return 0;
}

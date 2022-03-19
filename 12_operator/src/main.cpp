#include "marsvin.hpp"

int main() {
    MarsvinData<float> dataMarsvin(5);
    dataMarsvin.SetEntry(0,0);
    dataMarsvin.SetEntry(1,1);
    dataMarsvin.SetEntry(2,2);
    dataMarsvin.SetEntry(3,3);
    dataMarsvin.SetEntry(4,4);
    std::cout << "Data: " << std::endl;
    dataMarsvin.PrintData();
    dataMarsvin[1] = 100;
    dataMarsvin.PrintData();
    std::cout << "Entry : " << dataMarsvin[2] << std::endl;
    return 0;
}


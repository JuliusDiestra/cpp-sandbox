#include "marsvin.hpp"

int main(int argc, char *argv[])
{
    {
        Marsvin object1("xyz");
    }
    Marsvin object2("abc");
    Marsvin object3("asd");
    Marsvin::printCreatedIds();
    return 0;
}

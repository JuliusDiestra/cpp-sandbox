#include "marsvin.hpp"

int main(int argc, char *argv[])
{
    {
        Marsvin object1("qwe");
    }
    Marsvin object2("asd");
    Marsvin object3("zxc");
    {
        Marsvin object4("zxc");
        Marsvin::printCreatedIds();
    }
    Marsvin object5(object2);
    Marsvin::printCreatedIds();
    return 0;
}

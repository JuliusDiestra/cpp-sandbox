#include "hello.hpp"
#include "helloLib.hpp"

int main(int argc, char *argv[]) {
    Hello object;
    object.GreetingOne();
    object.GreetingTwo();
    HelloLib objectLib;
    objectLib.Greeting();
    return 0;
}

#ifndef TOKEN_FUN_H_
#define TOKEN_FUN_H_

#include <iostream>

struct data
{
    float deceleration;
    bool enable;
};


class PointerExample
{
    public:
        PointerExample();
        void Run();
        void UpdateValue(int *pointer, int value);
};

#endif // TOKEN_FUN_H_


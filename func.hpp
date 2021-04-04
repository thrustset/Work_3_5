#pragma once
#include <iostream>

class Func {
private:
    int numOfVectors;
    Vec *vectors;
public:
    Func();
    Func(int numOfVectors, Vec *source);
    Func(Func &source);
    ~Func();

    friend auto operator<<(std::ostream &os, Func const &func) -> std::ostream &;
};
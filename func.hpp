#pragma once
#include <iostream>
#include <cmath>

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

    auto meanPos(int pos, double (*function)(double) = nullptr) -> double;
    auto meanAbsciss() -> double;
    auto meanOrdinate() -> double;
    auto meanValue(double (*function)(double) = nullptr) -> double;

    auto linearTerm(double (*function)(double) = nullptr) -> double;
    auto interceptTerm(double (*function)(double) = nullptr) -> double;
};

auto simpleFuction(double arg) -> double;
#pragma once
#include <iostream>
#include <cmath>

class Vec {
private:
    int len;
    double *value;
public:
    Vec();
    Vec(int len, const double *value);
    Vec(Vec const &source);
    ~Vec();

    auto operator=(Vec const &source) -> Vec &;

    auto operator+(Vec const &source) const -> Vec;
    auto operator+=(Vec const &source) -> Vec &;

    auto operator*(double coefficient) const -> Vec;
    auto operator*=(double coefficient) -> Vec &;
    auto operator*(Vec const &source) const -> double;

    friend auto operator<<(std::ostream &os, Vec const &vec) -> std::ostream &;
    friend auto operator>>(std::istream &is, Vec &vec) -> std::istream &;

    auto mean(double (*func)(double) = nullptr) const -> double;
    auto getValue(int i) -> double;
    auto getModified(double (*func)(double) = nullptr) -> Vec &;
};

auto printScalarProduct(Vec const &vec1, Vec const &vec2) -> void;
auto printMean(Vec const &vec, double (*func)(double) = nullptr) -> void;
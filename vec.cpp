#include <iostream>
#include <cmath>
#include "vec.hpp"

Vec::Vec() : name{0}, len{0}, value{nullptr} {}

Vec::Vec(char name, int len, const double *value) :
    name{name},
    len{len},
    value{new double[len]}
{
    for(int i = 0; i < len; i++)
        this->value[i] = value[i];
}

Vec::Vec(Vec const &source) :
    name{source.name},
    len{source.len},
    value{new double[len]}
{
    for(int i = 0; i < len; i++)
        this->value[i] = source.value[i];
}

Vec::~Vec() {
    delete [] value;
}

auto Vec::operator=(Vec const &source) -> Vec & {
    name = source.name;
    len = source.len;

    delete [] value;
    value = new double[len];
    for(int i = 0; i < len; i++)
        value[i] = source.value[i];

    return *this;
}

auto Vec::operator+(Vec const &source) const -> Vec {
    char newName = fmax(name, source.name) + 1;
    int newLen = len + source.len;
    auto *newValue = new double[newLen];

    int i;
    for(i = 0; i < len; i++)
        newValue[i] = value[i];
    for(; i < newLen; i++)
        newValue[i] = source.value[i - len];

    return Vec(newName, newLen, newValue);
}

auto Vec::operator+=(Vec const &source) -> Vec & {
    name = fmax(name, source.name) + 1;
    int newLen = len + source.len;
    auto *newValue = new double[newLen];

    int i;
    for(i = 0; i < len; i++)
        newValue[i] = value[i];
    for(; i < newLen; i++)
        newValue[i] = source.value[i - len];

    delete [] value;
    len = newLen;
    value = new double[len];
    for(i = 0; i < newLen; i++)
        value[i] = newValue[i];

    return *this;
}

auto Vec::operator*(double coefficient) const -> Vec {
    auto vec = Vec(*this);
    vec.increaseName();
    for(int i = 0; i < len; i++)
        vec.value[i] *= coefficient;
    return vec;
}

auto Vec::operator*=(double coefficient) -> Vec & {
    for(int i = 0; i < len; i++)
        value[i] *= coefficient;
    return *this;
}

auto Vec::operator*(Vec const &source) const -> double {
    if(len != source.len) {
        std::cout << "Error!\n";
        return 0;
    } else {
        double product = 0;
        for(int i = 0; i < len; i++)
            product += value[i] * source.value[i];
        return product;
    }
}

auto operator<<(std::ostream &os, Vec const &vec) -> std::ostream & {
    os << "Vector " << vec.name << ":\n";
    int n = vec.len;
    for(int i = 0; i < n; i++) {
        os << "\tvalue[" << i << "] = " << vec.value[i] << "\n";
    }
    return os;
}

auto operator>>(std::istream &is, Vec &vec) -> std::istream & {
    std::cout << "Input name: ";
    is >> vec.name;

    std::cout << "Input len: ";
    is >> vec.len;

    delete [] vec.value;
    vec.value = new double[vec.len];

    std::cout << "Input value:\n";
    for(int i = 0; i < vec.len; i++) {
        std::cout << "value[" << i << "] = ";
        is >> vec.value[i];
    }
    return is;
}

auto Vec::getName() const -> char {
    return name;
}

auto Vec::setName(char newName) -> void {
    name = newName;
}

auto Vec::increaseName() -> void {
    this->setName(name + 1);
}

auto Vec::mean(double (*func)(double)) const -> double {
    double sum = 0;

    if(func) {
        for(int i = 0; i < len; i++)
            sum += func(value[i]);
    } else {
        for(int i = 0; i < len; i++)
            sum += value[i];
    }
    return sum / len;
}

auto Vec::getModified(double (*func)(double)) -> Vec & {
    if(func) {
        for(int i = 0; i < len; i++)
            value[i] = func(value[i]);
    }
    return *this;
}

auto printScalarProduct(Vec const &vec1, Vec const &vec2) -> void {
    std::cout << vec1.getName() << " * " << vec2.getName() << " = ";
    std::cout << vec1 * vec2 << "\n";
}

auto printMean(Vec const &vec, double (*func)(double)) -> void {
    std::cout << "Mean of " << vec.getName() << " vector:\t" << vec.mean(func) << "\n";
}













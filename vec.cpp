#include "vec.hpp"

Vec::Vec() : len{0}, value{nullptr} {}

Vec::Vec(int len, const double *value) :
    len{len},
    value{new double[len]}
{
    for(int i = 0; i < len; i++)
        this->value[i] = value[i];
}

Vec::Vec(Vec const &source) :
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
    len = source.len;

    delete [] value;
    value = new double[len];
    for(int i = 0; i < len; i++)
        value[i] = source.value[i];

    return *this;
}

auto Vec::operator+(Vec const &source) const -> Vec {
    int newLen = len + source.len;
    auto *newValue = new double[newLen];

    int i;
    for(i = 0; i < len; i++)
        newValue[i] = value[i];
    for(; i < newLen; i++)
        newValue[i] = source.value[i - len];

    return Vec(newLen, newValue);
}

auto Vec::operator+=(Vec const &source) -> Vec & {
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
    int n = vec.len;

    os << "[";
    for(int i = 0; i < n - 1; i++) {
        os << vec.value[i] << "; ";
    }
    os << vec.value[n - 1] << "]\n";

    return os;
}

auto operator>>(std::istream &is, Vec &vec) -> std::istream & {
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

auto Vec::getValue(int i) -> double {
    return value[i];
}

auto Vec::getModified(double (*func)(double)) -> Vec & {
    if(func) {
        for(int i = 0; i < len; i++)
            value[i] = func(value[i]);
    }
    return *this;
}

auto printScalarProduct(Vec const &vec1, Vec const &vec2) -> void {
    std::cout << "Scalar product:\t" << vec1 * vec2 << "\n";
}

auto printMean(Vec const &vec, double (*func)(double)) -> void {
    std::cout << "Mean of vector:\t" << vec.mean(func) << "\n";
}













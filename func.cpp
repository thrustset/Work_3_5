#include "vec.hpp"
#include "func.hpp"

Func::Func() :
    numOfVectors{0},
    vectors{nullptr}
{}

Func::Func(int numOfVectors, Vec *source) :
    numOfVectors{numOfVectors},
    vectors{new Vec[numOfVectors]}
{
    for(int i = 0; i < numOfVectors; i++)
        vectors[i] = Vec(source[i]);
}

Func::Func(Func &source) :
    numOfVectors{source.numOfVectors},
    vectors{new Vec[numOfVectors]}
{
    for(int i = 0; i < numOfVectors; i++)
        vectors[i] = Vec(source.vectors[i]);
}

Func::~Func() {
    delete [] vectors;
}

auto operator<<(std::ostream &os, Func const &func) -> std::ostream & {
    int n = func.numOfVectors;

    os << "numOfVectors = " << func.numOfVectors << "\n";
    os << "Vectors:\n";
    for(int i = 0; i < n; i++)
        os << "\t" << func.vectors[i];
    return os;
}

auto Func::meanPos(int pos, double (*function)(double)) -> double {
    double sum = 0;

    if(!function) function = simpleFuction;
    for(int i = 0; i < numOfVectors; i++)
        sum += function(vectors[i].getValue(pos));

    return sum / numOfVectors;
}

auto Func::meanAbsciss() -> double {
    return meanPos(0);
}

auto Func::meanOrdinate() -> double {
    return meanPos(1);
}

auto Func::meanValue(double (*function)(double)) -> double {
    return meanPos(0, function);
}

auto Func::linearTerm(double (*function)(double)) -> double {
    double numeratorSum = 0;
    double denomiratorSum = 0;

    double meanAb = meanAbsciss();
    double meanOrd = meanOrdinate();
    double meanVal = meanValue(function);

    if(!function) function = simpleFuction;

    for(int i = 0; i < numOfVectors; i++) {
        numeratorSum += (function(vectors[i].getValue(0)) - meanVal) * (vectors[i].getValue(1) - meanOrd);
        denomiratorSum += pow(function(vectors[i].getValue(0)) - meanVal, 2);
    }

    return numeratorSum / denomiratorSum;
}

auto Func::interceptTerm(double (*function)(double)) -> double {
    return meanOrdinate() - linearTerm(function) * meanValue(function);
}

auto simpleFuction(double arg) -> double {
    return arg;
}
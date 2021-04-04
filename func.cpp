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


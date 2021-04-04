#include <iostream>
#include <fstream>
#include <cmath>
#include "vec.hpp"
#include "func.hpp"

double myExp(double arg) {
    return exp(-pow((arg - 5), 2));
}

auto main() -> int {
    std::ifstream fin("5_InitialData.txt");
    std::ofstream fout("output.txt");

    int len = 2;

    int numOfVectors;
    fin >> numOfVectors;
    fout << numOfVectors << "\n";

    auto **array = new double*[numOfVectors];
    for(int i = 0; i < numOfVectors; i++) {
        array[i] = new double[len];
        for(int j = 0; j < len; j++)
            fin >> array[i][j];
    }

    auto *vectors = new Vec[numOfVectors];
    for(int i = 0; i < numOfVectors; i++)
        vectors[i] = Vec(len, array[i]);

    auto myExpFunc = Func(numOfVectors, vectors);
    std::cout << myExpFunc;
    std::cout << myExpFunc.interceptTerm(myExp) << " + " << myExpFunc.linearTerm(myExp) << " * f(x)\n";

    fin.close();
    fout.close();
    return 0;
}

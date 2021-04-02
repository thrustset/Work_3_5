#include <iostream>
#include <cmath>
#include "vec.hpp"

auto main() -> int {
    int len = 3;
    auto *array = new double[len];
    for(int i = 0; i < len; i++)
        array[i] = 2 * i + 1;

    auto vec1 = Vec('A', len, array);
    delete [] array;

    auto vec2 = vec1 * 2;

    std::cout << vec1;
    std::cout << vec2;

    printScalarProduct(vec1, vec2);

    std::cout << vec1.getModified(sqrt);
    printMean(vec1);
    printMean(vec2, sqrt);

    return 0;
}

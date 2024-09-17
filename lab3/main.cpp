//
// Created by Mykhailo Yaremenko on 17/09/24.
//

#include <iostream>

#include "CDoubleVector.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <values>" << std::endl;
        return 1;
    }

    CDoubleVector* vector = new CDoubleVector(argc - 1);
    for (int i = 0; i < vector->getSize(); i++) {
        vector->set(i, std::stod(argv[i + 1]));
    }
    for (int i = 0; i < vector->getSize(); i++) {
        std::cout << "v[" << i << "]:\t" << vector->get(i) << std::endl;
    }

    std::cout << "Minimum value: " << vector->min() << std::endl;
    std::cout << "Maximum value: " << vector->max() << std::endl;
    std::cout << "Average value: " << vector->avg() << std::endl;
    std::cout << "Calculated expression result: " << vector->calculate() << std::endl;

    CDoubleVector* vector2 = new CDoubleVector(*vector);

    std::cout << "Copy constructor testing: " << std::endl;
    for (int i = 0; i < vector->getSize(); i++) {
        std::cout << "v[" << i << "]:\t" << vector->get(i) << "  " << vector2->get(i) << std::endl;
    }
    delete vector;
    return 0;

}

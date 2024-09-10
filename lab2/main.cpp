//
// Created by Mykhailo Yaremenko on 03/09/24.
//

#include <iostream>

#include "data.cpp"

void swap(double a, double b);

int main() {
    CData* data = new CData;
    std::cout << "Enter a number: " << std::endl;
    double in;
    std::cin >> in;
    data->setA(in);
    std::cout << "Do you want to check? [y/n] " << std::endl;
    char c;
    std::cin >> c;
    if (c == 'y' || c == 'Y') {
        double min;
        double max;
        std::cout << "Enter minimum value: " << std::endl;
        std::cin >> min;
        std::cout << "Enter maximum value: " << std::endl;
        std::cin >> max;
        if (min > max) {
            swap(min, max);
        }
        if (data->checkA(min, max)) {
            std::cout << "The input is within the specified range" << std::endl;
        } else {
            std::cout << "The input is outside of the specified range" << std::endl;
        }

    }
    return 0;
}

void swap(double a, double b) {
        double temp;
        temp = a;
        a = b;
        b = temp;
}
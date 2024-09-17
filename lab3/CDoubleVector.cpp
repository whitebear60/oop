//
// Created by Mykhailo Yaremenko on 17/09/24.
//

#include "CDoubleVector.h"

#include <stdexcept>
#include <cmath>

CDoubleVector::CDoubleVector() {
    init(10);
}

CDoubleVector::CDoubleVector(int size) {
    init(size);

}

CDoubleVector::CDoubleVector(const CDoubleVector &data) {
    this->size = data.size;
    this->data = new double[this->size];
    for (int i = 0; i < this->size; i++) this->data[i] = data.get(i);
}

CDoubleVector::~CDoubleVector() {
    clear();
}

void CDoubleVector::init(int size) {
    this->size = size;
    this->data = new double[this->size];
    for (int i = 0; i < this->size; i++) this->data[i] = 0;

}


int CDoubleVector::getSize() const {
    return this->size;
}

void CDoubleVector::clear() {
    delete[] this->data;
    this->size = 0;
    this->data = nullptr;
}

double CDoubleVector::get(int index) const {
    return this->data[index];
}

void CDoubleVector::set(int index, double value) {
    if (size > 0 && index >= 0 && index < size) {
        this->data[index] = value;
    }
}

double CDoubleVector::avg() const {
    double sum = 0;
    for (int i = 0; i < this->size; i++) sum += this->data[i];
    return sum / this->size;
}

double CDoubleVector::max() const {
    double max = this->data[0];
    for (int i = 0; i < this->size; i++) if (this->data[i] > max) max = this->data[i];
    return max;
}

double CDoubleVector::min() const {
    double min = this->data[0];
    for (int i = 0; i < this->size; i++) if (this->data[i] < min) min = this->data[i];
    return min;
}

double CDoubleVector::calculate() const {
    if (this->size < 10) throw std::out_of_range("To calculate this method, the array should have 10 or more elements. Please provide more arguments.");
    double a = 0;
    double b = 0;
    double c = 0;
    double d = 0;
    for (int i = 0; i < 10; i++) {
        a += std::pow(this->data[i], 2);
    }
    for (int i = 4; i < 9; i++) {
        b += this->data[i];
    }
    for (int i = 1; i < 9; i++) {
        c += this->data[i];
    }
    for (int i = 0; i < 5; i++) {
        d += std::pow(this->data[i], 2);
    }
    if (c - d == 0) throw std::out_of_range("The arrays are invalid; the denominator of the expression equals to 0");

    return (a - b) / (c - d);
}

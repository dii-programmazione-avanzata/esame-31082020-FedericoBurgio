//
// Created by Federico on 31/08/2020.
//

#include "../include/Individuo.h"

Individuo::Individuo(int rangeInizio, int rangeFine, int length)
        : maxValue(rangeInizio), minValue(rangeFine), length(length) {
    srand(time(NULL));
    values = new int[length];
    cout<<"[ ";
    for (int i = 0; i < length; ++i) {

        values[i] = rand() % maxValue + minValue;
        cout << values[i] <<" ";
    }
    cout<<"]";
}

Individuo::~Individuo() {
    delete[] values;

}

int Individuo::getMaxValue() const {
    return maxValue;
}

int Individuo::getMinValue() const {
    return minValue;
}

int Individuo::getLength() const {
    return length;
}

int *Individuo::getValues() const {
    return values;
}

Individuo::Individuo(int length, int *values) : length(length), values(values) {}

void Individuo::printMe() const {
    cout<<"[ ";
    for (int i = 0; i < length; ++i) {

        cout << values[i] <<" ";
    }
    cout<<"]";
}

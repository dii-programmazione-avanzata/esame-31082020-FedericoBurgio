//
// Created by Federico on 31/08/2020.
//

#ifndef BURGIOESAME_INDIVIDUO_H
#define BURGIOESAME_INDIVIDUO_H

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;



class Individuo {
public:
    Individuo(int length, int *values);

private:
    int maxValue, minValue, length;
    int *values;
public:
    int getMaxValue() const;

    int getMinValue() const;

    int getLength() const;

    int *getValues() const;

    Individuo(int rangeInizio, int rangeFine, int length);

    void printMe() const;

    virtual ~Individuo();


};

#endif //BURGIOESAME_INDIVIDUO_H


//
// Created by Federico on 31/08/2020.
//

#ifndef BURGIOESAME_POPOLAZIONE_H
#define BURGIOESAME_POPOLAZIONE_H

#include "Individuo.h"
#include "FunctionBase.h"

class Popolazione {
    Individuo **popolazione;
    FunctionBase *function;
    int N, M, gen;
public:
    Popolazione(Individuo **popolazione, int n, int m, int gen,FunctionBase *function);


    Individuo Crossover(Individuo *donor, Individuo *reciever);
};

#endif //BURGIOESAME_POPOLAZIONE_H

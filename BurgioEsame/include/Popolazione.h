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
    Popolazione(Individuo **popolazione, int n, int m, int gen, FunctionBase *function);


    Individuo Crossover(Individuo *donor, Individuo *reciever);

    void startSim() {
        int *scores = new int[N];
        scores=setScores();
    };

    int *setScores() {
        int *scores = new int[N];
        for (int i = 0; i < N; ++i) {
            function->setInputs(popolazione[i]->getValues());
            scores[i] = function->compute();
        }
    }

    
};

#endif //BURGIOESAME_POPOLAZIONE_H

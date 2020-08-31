//
// Created by Federico on 31/08/2020.
//

#include "../include/Popolazione.h"

Popolazione::Popolazione(Individuo **popolazione,  int n, int m, int gen,FunctionBase *function) : popolazione(
        popolazione), function(function), N(n), M(m), gen(gen) {}

Individuo Popolazione::Crossover(Individuo *donor, Individuo *reciever) {
    srand(time(NULL));
    int minL = min(donor->getLength(), reciever->getLength());
    int maxL = max(donor->getLength(), reciever->getLength());
    int cutEnd = rand() % minL;
    int cutStart = rand() % cutEnd;
    int newLength = (maxL+minL)/2;//problemi sconosciuti con rnad()
    int *val = new int[newLength];
    for (int i = 0; i < cutStart; ++i) {
        val[i]=reciever->getValues()[i];
    }
    for (int j = cutStart; j < cutEnd; ++j) {
        val[j]=donor->getValues()[j];
    }
    for (int k = cutEnd; k < newLength; ++k) {
        val[k]=reciever->getValues()[k];
    }
    return Individuo(newLength, val);


}

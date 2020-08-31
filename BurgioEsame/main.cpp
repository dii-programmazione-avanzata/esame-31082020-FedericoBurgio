#include <iostream>
#include "include/Individuo.h"
#include "include/Popolazione.h"


int main() {
    Individuo a(5,new int[5]{5,5,5,5,5});
    Individuo b(7,new int[7]{66,66,66,66,66,66,66});
    std::cout << "\nHello, World!" << std::endl;
a.printMe();
    Popolazione ab(new Individuo*[2]{&a,&b},1,2,3, nullptr);
    Individuo **P = new Individuo*[3]{&a, &b};
    cout<<"p0\n";
P[0]->printMe();
cout<<"p1\n";
P[1]->printMe();
  ab.Crossover(&a, &b).printMe();

    return 0;
};

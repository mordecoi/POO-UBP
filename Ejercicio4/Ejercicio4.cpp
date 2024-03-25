#include <iostream>
#include <vector>
#include <cstdlib>
#include "namespace.h"

void funcNehuen::funcEjercicio4()
{
    std::vector<int> listaNum;
    srand((unsigned) time(NULL));

    for (int i = 0; i < 15; ++i) {
        int numActual = (1 + rand()%(15 + 1 - 1));
        listaNum.push_back(numActual);
    }
    for (int j = 0; j < 15; ++j) {
        std::cout << "Num " << j+1 << ": " <<listaNum.at(j) << "|";
    }
    std::cout << "\n";
}

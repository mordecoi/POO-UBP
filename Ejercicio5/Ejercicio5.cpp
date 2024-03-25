#include <iostream>
#include "namespace.h"
#include <algorithm>

void funcNehuen::funcEjercicio5()
{
    std::vector<std::string> listaExpr;
    listaExpr.push_back("tomi esta enojado");
    listaExpr.push_back("el qt no funciona");
    listaExpr.push_back("chatgpt no sabe usar Qt");
    listaExpr.push_back("hacer una ventana con una imagen es mas dificil de lo esperado");
    listaExpr.push_back("ahora corto la luz");

    std::cout << "Lista sin ordenar: \n";
    for (int i = 0; i < 5; ++i) {
        std::cout << listaExpr.at(i) << "\n";
    }
    std::sort(listaExpr.begin(), listaExpr.end());
    std::cout << "\nLista ordenada: \n";
    for (int i = 0; i < 5; ++i) {
        std::cout << listaExpr.at(i) << "\n";
    }
}

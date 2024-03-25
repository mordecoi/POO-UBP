#include <iostream>
#include <cstdlib>
using namespace std;

void funcEjercicio1()
{
    srand((unsigned) time(NULL));

    for (int i = 0; i < 10; ++i) {
        cout << "Num " << i+1 << ": " << (2 + rand()%(20 + 1 - 2)) << "|";
    }
    cout << "\n";
}

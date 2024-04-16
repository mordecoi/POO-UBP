#include "ejercicioc.cpp"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ejercicioC VentPrin;
    VentPrin.setWindowTitle("Ejercicio C - SIMULACRO");
    VentPrin.show();

    return a.exec();
}

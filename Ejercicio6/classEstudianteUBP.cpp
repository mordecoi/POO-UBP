#include <iostream>
#include <vector>
using namespace std;

class estudianteUBP
{
private:
    string nombre;
    int edad;
    float promedio;
    vector<int> notas;
    bool matriculado;

public:
    //constructores
    estudianteUBP();
    estudianteUBP(string nomb,int ed);
    estudianteUBP(string nomb, int ed, bool matricula);

    //metodos get
    string getNombre() {return nombre;}
    int getEdad() {return edad;}
    float getPromedio() {return promedio;}
    vector<int> getNotas() {return notas;}
    bool getMatricula() {return matriculado;}

    //metodos set
    void setNombre(string nomb) {nombre = nomb;}
    void setEdad(int ed) {edad = ed;}
    void agregarNota(int nota) {notas.push_back(nota);}
    void setMatricula(bool est) {matriculado = est;}

    //metodos de el objeto
    void calcularPromedio();

    ~estudianteUBP();
};

estudianteUBP::estudianteUBP()
{
    nombre = "";
    edad = 0;
    promedio = 0;
    matriculado = false;
}
estudianteUBP::estudianteUBP(string nomb, int ed)
{
    nombre = nomb;
    edad = ed;
    promedio = 0;
    matriculado = false;
}
estudianteUBP::estudianteUBP(string nomb, int ed, bool matricula)
{
    nombre = nomb;
    edad = ed;
    promedio = 0;
    matriculado = matricula;
}

void estudianteUBP::calcularPromedio()
{
    if(notas.size() == 0){
        vector<int> notas = getNotas();
        int acum = 0;
        for (int i = 0; i < notas.size(); ++i) {
            acum += notas.at(i);
        }
        promedio = acum / notas.size();
    }
    else cout << "No se puede calcular el promedio porque no hay notas cargadas.\n";
}

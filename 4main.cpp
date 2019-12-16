#include <iostream>
#include "FiguraGeometrica.h"
#include "Quadrado.h"
#include "Triangulo.h"
#include "Circulo.h"
#include <string>

using namespace std;

int main()
{
    Quadrado quad = Quadrado();
    quad.nome = "Quadrado 1";
    quad.lado = 5;

    Triangulo tri = Triangulo();
    tri.nome = "Triangulo 1";
    tri.altura = 5;
    tri.base = 3.5;

    Circulo circ = Circulo();
    circ.nome = "Circulo 1";
    circ.raio = 2.5;

    cout << "A area do " << quad.nome << " vale " << quad.calculaArea() << endl;
    cout << "A area do " << tri.nome << " vale " << tri.calculaArea() << endl;
    cout << "A area do " << circ.nome << " vale " << circ.calculaArea() << endl;

    return 0;
}

#include <iostream>
#include <string>
#include "Trabalhador.h"
#include "TrabalhadorAssalariado.h"
#include"TrabalhadorPorHora.h"

using namespace std;

int main()
{
    TrabalhadorAssalariado ta = TrabalhadorAssalariado(5000, "Maria Silveira");
    TrabalhadorPorHora th = TrabalhadorPorHora(0, "Joao Da Silva", 50);

    cout << "A trabalhadora assalariada " << ta.nome << " possui o salario mensal de " << ta.salario << " reais e "
         << ta.calcularPagamentoSemanal(44) << " de salario semanal"<< endl;

    cout << "O trabalhador por hora " << th.nome << " trabalhando 50 horas recebe " << th.calcularPagamentoSemanal(50)
         << " reais por semana, totalizando ";
    cout << th.salario << " reais por mes" << endl;

    return 0;
}

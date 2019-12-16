#include "TrabalhadorAssalariado.h"

TrabalhadorAssalariado::TrabalhadorAssalariado(float s, string n)
{
    salario = s;
    nome = n;
}

float TrabalhadorAssalariado::calcularPagamentoSemanal(int horasSemanais)
{
    return salario/4;
}

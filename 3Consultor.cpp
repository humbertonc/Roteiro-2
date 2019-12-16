#include "Consultor.h"
#include "Funcionario.h"
Consultor::Consultor()
{
    //ctor
}

double Consultor::getSal()
{
    return 1.1 * salario;
}

double Consultor::getSal(double pcrt)
{
    return (pcrt/100 + 1) *salario;
}

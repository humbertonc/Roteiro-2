#include "Funcionario.h"

Funcionario::Funcionario()
{
    //ctor
}

Funcionario::~Funcionario()
{
    //dtor
}

int Funcionario::getMat()
{
    return matricula;
}

int Funcionario::getSal()
{
    return salario;
}

string Funcionario::getNome()
{
    return nome;
}

void Funcionario::setMat(int m)
{
    matricula = m;
}

void Funcionario::setSal(int s)
{
    salario = s;
}

void Funcionario::setNome(string n)
{
    nome = n;
}

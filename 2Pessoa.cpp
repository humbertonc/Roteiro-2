#include "Pessoa.h"

Pessoa::Pessoa(string n, Endereco add, string tel)
{
    nome = n;
    endereco = add;
    telefone = tel;
}

Pessoa::Pessoa(string n)
{
    nome = n;
}

string Pessoa::getNome()
{
    return nome;
}

string Pessoa::getTel()
{
    return telefone;
}

Endereco Pessoa::getEnd()
{
    return endereco;
}

void Pessoa::setNome(string n)
{
    nome = n;
}

void Pessoa::setTel(string tel)
{
    telefone = tel;
}

void Pessoa::setEnd(Endereco ende)
{
    endereco = ende;
}

#include <iostream>
#include "Endereco.h"
#include "Pessoa.h"
#include <string>

using namespace std;

int main()
{
    Endereco end1 = Endereco("Rua do CI", "Mangabeira", "Joao Pessoa", "Paraiba", "453979-313", "512");
    Endereco end2 = Endereco("Epitacio Pessoa", "Centro", "Joao Pessoa", "Paraiba", "356124-322", "27");

    Pessoa p1 = Pessoa("Joao da Silva", end1, "99821843");
    Pessoa p2 = Pessoa("Maria Silveira");

    p2.setEnd(end2);
    p2.setTel("837827325");

    return 0;
}

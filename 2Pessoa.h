#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include "Endereco.h"

using namespace std;
class Pessoa
{
    public:
        Pessoa(string n);
        Pessoa(string n, Endereco add, string tel);

        string getNome();
        string getTel();
        Endereco getEnd();
        void setNome(string n);
        void setTel(string tel);
        void setEnd(Endereco add);

    protected:

    private:
        string nome, telefone;
        Endereco endereco;
};

#endif // PESSOA_H


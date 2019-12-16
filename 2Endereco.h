#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>

using namespace std;

class Endereco
{
    public:
        Endereco();
        Endereco(string r, string b, string c, string e, string ce, string n);

        string toString();

    protected:

    private:
        string rua, bairro, cidade, estado, cep, num;
};

#endif // ENDERECO_H

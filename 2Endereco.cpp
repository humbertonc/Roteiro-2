#include "Endereco.h"
#include <string>
using namespace std;

Endereco::Endereco()
{

}

Endereco::Endereco(string r, string b, string c, string e, string ce, string n)
{
    rua = r;
    bairro = b;
    cidade = c;
    estado = e;
    cep = ce;
    num = n;
}

string Endereco::toString()
{
    string strbuf;

    strbuf = rua + bairro + cidade + estado + cep + num;

    return strbuf;
}

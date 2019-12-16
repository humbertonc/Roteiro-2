#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.h"
#include <string>

using namespace std;
class TrabalhadorPorHora : public Trabalhador
{
    public:
        TrabalhadorPorHora(float s, string n, float vdh);
        float valorDaHora;
        float calcularPagamentoSemanal(int horasSemanais);
    protected:

    private:
};

#endif // TRABALHADORPORHORA_H

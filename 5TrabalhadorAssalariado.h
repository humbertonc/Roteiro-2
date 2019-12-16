#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H
#include "Trabalhador.h"
#include <string>

using namespace std;
class TrabalhadorAssalariado : public Trabalhador
{
    public:
        TrabalhadorAssalariado(float s, string n);

        float calcularPagamentoSemanal(int horasSemanais);

    protected:

    private:
};

#endif // TRABALHADORASSALARIADO_H

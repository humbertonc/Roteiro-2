#ifndef CONSULTOR_H
#define CONSULTOR_H
#include "Funcionario.h"

class Consultor: public Funcionario
{
    public:
        Consultor();
        double getSal();
        double getSal(double pcrt);
    protected:

    private:
};

#endif // CONSULTOR_H

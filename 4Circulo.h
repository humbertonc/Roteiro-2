#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.h"

class Circulo : public FiguraGeometrica
{
    public:
        Circulo();
        double raio;
        double calculaArea();
    protected:

    private:
};

#endif // CIRCULO_H

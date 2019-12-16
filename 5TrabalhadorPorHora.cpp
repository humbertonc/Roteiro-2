#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora(float s, string n, float vdh)
{
    salario = 0;
    nome = n;
    valorDaHora = vdh;
}

float TrabalhadorPorHora::calcularPagamentoSemanal(int horasSemanais)
{
    float salSemanal;

    if(horasSemanais > 40){
        salSemanal = (40 * valorDaHora) + ((horasSemanais - 40) * 1.5 * valorDaHora);
    }else{
        salSemanal = horasSemanais * valorDaHora;
    }

    salario = 4 * salSemanal;

    return salSemanal;
}

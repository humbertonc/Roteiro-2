#include <iostream>
#include "Pedido.h"
#include "MesaDeRestaurante.h"
#include <string>

using namespace std;

int main()
{
    double conta;
    MesaDeRestaurante mesa = MesaDeRestaurante();
    Pedido p = Pedido(54, 2, 19.99, "Almoco completo");
    mesa.adicionaAoPedido(p);
    conta = mesa.calculaPedidos();
    cout << conta << endl;
    mesa.zeraPedidos();
    conta = mesa.calculaPedidos();
    cout << conta << endl;
    return 0;
}

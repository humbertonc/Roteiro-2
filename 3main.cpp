#include <iostream>
#include "Funcionario.h"
#include "Consultor.h"
#include <string>

using namespace std;

int main()
{
    Funcionario func1, func2;

    Consultor cons1, cons2;

    func1.setNome("Joao da Silva");
    func1.setMat(4398238);
    func1.setSal(2800);

    func2.setNome("Maria Silveira");
    func2.setMat(5646443);
    func2.setSal(3100);

    cout << "O/a funcionario/a " << func1.getNome() << " possui o salario de RS " << func1.getSal() << endl;
    cout << "O/a funcionario/a " << func2.getNome() << " possui o salario de RS " << func2.getSal() << endl;

    cons1.setNome(func1.getNome());
    cons1.setMat(func1.getMat());
    cons1.setSal(func1.getSal());

    cons2.setNome(func2.getNome());
    cons2.setMat(func2.getMat());
    cons2.setSal(func2.getSal());

    cout << "O/a funcionario/a " << cons1.getNome() << " possui o salario de RS " << cons1.getSal() << endl;
    cout << "O/a funcionario/a " << cons2.getNome() << " possui o salario de RS " << cons2.getSal() << endl;

    cout << "Com aumento de 50%, o salario de " << cons1.getNome() << " vale " << cons1.getSal(50) << endl;

    return 0;
}

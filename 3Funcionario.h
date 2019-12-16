#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

using namespace std;
class Funcionario
{
    public:
        Funcionario();
        virtual ~Funcionario();

        int getMat();
        int getSal();
        string getNome();
        void setMat(int m);
        void setSal(int s);
        void setNome(string n);

    protected:
        int matricula, salario;
        string nome;

    private:
};

#endif // FUNCIONARIO_H

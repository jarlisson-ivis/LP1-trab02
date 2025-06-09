#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>
using namespace std;

class Funcionario {
    protected:
        string nome;
        float salarioBase;
    private:
        int id;
    public:
        void setNome(string nome);
        void setSalario(float salario);
        void setId(int id);

        string getNome();
        float getSalario();
        int getId();

        virtual void exibirInfo();
        // Virtual puro
        virtual float calcularSalarioFinal() = 0;

};

#endif
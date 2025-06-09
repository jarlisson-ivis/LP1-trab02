#ifndef GERENTE_H
#define GERENTE_H

#include "funcionario.hpp"

class Gerente : public Funcionario {
    private:
        float bonusMensal;
    public:
        void setBonusMensal(float bonus);
        void exibirInfo() override;
        float calcularSalarioFinal() override; 
};

#endif

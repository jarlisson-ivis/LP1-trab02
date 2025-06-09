#ifndef ESTAGIARIO_H
#define ESTAGIARIO_H

#include "funcionario.hpp"

class Estagiario : public Funcionario {
    private:
        int horasTrabalhadas;
    public:
        void setHorasTrabalhadas(int horas);
        void exibirInfo() override;
        float calcularSalarioFinal() override;
};

#endif
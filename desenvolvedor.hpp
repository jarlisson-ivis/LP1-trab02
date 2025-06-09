#ifndef DESENVOLVEDOR_H
#define DESENVOLVEDOR_H

#include <string>
#include "funcionario.hpp"
using namespace std;

class Desenvolvedor : public Funcionario {
    private:
        int quantidadeProjetos;
    public:
        void exibirInfo() override;
        float calcularSalarioFinal() override;
        
        // setters
        void setQuantidadeProjetos(int quantidade) {
            this->quantidadeProjetos = quantidade;
        }
};

#endif
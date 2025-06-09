#include "gerente.hpp"

#include <iostream>
using namespace std;

void Gerente::exibirInfo() {
    // Chama o método exibirInfo da classe pai: Funcionario
    Funcionario::exibirInfo();

    // Exibe informações específicas do Gerente
    cout << "Tipo: Gerente" << endl;
    cout << "Bônus Mensal: " << this->bonusMensal << endl;
    cout << "Salário Final: " << this->calcularSalarioFinal() << endl;
}

float Gerente::calcularSalarioFinal() {
    return this->salarioBase + this->bonusMensal; 
}
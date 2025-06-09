#include "estagiario.hpp"

#include <iostream>
using namespace std;

void Estagiario::setHorasTrabalhadas(int horas) {
    this->horasTrabalhadas = horas;
}

void Estagiario::exibirInfo() {
    // Chama o método exibirInfo da classe pai: Funcionario
    Funcionario::exibirInfo();

    // Exibe informações específicas do Estagiário
    cout << "Tipo: Estagiário" << endl;
    cout << "Horas Trabalhadas: " << this->horasTrabalhadas << endl;
    cout << "Salário Final: " << this->calcularSalarioFinal() << endl;
}

float Estagiario::calcularSalarioFinal() {
    return this->salarioBase * (this->horasTrabalhadas / 160);
}
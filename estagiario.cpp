#include "estagiario.hpp"

#include <iostream>
using namespace std;

void Estagiario::setHorasTrabalhadas(int horas) {
    this->horasTrabalhadas = horas;
}

void Estagiario::exibirInfo() {
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << this->nome << endl;
    cout << "Tipo: Estagiário" << endl;
    cout << "Horas Trabalhadas: " << this->horasTrabalhadas << endl;
    cout << "Salario Base: " << this->salarioBase << endl;
    cout << "Salario Final: " << this->calcularSalarioFinal() << endl;
}

float Estagiario::calcularSalarioFinal() {
    return this->salarioBase * (this->horasTrabalhadas / 160.0);
}
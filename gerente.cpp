#include "gerente.hpp"

#include <iostream>
using namespace std;

void Gerente::setBonusMensal(float bonus) {
    this->bonusMensal = bonus;
}

void Gerente::exibirInfo() {
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << this->nome << endl;
    cout << "Tipo: Gerente" << endl;
    cout << "Bônus: " << this->bonusMensal << endl;
    cout << "Salario Base: " << this->salarioBase << endl;
    cout << "Salario Final: " << this->calcularSalarioFinal() << endl;
}

float Gerente::calcularSalarioFinal() {
    return this->salarioBase + this->bonusMensal; 
}
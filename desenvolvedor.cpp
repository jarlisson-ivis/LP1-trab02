#include "desenvolvedor.hpp"

#include <iostream>
using namespace std;

void Desenvolvedor::setQuantidadeProjetos(int quantidade) {
    this->quantidadeProjetos = quantidade;
}

void Desenvolvedor::exibirInfo(){
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << this->nome << endl;
    cout << "Tipo: Desenvolvedor" << endl;
    cout << "Projetos: " << this->quantidadeProjetos << endl;
    cout << "Salario Base: " << this->salarioBase << endl;
    cout << "Salario Final: " << this->calcularSalarioFinal() << endl;
};

float Desenvolvedor::calcularSalarioFinal() {
    return this->salarioBase + (500 * this->quantidadeProjetos); 
}
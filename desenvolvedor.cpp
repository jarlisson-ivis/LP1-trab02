#include "desenvolvedor.hpp"

#include <iostream>
using namespace std;

void Desenvolvedor::exibirInfo(){
    // Chama o método exibirInfo da classe pai: Funcionario
    Funcionario::exibirInfo();

    // Exibe informações específicas do Desenvolvedor
    cout << "Tipo: Desenvolvedor" << endl;
    cout << "Quantidade de Projetos: " << this->quantidadeProjetos << endl;
    cout << "Salario Final: " << this->calcularSalarioFinal() << endl;
};

float Desenvolvedor::calcularSalarioFinal() {
    return this->salarioBase + (500 * this->quantidadeProjetos); 
}
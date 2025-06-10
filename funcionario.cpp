#include "funcionario.hpp"
#include <iostream>
using namespace std;

void Funcionario::setNome(string nome) {
    this->nome = nome;
};

void Funcionario::setSalario(float salario) {
    this->salarioBase = salario;
};

void Funcionario::setId(int id) {
    this->id = id;
};


// Getters
string Funcionario::getNome() {
    return this->nome;
};

float Funcionario::getSalario() {
    return this->salarioBase;
};

int Funcionario::getId() {
    return this->id;
};

void Funcionario::exibirInfo() {
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << getNome() << endl;
    cout << "Tipo: Genérico" << endl;
    cout << "Salario Base: " << getSalario() << endl;
    cout << "Salario Final: " << getSalario() << endl;
};



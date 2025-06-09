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
    cout << "Nome: " << this->nome << endl;
    cout << "Salario Base: " << this->salarioBase << endl;
    cout << "ID: " << this->id << endl;
};



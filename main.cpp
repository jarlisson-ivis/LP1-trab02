#include <iostream>
#include <string>
#include <iomanip>
#include "funcionario.hpp"
#include "desenvolvedor.hpp"
#include "estagiario.hpp"
#include "gerente.hpp"

using namespace std;

int main() {
    
    Funcionario* funcionarios[10];
    int totalFuncionarios = 0;

    while (totalFuncionarios < 10) {
        cout << "\nCadastro de Funcionário #" << (totalFuncionarios + 1) << endl;
        cout << "Escolha o tipo (1 - Desenvolvedor, 2 - Estagiario, 3 - Gerente): ";
        int tipo;
        cin >> tipo;

        string nome;
        float salarioBase;
        int id;

        cout << "Nome: ";
        // Ajuste para ler uma linha corretamente
        cin.ignore();
        getline(cin, nome);

        cout << "Salario base: ";
        cin >> salarioBase;

        cout << "ID: ";
        cin >> id;

        Funcionario* f = nullptr;

        if (tipo == 1) {
            int projetos;
            cout << "Quantidade de projetos: ";
            cin >> projetos;

            Desenvolvedor* dev = new Desenvolvedor();
            dev->setNome(nome);
            dev->setSalario(salarioBase);
            dev->setId(id);
            dev->setQuantidadeProjetos(projetos);

            f = dev;
        } else if (tipo == 2) {
            int horas;
            cout << "Horas trabalhadas: ";
            cin >> horas;

            Estagiario* est = new Estagiario();
            est->setNome(nome);
            est->setSalario(salarioBase);
            est->setId(id);
            est->setHorasTrabalhadas(horas);

            f = est;
        } else if (tipo == 3) {
            float bonus;
            cout << "Bonus mensal: ";
            cin >> bonus;

            Gerente* ger = new Gerente();
            ger->setNome(nome);
            ger->setSalario(salarioBase);
            ger->setId(id);
            ger->setBonusMensal(bonus);

            f = ger;
        } else {
            cout << "Tipo invalido. Tente novamente.\n";
            continue;
        }

        funcionarios[totalFuncionarios++] = f;
    }

    cout << fixed << setprecision(2);
    cout << "\n=== Informacoes dos Funcionarios ===\n\n";

    for (int i = 0; i < totalFuncionarios; i++) {
        funcionarios[i]->exibirInfo();
        cout << endl;
        //cout << "Salario final: " << funcionarios[i]->calcularSalarioFinal() << "\n\n"; -- Removido pois cada subclasse ja imprime 
    }

    return 0;
}

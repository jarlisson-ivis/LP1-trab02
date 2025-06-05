#include <iostream>
#include <string>
using namespace std;

class Funcionario{
    protected:
        string nome;
        float salarioBase;
    private:
        int id;
    public:
        //Destrutor virtual
        virtual ~Funcionario() {}
        //Métodos Públicos
        void setNome(string input){
            nome = input;
        };
        string getNome() const{
            return nome;
        };
        void setSalarioBase(float input){
            salarioBase = input;
        };
        float getSalarioBase() const{
            return salarioBase;
        };
        void setId(int input){
            id = input;
        };
        int getId() const{
            return id;
        };
        
        //Método virtual
        virtual void ExibirInformacoes() const{
            cout << "ID: " << getId() << endl;
            cout << "Nome: " << getNome() << endl;
            cout << "Tipo: Genérico" << endl;
            cout << "Salário Base: " << getSalarioBase() << endl;
        };

        virtual float calcularSalarioFinal() const = 0;
};

class Desenvolvedor : public Funcionario{
    private:
    //Atributos privados
        int quantidadeDeProjetos = 0; //Valor padrão = 0
        float salarioFinal = salarioBase; //Valor padrão = Salário Base
    public:
    //Métodos Públicos
        void setQuantidadeDeProjetos(int input){
            quantidadeDeProjetos = input;
        }
        int getQuantidadeDeProjetos() const{
            return quantidadeDeProjetos;
        }
        void setSalarioFinal(float input){
            salarioFinal = input;
        }
        float getSalarioFinal() const{
            return salarioFinal;
        }
        float calcularSalarioFinal() const override{
            return salarioBase + 500 * quantidadeDeProjetos;
        }
        void ExibirInformacoes() const override{ //Sobreescreve a função da classe base
            cout << "ID: " << getId() << endl;
            cout << "Nome: " << getNome() << endl;
            cout << "Tipo: Desenvolvedor" << endl;
            cout << "Projetos: " << getQuantidadeDeProjetos() << endl;
            cout << "Salário Base: " << getSalarioBase() << endl;
            cout << "Salário Final: " << getSalarioFinal() << endl;
        };
};

/*void testClassFuncionario(){
    //Função para testar a classe Funcionario.
    //Não vai funcionar se a classe for abstrata.
    Funcionario funcionario0;
    cout << "Funcionário criado" << endl;
    funcionario0.setId(1234);
    cout << "ID setado para "<< funcionario0.getId() << endl;
    funcionario0.setNome("tobias");
    cout << "Nome setado para " << funcionario0.getNome() << endl;
    funcionario0.setSalarioBase(9999);
    cout << "Salario Base setado para " << funcionario0.getSalarioBase() << endl;

    cout << endl << "agora, chamando ExibirInformacoes" << endl << endl;

    funcionario0.ExibirInformacoes();

    cout << endl << "fim de execução" << endl;
}*/

void testClassDesenvolvedor(){
    //Função para testar a classe Desenvolvedor.
    Desenvolvedor funcionario1;
    cout << "Funcionário criado" << endl;
    funcionario1.setId(101);
    cout << "ID setado para "<< funcionario1.getId() << endl;
    funcionario1.setNome("Joana");
    cout << "Nome setado para " << funcionario1.getNome() << endl;
    funcionario1.setSalarioBase(3000);
    cout << "Salario Base setado para " << funcionario1.getSalarioBase() << endl;
    funcionario1.setQuantidadeDeProjetos(3);
    cout << "Quantidade de Projetos setada para " << funcionario1.getQuantidadeDeProjetos() << endl;
    funcionario1.setSalarioFinal(funcionario1.calcularSalarioFinal());
    cout << "Salário final setado para " << funcionario1.getSalarioFinal() << endl;

    cout << endl << "agora, chamando ExibirInformacoes" << endl << endl;

    funcionario1.ExibirInformacoes();

    cout << endl << "fim de execução" << endl;
}

int main(){

    testClassDesenvolvedor();

    return 0;
}
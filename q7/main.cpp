#include <iostream>
#include "pessoa.h"
#include "cadastro.h"

using namespace std;

int main(){

    Pessoa pessoa1 = Pessoa("carlos",18,40028922);
    Pessoa pessoa2 = Pessoa("pedro");
    Cadastro lista;
    
    cout << "Nome: " << pessoa1.getNome() << endl;
    cout << "Idade: " << pessoa1.getIdade() << endl;
    cout << "Telefone: " << pessoa1.getTelefone() << endl;

    pessoa1.setNome("alou");
    pessoa1.setIdade(32);
    pessoa1.setTelefone(30032099);

    cout << "Nome: " << pessoa1.getNome() << endl;
    cout << "Idade: " << pessoa1.getIdade() << endl;
    cout << "Telefone: " << pessoa1.getTelefone() << endl;

    lista.cadastrarPessoa(pessoa1,0);
    lista.cadastrarPessoa(pessoa2,1);

    lista.printCadastro(0);
    lista.printCadastro(1);


    return 0;
}

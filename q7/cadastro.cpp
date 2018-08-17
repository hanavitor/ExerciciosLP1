#include "cadastro.h"

Cadastro::Cadastro(){

}

void Cadastro::cadastrarPessoa(Pessoa p, int i){
    pessoa[i] = p;
}

void Cadastro::printCadastro(int i){
    std::cout << "Telefone: " << pessoa[i].getTelefone() << std::endl;
    std::cout << "Idade: " << pessoa[i].getIdade() << std::endl;
    std::cout << "Nome: " << pessoa[i].getNome() << std::endl;
}

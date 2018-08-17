#ifndef CADASTRO_H_
#define CADASTRO_H_
#include <iostream>
#include <string>
#include "pessoa.h"

class Cadastro{

    private:
        Pessoa pessoa[100];
    public:
        Cadastro();
        void cadastrarPessoa(Pessoa p, int i);
        void printCadastro(int i);

};
#endif

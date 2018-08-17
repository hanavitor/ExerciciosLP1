#include <iostream>
#include "pagamento.h"
#include "controle.h"

using namespace std;

int main(){

    Controle c1;

    c1.setPagamentos(Pagamentos(1200,"carlos"),0);
    c1.setPagamentos(Pagamentos(3200,"pedro"),1);

    cout << "Existe pagamento(1/0): " << c1.existePagamento("joao") << endl;
    cout << "Existe pagamento(1/0): " << c1.existePagamento("carlos") << endl;
    cout << "Pagamento indice 1: " << c1.getPagamento(1) << endl;
    cout << "Total de pagamentos: " << c1.calculaPagamentos() << endl;

    return 0;
}

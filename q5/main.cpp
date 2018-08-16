#include <iostream>
#include "relogio.h"

using namespace std;

int main(){

    Relogio relogio1;
    Relogio relogio2;
    relogio1.setHorario(23,59,59);
    relogio2.setHorario(200,200,200);

    cout << "Relogio1: " << relogio1.getHora() << ":"<< relogio1.getMinuto() << ":" << relogio1.getSegundo() << endl;

    relogio1.avancarHorario();

    cout << "Relogio1: " << relogio1.getHora() << ":"<< relogio1.getMinuto() << ":" << relogio1.getSegundo() << endl;

    relogio1.avancarHorario();

    cout << "Relogio1: " << relogio1.getHora() << ":"<< relogio1.getMinuto() << ":" << relogio1.getSegundo() << endl;

    cout << "Relogio2: " << relogio2.getHora() << ":"<< relogio2.getMinuto() << ":" << relogio2.getSegundo() << endl;

    relogio2.avancarHorario();

    cout << "Relogio2: " << relogio2.getHora() << ":"<< relogio2.getMinuto() << ":" << relogio2.getSegundo() << endl;

    relogio2.avancarHorario();

    cout << "Relogio2: " << relogio2.getHora() << ":"<< relogio2.getMinuto() << ":" << relogio2.getSegundo() << endl;

    return 0;
}

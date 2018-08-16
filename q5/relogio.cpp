#include "relogio.h"

Relogio::Relogio(){
    hora = 0;
    minuto = 0;
    segundo = 0;
}

void Relogio::setHorario(int h, int m, int s){
    hora = h;
    minuto = m;
    segundo = s;
    if(segundo > 59 || minuto > 59 || hora > 23){
        hora = 0;
        minuto = 0;
        segundo = 0;
    }
}

int Relogio::getHora(){
    return hora;
}

int Relogio::getMinuto(){
    return minuto;
}

int Relogio::getSegundo(){
    return segundo;
}

void Relogio::avancarHorario(){
    segundo++;
    if(segundo > 59){
        segundo = 0;
        minuto++;
    }
    if(minuto > 59){
        minuto = 0;
        hora++;
    }
    if(hora > 23){
        hora = 0;
    }
}

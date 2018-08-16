#include "televisao.h"

Televisao::Televisao(){
    volume = 50;
    canal = 1;
}

void Televisao::setVolume(int v){
    volume = v;
    if(volume > 100){
        volume = 100;
    }
    if(volume < 1){
        volume = 1;
    }
}

void Televisao::setCanal(int c){
    canal = c;
    if(canal > 999){
        canal = 999;
    }
    if(canal < 1){
        canal = 1;
    }
}

int Televisao::getVolume(){
    return volume;
}

int Televisao::getCanal(){
    return canal;
}

void Televisao::subirVolume(){
    setVolume(volume + 1);
}

void Televisao::descerVolume(){
    setVolume(volume - 1);
}

void Televisao::subirCanal(){
    setCanal(canal + 1);
}

void Televisao::descerCanal(){
    setCanal(canal - 1);
}

void Televisao::escolherCanal(int c){
    setCanal(c);
}

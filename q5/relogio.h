#ifndef RELOGIO_H_
#define RELOGIO_H_
#include <iostream>
#include <string>

class Relogio{

    private:
        int hora;
        int minuto;
        int segundo;
    public:
        Relogio();
        void setHorario(int h, int m, int s);
        int getHora();
        int getMinuto();
        int getSegundo();
        void avancarHorario();

};
#endif

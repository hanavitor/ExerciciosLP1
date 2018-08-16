#ifndef TELEVISAO_H_
#define TELEVISAO_H_
#include <iostream>
#include <string>

class Televisao{

    private:
        int volume;
        int canal;
    public:
        Televisao();
        void setVolume(int v);
        void setCanal(int c);
        int getVolume();
        int getCanal();
        void subirVolume();
        void descerVolume();
        void subirCanal();
        void descerCanal();
        void escolherCanal(int c);

};
#endif

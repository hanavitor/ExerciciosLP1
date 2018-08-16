#include <iostream>
#include "televisao.h"

using namespace std;

int main(){

    Televisao tv;

    cout << "Canal: " << tv.getCanal() << endl;
    cout << "Volume: " << tv.getVolume() << endl;

    tv.setVolume(200);
    tv.setCanal(1000);

    cout << "Canal: " << tv.getCanal() << endl;
    cout << "Volume: " << tv.getVolume() << endl;

    tv.descerCanal();
    tv.descerVolume();
    tv.descerCanal();
    tv.descerCanal();
    tv.descerCanal();
    tv.descerVolume();
    tv.descerVolume();
    tv.descerVolume();

    cout << "Canal: " << tv.getCanal() << endl;
    cout << "Volume: " << tv.getVolume() << endl;

    tv.setVolume(30);
    tv.escolherCanal(18);

    cout << "Canal: " << tv.getCanal() << endl;
    cout << "Volume: " << tv.getVolume() << endl;

    tv.subirCanal();
    tv.subirVolume();
    tv.subirCanal();
    tv.subirCanal();
    tv.subirCanal();
    tv.subirVolume();
    tv.subirVolume();
    tv.subirVolume();

    cout << "Canal: " << tv.getCanal() << endl;
    cout << "Volume: " << tv.getVolume() << endl;

    return 0;
}

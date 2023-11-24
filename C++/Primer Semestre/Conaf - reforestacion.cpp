#include <iostream>

using namespace std;
int main ()
{
    float area;

    cout << "¿Cual es el tamaño (en hectareas) del bosque?: ";
    cin >> area;

    int pinos, eucaliptus, cedros;
    int areap, areae, areac;

    if (area > 30)
    {
        areap = area * 0.7;
        areac = area * 0.1;
        areae = area * 0.2;

        pinos = areap * 8;
        cedros = areac * 5;
        eucaliptus = (areae / 1.5) * 12;

        cout << " En el bosque se deben plantar: " << endl;
        cout << pinos << " pinos en " << areap << " hectareas " << endl;
        cout << cedros << " cedros en " << areac << " hectareas " << endl;
        cout << eucaliptus << " eucaliptus en " << areae << " hectareas" << endl;

    }
    else if (area <= 30 && area > 0)
    {
        areap = area * 0.5;
        areac = area * 0.3;
        areae = area * 0.2;

        pinos = areap * 8;
        cedros = areac * 5;
        eucaliptus = (areae / 1.5) * 12;

        cout << " En el bosque se deben plantar: " << endl;
        cout << pinos << " pinos en " << areap << " hectareas " << endl;
        cout << cedros << " cedros en " << areac << " hectareas " << endl;
        cout << eucaliptus << " eucaliptus en " << areae << " hectareas" << endl;
    }
    else

    cout << " Por favor, verifique el valor ingresado y revise que está correcto, el valor que ingresó es el siguiente: " << area << endl;    
}
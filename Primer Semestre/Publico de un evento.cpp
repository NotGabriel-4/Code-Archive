#include <iostream>

using namespace std;

int main()
{

    int clima, publico;
    float l, a, area, factor;

    cout << " Publico de un evento " << endl;
    cout << " Cual es el clima a la hora del evento?" << endl;
    cout << " (1. Despejado)" << endl;
    cout << " (2. Nublado)" << endl;
    cin >> clima;

    cout << " Caracteristicas del recinto " << endl;
    cout << " ¿Cual es el largo?: ";
    cin >> l;
    cout << " ¿Cual es el ancho?: ";
    cin >> a;

    area = l * a;

    cout << " El area del recinto es de: " << area << " metros cuadrados" << endl;

    cout << " Ingrese el factor (0.5-1)";
    cin >> factor;

    if (clima == 1)
    {
        publico = (area * 7) * factor;
        cout << " Puede asistir un máximo de " << publico << " personas";
    }
    else if (clima == 2)
    {
        publico = (area * 6) * factor;
        cout << " Puede asistir un máximo de " << publico << " personas";
    }
    else

        cout << " Los datos ingresados son incorrectos, usted ingresó que el clima era: " << clima;
}

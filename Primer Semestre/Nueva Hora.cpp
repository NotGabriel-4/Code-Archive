#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int hhmm, hora, minutos, delta, nhora, nminutos;

    cout << "Ingrese la hora en formato hhmm: ";
    cin >> hhmm;

    hora = hhmm / 100;
    minutos = hhmm % 100;

    cout << "Ingrese delta en minutos: ";
    cin >> delta;

    nminutos = (minutos + delta) % 60;
    nhora = hora + (minutos + delta) / 60;

    cout << "La nueva hora es: ";

    if (nhora < 10)
    {
        cout << "0";
    }

    cout << nhora;

    if (nminutos < 10)
    {
        cout << "0";
    }

    cout << nminutos << endl;

    return 0;
}
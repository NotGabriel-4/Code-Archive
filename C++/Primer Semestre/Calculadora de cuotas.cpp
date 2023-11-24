#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int c;          // c representa el capital o monto solicitado
    float i;        // i representa el interés
    int n;          // n representa el numero de cuotas
    int valorcuota; // representa la cuota a pagar

    cout << "Calculadora de cuotas" << endl;

    cout << "Ingrese el capital a solicitar: "; cin >> c;
    cout << "\nIngrese la tasa de interés (En %): "; cin >> i;
    cout << "\nIngrese la cantidad de cuotas: "; cin >> n;

    int ctc = c * (1 + i);
    valorcuota = ctc / n;

    cout << "La cuota total a pagar es de: " << valorcuota << endl;
    cout << "El costo total del credito es de: " << ctc << endl;

    return 0;
}

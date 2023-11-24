#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
 int condicion, TR;
 float tarifa , P = 0.1, S = 0.15, D = 0.25, N = 0;
 
 cout << "¿Cual es la tarifa completa? " << endl;
 cin >> tarifa; 
 cout << "¿Cual es su condición? (Escriba solo el número) " << endl;
 cout << "1. Jubilado " << endl << "2. Estudiante " << endl << "3. Desempleado " << endl << "4. Otra " << endl;
 cin >> condicion;

 if (condicion >= 0 && condicion <= 4)
 {
    if (condicion == 1)
    {
        TR = tarifa * (1 - P);
        cout << "Tarifa: " << (1 - P) << "%" << endl;
    }
    else if (condicion == 2)
    {
        TR = tarifa * (1 - S);
        cout << "Tarifa: " << (1 - S) << "%" << endl;
    }
    else if (condicion == 3)
    {
        TR = tarifa * (1 - D);
        cout << "Tarifa: " << (1 - D) << "%" << endl;
    }
    else if (condicion == 4)
    {
        TR = tarifa * (1 - N);
        cout << "Tarifa: " << (1 - N) << "%" << endl;
    }

    cout << "La tarifa rebajada por su condición es de: " << TR << " pesos. " << endl;
 }
 else
 cout << "ingrese una condición válida (1-4), usetd ingresó: " << condicion;
 return 0;
}
#include <iostream>
using namespace std;

void jugadorTryhard(int x[11])
{

    /* Metodo burbuja */

    int aux;     
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (x[i] > x[j])
            {
                aux = x[i];
                x[i] = x[j];
                x[j] = aux;
            }
        }
    }
    cout << endl;

    /* Imprimir los resultados */

    cout << "1.- Datos ordenados" << endl;
    
    for (int j = 0; j < 11; j++) {
        cout << x[j] << " "; }

    cout << endl;

    cout << "2.- Mediana de los tiempos" << endl;
    cout << x[5]; cout << endl;

    cout << "3.- Menor tiempo" << endl;
    cout << x[10]; cout << endl;

    cout << "4.- Promedio de los tiempos" << endl;
     
    int suma = 0;

        for (int k = 0; k < 11; k++) {
            suma += x[k]; }

    cout << "El promedio de los tiempos es de: " << suma / 11 << endl;
    cout << endl;;
}

int main()
{

    int t[11]; // T = tiempo usado

    /* Pide los tiempos */

    for (int i = 0; i < 11; i++) {
        cout << "Tiempo " << i + 1 << ": " << endl;
        cin >> t[i]; }

    /* Se usa la función, dando el parametro t */
    
    jugadorTryhard(t);

}
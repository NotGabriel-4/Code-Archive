#include <iostream>

using namespace std;

int main()
{
    int s, f, a, c, p1[30][20], p2[15][12]; // s = Piso seleccionado  f = Fila  a = Asiento  c = Cantidad de asientos  p1 = piso 1  p2 = piso 2

    cout << "¿Cuantos asientos desea comprar?: ";
    cin >> c;

    cout << "¿En que piso desea sus asientos: ";
    cin >> s;

    if (s == 1) // Codigo para el piso 1
    {

        for (int i = 0; i < 30; i++) // for [i]
        {

            for (int j = 0; j < 20; j++) // for [j]
            {

                p1[i][j] = 0; // Igualar x[i][j] a 0
            }
        }
        for (int k = 0; k < c; k++) // k = control  c = cantiadad a comprar (sin validación)
        {
            do
            {
                cout << "Escoja su fila (1 a 30): "; // Escojer fila (Máximo y minimo según piso 1)
                cin >> f;
            } while (f < 1 && f > 30);

            do
            {
                cout << "Escoja su asiento (1 a 20): "; // Escoger asiento (Máximo y mínimo según piso 1)
                cin >> a;
            } while (a < 1 && a > 20);

            f -= 1;       // Arrays empiezan desde 0, entonces restamos uno para conseguir la posición correcta en el array
            a -= 1;       // Arrays empiezan desde 0, entonces restamos uno para conseguir la posición correcta en el array
            p1[f][a] = 1; // Asigna 1 al asiento seleccionado, para así reservarlo

            /*---------------------------------------------------------------------------------------------------------------*/

            for (int i = 0; i < 30; i++) // Imprime en pantalla los asientos disponibles y ocupados
            {
                for (int j = 0; j < 20; j++)
                {
                    if (p1[i][j] == 0)
                    {
                        cout << "-";
                    }
                    else if (p1[i][j] == 1)
                    {
                        cout << "x";
                    }
                }
                cout << endl;
            }
        }
    }

    /* Básicamente el mismo codigo, ajustado a los limites de espacio del piso 2*/

    else if (s == 2)
    {
        for (int i = 0; i < 15; i++)
        {
            for (int j = 0; j < 12; j++)
            {
                p2[i][j] = 0;
            }
        }

        for (int k = 0; k < c; k++)
        {
            do
            {
                cout << "Escoja su fila (1 a 15): ";
                cin >> f;
            } while (f < 1 && f > 15);

            do
            {
                cout << "Escoja su asiento (1 a 12): ";
                cin >> a;
            } while (a < 1 && a > 20);

            f -= 1;
            a -= 1;
            p2[f][a] = 1;

            for (int i = 0; i < 15; i++)
            {
                for (int j = 0; j < 12; j++)
                {
                    if (p2[i][j] == 0)
                    {
                        cout << "-";
                    }
                    else if (p2[i][j] == 1)
                    {
                        cout << "x";
                    }
                }
                cout << endl;
            }
        }
    }

    else if (s != 1 || s != 2) // Se ejecuta si no hay una selección correcta de piso y entrega el mensaje de error
    {
        cout << "Ingrese un piso valido" << endl;
    }
}

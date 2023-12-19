#include <iostream>

using namespace std;

int main()
{

    int x, xa = 0, px, c = 0, sn = 0;

    // Imprime un mensaje solicitando una secuencia de números ascendentes
    cout << "Ingrese una secuencia de números ascendentes (para finalizar, ingrese un número menor al anterior):" << endl;

    // Inicia un ciclo do-while que se repetirá indefinidamente hasta que se rompa
    do
    {
        // Imprime un mensaje solicitando un número
        cout << "Ingrese un número: ";

        // Lee el número ingresado por el usuario
        cin >> x;

        // Si el número ingresado es menor que el número anterior, rompe el ciclo
        if (x < xa)
        {
            break;
        }

        // Si es el primer número ingresado, guárdalo como el primer número (px)
        if (c == 0)
        {
            px = x;
        }

        // Guarda el número actual como el número anterior para la próxima iteración
        xa = x;

        // Incrementa el contador de números ingresados
        c++;

        // Suma el número ingresado a la suma acumulativa de números (sn)
        sn += x;
    } while (true); // Ciclo infinito

    // Si se ingresó al menos un número, imprime el primer número, el último número y el promedio
    if (c > 0)
    {
        cout << "El primer número fue: " << px << endl;
        cout << "El último número fue: " << xa << endl;
        cout << "El promedio es: " << (double)sn / c << endl;
    }
    else
    { // Si no se ingresó ningún número ascendente, imprime un mensaje indicando esto
        cout << "No se ingresó ningún número ascendente." << endl;
    }
}

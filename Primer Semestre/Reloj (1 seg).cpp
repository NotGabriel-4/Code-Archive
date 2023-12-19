#include <iostream>

using namespace std;

/* 1.	Desarrolle una función que implemente el segundero de un reloj, es decir, que reciba una hora y devuelva esa hora sumándole 1 segundo.
El encabezado de la función debe ser el siguiente:

void segundo_despues(int &hora, int &minuto, int &segundo)

Además, incluya la función main() que solicita al usuario la hora, minutos y segundos actuales y llamando a la función avanza
el tiempo en un segundo.

Por ejemplo,
Si la hora actual es: 4:56:45 al agregarle un segundo la nueva hora es: 4:56:46
Si la hora actual es: 23:59:59 al agregarle un segundo la nueva hora es: 00:00:00
*/

void sd(int &h, int &m, int &s)
{

    s++;

    if (s >= 60)
    {
        s = 0;
        m++;
    }

    if (m >= 60)
    {
        m = 0;
        h++;
    }

    if (h >= 24)
    {
        h = 0;
    }

    cout << "La hora actual es: " << h << " : " << m << " : " << s << endl;
}
int main()
{
    int h, m, s;

    cout << "Ingrese la hora actual (horas, minutos, segundos)" << endl;
    cin >> h >> m >> s;

    sd(h, m, s);
}
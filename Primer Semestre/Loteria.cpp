#include <iostream>

using namespace std;
int main()
{
/* Un jugador de lotería necesita saber qué premio obtuvo su número jugado. Las opciones son las siguientes:
- Premio mayor si su número jugado es el mismo número ganador
- Terna si los tres primeros número o los últimos 3 números son iguales a los correspondientes del número ganador
- Terminación si el último dígito es igual al último dígito del ganador
  (los numeros son de 5 cifras)
 Sólo puede obtener un premio (obviamente privilegiando el número mayor)
*/

int n, ng; // n = numero jugado; ng = numero ganador

do {
cout << "Ingrese el numero jugado:  "; cin >> n;
} while (n < 10000 || n > 99999);

do {
cout << "Ingrese el numero ganador: "; cin >> ng;
} while (ng < 10000 || ng > 99999);

if (n == ng) {
    cout << "¡Usted obtuvo el premio mayor!" << endl;}

else if ((n / 100 == ng / 100) || (n % 100 == ng % 100)) {
    cout << "Usted obtuvo 'Terna'" << endl; }

else if (n % 10 == ng % 10) {
    cout << "Usted obtuvo 'Terminación'" << endl; }
}
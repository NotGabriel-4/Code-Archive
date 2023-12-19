#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   int numero, d1, d2, d3;
   cout << " Ingrese un numero de tres digitos para saber si es narcicista o no " << endl;
   cin >> numero;

   d1 = numero / 100;
   d2 = numero % 100 / 10;
   d3 = numero % 10;

   if (numero >= 100 && numero <= 1000)
   {
      cout << " Numero Valido " << endl;

      if (pow(d1, 3) + pow(d2, 3) + pow(d3, 3) == numero)
      {
         cout << " El numero " << numero << " es narcicista." << endl;
         return 1;
      }
      else
      {
         cout << " EL numero " << numero << " no es narcicista ";
         return 2;
      }
   }

   else
   {
      cout << " Numero no valido ";
   }
   return 3;
}

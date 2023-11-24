#include <iostream>
using namespace std;

/* Los valores de la asignación familiar y maternal que rigen a partir del 01 de marzo de 2020, son los siguientes:

a) De $13.155 por carga, para aquellos beneficiarios cuyo ingreso mensual no exceda de $336.055.
b) De $8.073 por carga, para aquellos beneficiarios cuyo ingreso mensual supere los $336.055 y no exceda de $490.844.
c) De $2.551 por carga, para aquellos beneficiarios cuyo ingreso mensual supere los $490.844 y no exceda de $765.550.
d) Las personas que tengan acreditadas o que acrediten cargas familiares, cuyo ingreso mensual sea superior a $765.550
   no tendrán derecho a las asignaciones aludidas en este artículo */

int main()
{
   int c, ing, asg = 0; // c = n° de cargas; ing = ingresos; asg = asignación

   cout << "Calculadora asignación familiar" << endl;
   cout << "¿Cuantas cargas tiene?: "; cin >> c;

   do
   {
      cout << "¿Cual es su ingreso mensual?: "; cin >> ing;
   } while (ing < 0);

   if (ing <= 336055)
   {
      asg = 13155;
      asg *= c;
   }

   if (ing > 336055 && ing <= 490844)
   {
      asg = 8073;
      asg *= c;
   }

   if (ing > 490844 && ing <= 765550)
   {
      asg = 2551;
      asg *= c;
   }

   if (asg == 0)
   {
      cout << "A usted no le corresponde dinero por asignación familiar, ya que sus ingresos están fuera del tramo del beneficio." << endl;
   }

   else
   {
      cout << "Su asignación corresponde a " << asg << " por sus " << c << " cargas." << endl;
   }
}
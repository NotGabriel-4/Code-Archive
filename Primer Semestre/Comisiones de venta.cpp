#include <iostream>

using namespace std;

int main ()
{
/*
Un vendedor recibe comisiones por venta siempre y cuando estas superen los $10.000, la
comisión es de un 3% del valor de la venta. En base a lo anterior construya una aplicaci�n que
lea una a una las ventas de un vendedor hasta que ingrese una venta igual a 0. El programa
debe imprimir:
a. N�mero de ventas
b. Ventas mayores a 10.000
c. Ventas menores a 10.000
d. Cantidad vendida
e. Comisi�n por ventas mayores a 10.000
*/
	
	int v, vt = 0, c = 0, vcc = 0, vsc = 0, co, ct = 0; //ventas, ventas totales, cantidad, ventas con comisi�n, ventas sin comisi�n, comision, comision total.
	while (true)
	{
		cout << "Ingrese valor de venta" << endl;
		cin >> v;
		if (v <= 0)
		{
			break;
		}
		if (v <= 10000)
		{
			vsc++;
		}
		else if (v > 10000)
		{
			co = v * 0.03;
			vcc++;
			ct += co;
		}
		c ++;
		vt += v;
	}
 cout << "Cantidad de ventas es: " << c << endl;
 cout << "Las ventas mayores a $10000 fueron: " << vcc << endl;
 cout << "Las ventas menores a $10000 fueron: " << vsc <<endl;
 cout << "La suma de las ventas es $" << vt <<endl;
 cout << "La comisi�n por ventas fue de: " << ct << endl;
}

#include <iostream>
using namespace std;

int main ()
{
	int a;
	a = 1;
	int b[3];
	
	b[0] = 90;
	b[1] = 80;
	b[2] = 70;
	
	cout << b[0] << endl;
	cout << b[1] << endl;
	cout << b[2] << endl;
	
	int c [2][3];
	c[0][0] = 10;
	c[0][1] = 20;
	c[0][2] = 25;
	c[1][0] = 35;
	c[1][1] = 44;
	c[1][2] = 1;
	
	cout << c [0][1] << endl;
	cout << c [0][2] << endl;
	cout << c [1][1] << endl;
	cout << c [1][2] << endl;
	
	int d [7];
	d[0] = 0;
	d[1] = 1;
	d[2] = 2;
	d[3] = 3;
	d[4] = 4;
	d[5] = 5;
	d[6] = 6;
	
	int e [7];
	for (int i = 0; i <= 7; i++)
	{
		e[i] = 1;
		cout << e[i] << endl;
	}
	
	int f [8];
	for (int i; i <= 8; i++)
	{
		cout << "Ingrese el valor de la celda " << i << endl; cin >> f[i];
	}
	
	
	int monto, suma = 0;
	
	while (true) {
	cout << "Ingrese monto (terminar con 0 o negativo): "; cin >> monto;
	
	if (monto <= 0){
		break;	}
	else {
		suma += monto;
	}}
	cout << "El monto total de las ventas es: " << suma << endl;
	
	
	int sa = 0, sb = 0, m, v;
	while(true){
		cout << "Ingrese vendedor (1 = Vendedor A | 2 = Vendedor B) (Ingrese un valor negativo o 0 para salir): "; cin >> v;
		
		if (v != 1 && v != 2) {	
		break; }
		
		cout << "Ingrese monto (Ingrese un valor negativo o 0 para salir): "; cin >> m;
		if (m <= 0){
			break;		}
		else if (v == 0){
			sa += m;		}
		else if (v == 2){
			sb += m;		}
	}
		cout << "El monto total de las ventas de A es de " << sa << endl;
		cout << "El monto total de las ventas de B es de " << sb << endl;
}

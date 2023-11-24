#include <iostream>

using namespace std;

int main ()
{
	float v, tv, tt = 0;
	int i;
	
	cout << " ¿Cuantas vueltas da el deportista?: ";
	cin >> v;
	cout << endl << "¿Cuanto tardó en la primera vuelta?: ";
	cin >> tv;
	cout << endl;

	for (i = 1; i <= v; i++)
	{
	 tt += tv;
	 cout << "Vuelta " << i << "; Tiempo Vuelta: " << tv << "; Tiempo acumulado: " << tt << endl;
	 tv = tv * 1.2;
	}
}

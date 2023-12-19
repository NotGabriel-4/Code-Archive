#include <iostream>

using namespace std;

int main()
{
	int c1 = 0, c2 = 0, v, i;
	string cand1, cand2;

	cout << "¿Cual es el nombre del candidato 1?: ";
	getline(cin, cand1);
	cout << "¿Cual es el nombre del candidato 2?: ";
	getline(cin, cand2);

	for (i = 1; i <= 10; i++)
	{
		cout << "Ingrese los votos de " << cand1 << " en la mesa: " << i << endl;
		cin >> v;
		cout << endl;

		c1 += v;

		cout << "Ingrese los votos de " << cand2 << " en la mesa: " << i << endl;
		cin >> v;
		cout << endl;

		c2 += v;
	}

	if (c1 > c2)
	{
		cout << cand1 << " es el nuevo presidente de Chile con " << c1 << " votos" << endl;
	}

	else if (c1 < c2)
	{
		cout << cand2 << " es el nuevo presidente de Chile con " << c1 << " votos" << endl;
	}
	else if (c1 == c2)
	{
		cout << "Los candidatos empataron, ambos con: " << c1 << " votos." << endl;
	}
}

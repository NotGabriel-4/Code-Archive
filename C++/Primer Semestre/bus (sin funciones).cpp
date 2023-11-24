#include <iostream>

using namespace std;
int main()
{
	int bus[41], asiento, array[40][10];

	for (int i = 0; i < 41; i++)
	{
		bus[i] = 0;
	}

	bus[0] = 1;

	while (true)
	{
		cout << "Ingrese asiento" << endl;
		cin >> asiento;
		if (bus[asiento] == 0)
		{
			cout << "OK, asiento reservado" << endl;
			bus[asiento] = 1;
		}
		else
		{
			cout << "Lo siento, el asiento est� ocupado" << endl;
		}

		for (int i = 1; i < 41; i++)
		{
			if (bus[i] == 0)
			{
				cout << "Asiento " << i << " disponible" << endl;
			}
			else
			{
				cout << "Asiento " << i << " ocupado" << endl;
			}
		}
	}
}

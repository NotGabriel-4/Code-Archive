#include <iostream>
#include <map>

using namespace std;
/*
Map con llave = rut, valor = deuda (máximo $10.000)

Cree la clase Almacenero
Bool fiar(rut, monto) que fia y retorna true o solo retorna false
int pagarDeuda(rut, monto) que paga parte de la deuda, retorna deuda resultante
int deudaTotal, devuelve el total de las deudad (monto)
*/

class almacen
{
private:
    map<string, int> fiado;

public:
    almacen()
    {
    }

    bool fiar(string rut, int monto)
    {
        map<string, int>::iterator it;

        it = fiado.find(rut);

        if (it != fiado.end())
        {
            if (it->second + monto > 10000)
            {
                return false;
            }
            else
            {
                it->second += monto;
                return true;
            }
        }

        else
        {
            cout << "Añadiendo nuevo cliente, rut " << rut << endl;
            if (monto <= 10000)
            {
                fiado.insert({rut, monto});
                cout << "Deuda añadida" << endl;
                return true;
            }
            else
            {
                cout << "No se puede añadir al cliente (Deuda superada)" << endl;
                return false;
            }
        }
    }

    int pagarDeuda(string rut, int monto)
    {
        map<string, int>::iterator it;

        it = fiado.find(rut);

        if (monto <= 10000)
        {

            if (it != fiado.end())
            {
                if (monto > it->second)
                {
                    int x;
                    cout << "El monto a pagar es mayor que la deuda de: " << it->second << ", el vuelto será de $" << monto - it->second << endl;
                    do
                    {
                        cout << "¿Desea pagar la deuda? (1.Si | 2-No): ";
                        cin >> x;
                    } while (x < 1 || x > 2);
                    if (x == 1)
                    {
                        fiado.erase(it);
                        return 0;
                    }

                    else
                    {
                        return -1;
                    }
                }
                else
                {
                    cout << "El cliente pagará " << monto << endl;
                    it->second -= monto;
                    return it->second;
                }
            }

            else
            {
                cout << "El cliente no tiene deuda a pagar" << endl;
                return -1;
            }
        }
        else
        {
            int x;
            cout << "Monto mayor a $10.000, el vuelto será de $" << monto - it->second << endl;
            do
            {
                cout << "¿Desea pagar la deuda? (1.Si | 2-No): ";
                cin >> x;
            } while (x < 1 || x > 2);
            if (x == 1)
            {
                fiado.erase(it);
                return 0;
            }

            else
            {
                return -1;
            }
        }
        return -1;
    }

    int deudaTotal()
    {
        int suma = 0;

        map<string, int>::iterator it;

        for (it = fiado.begin(); it != fiado.end(); it++)
        {
            suma += it->second;
        }

        return suma;
    }
};

int main()
{
}
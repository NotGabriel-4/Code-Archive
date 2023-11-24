#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class caja
{
private:
    int MontoRecaudado;

public:
    caja()
    {
        MontoRecaudado = 0;
    }

    int GetMontoRecaudado()
    {
        return MontoRecaudado;
    }

    void SetMontoRecaudado(int dinero)
    {
        MontoRecaudado = dinero;
    }
};

class supermercado
{
private:
    vector<caja> cajas;

public:
    supermercado()
    {
        for (int i = 0; i < 30; i++)
        {
            caja cajanueva;
            cajas.push_back(cajanueva);
            cout << "Cajas en el supermercado: " << cajas.size() << endl;
        }
    }

    void NuevaCaja()
    {
        caja cajanueva;
        cajas.push_back(cajanueva);
        cout << "\nAñadida una nueva caja \nCajas en el supermercado: " << cajas.size() << endl;
    }

    void AtenderCola(queue<int> q, int id)
    {
        int montoaux = cajas.at(id).GetMontoRecaudado();
        while (!q.empty())
        {
            montoaux += q.front();
            q.pop();
        }

        cajas.at(id).SetMontoRecaudado(montoaux);
    }

    int MayorRecaudacion()
    {
        int mayor = 0;

        for (int i = 1; i < cajas.size(); i++)
        {
            if (cajas.at(i).GetMontoRecaudado() > cajas.at(mayor).GetMontoRecaudado())
            {
                mayor = i;
            }
        }

        return mayor;
    }

    caja GetCaja(int id)
    {
        return cajas.at(id);
    }
};

int main()
{
    supermercado miSupermercado;

    // Simular algunos pagos y atención de colas
    queue<int> cola1, cola2, cola3, cola;

    cola1.push(100);
    cola1.push(50);
    cola1.push(75);

    cola2.push(120);
    cola2.push(80);

    cola3.push(200);
    cola3.push(150);
    cola3.push(100);

    miSupermercado.AtenderCola(cola1, 0);
    miSupermercado.AtenderCola(cola2, 1);
    miSupermercado.AtenderCola(cola3, 2);

    // Inicializar tres cajas distintas
    for (int i = 0; i < 3; i++)
    {
        cout << "\nCaja " << i + 1 << " \nRecaudación en caja " << i + 1 << ": $" << miSupermercado.GetCaja(i).GetMontoRecaudado() << endl;
    }

    // Crear una caja extra

    miSupermercado.NuevaCaja();

    cola.push(10);
    cola.push(20);

    // Inicializar el resto de las cajas con una sola cola (relleno)

    for (int i = 3; i < 31; i++)
    {
        miSupermercado.AtenderCola(cola, i);
        cout << "\nCaja " << i + 1 << "\nRecaudación en caja " << i + 1 << ": $" << miSupermercado.GetCaja(i).GetMontoRecaudado() << endl;
    }

    // Encontrar la caja con la mayor recaudación

    int cajaMayorRecaudacion = miSupermercado.MayorRecaudacion();
    cout << "La caja con la mayor recaudación es la caja " << cajaMayorRecaudacion + 1 << " con $" << miSupermercado.GetCaja(cajaMayorRecaudacion).GetMontoRecaudado() << endl;

}

#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

class SpeedRun
{
private:
    vector<stack<int>> Donaciones;
    vector<string> nombres;

public:
    SpeedRun()
    {
    }

    // Método para agregar un jugador

    void JugadorNuevo(string nombre)
    {
        nombres.push_back(nombre);
        Donaciones.push_back(stack<int>());
    }

    // Método para agregar una donación para un jugador

    void NuevaDonacion(int monto, string nombre)
    {
        vector<string>::iterator it = find(nombres.begin(), nombres.end(), nombre);

        if (it != nombres.end())
        {
            int posicion = distance(nombres.begin(), it); // Esto lo saque de un video de youtube
            Donaciones[posicion].push(monto);
        }
        else
        {
            cout << "Jugador no encontrado" << endl;
        }
    }

    // Método para retornar el nombre del jugador que tiene más dinero

    string GetJugadorConMasDonaciones()
    {
        int maxTotal = 0;
        string nombre;

        for (int i = 0; i < Donaciones.size(); ++i)
        {
            int total = 0;
            stack<int> StackAux = Donaciones[i];

            while (!StackAux.empty())
            {
                total += StackAux.top();
                StackAux.pop();
            }

            if (total > maxTotal)
            {
                maxTotal = total;
                nombre = nombres[i];
            }
        }

        return nombre;
    }

    // Metodo que transfiere las donaciones de un jugadir a otro

    void transferirDonaciones(string Origen, string Destino)
    {
        vector<string>::iterator iteradororigen = find(nombres.begin(), nombres.end(), Origen);
        vector<string>::iterator iteradordestino = find(nombres.begin(), nombres.end(), Destino);

        if (iteradororigen != nombres.end() && iteradordestino != nombres.end())
        {
            int posOrigen = distance(nombres.begin(), iteradororigen);
            int posDestino = distance(nombres.begin(), iteradordestino);

            while (!Donaciones[posOrigen].empty())
            {
                int monto = Donaciones[posOrigen].top();
                Donaciones[posOrigen].pop();
                Donaciones[posDestino].push(monto);
            }
        }
        else
        {
            cout << "Jugador no encontrado." << endl;
        }
    }
};

int main()
{
    // cout << "Hola mundo" << endl;
    
    SpeedRun op;

    op.JugadorNuevo("Gabo");
    op.JugadorNuevo("Ezequiel");
    op.JugadorNuevo("Maxi");

    op.NuevaDonacion(50, "Gabo");
    op.NuevaDonacion(30, "Ezequiel");
    op.NuevaDonacion(0, "Maxi");

    cout << "Jugador con más donaciones: " << op.GetJugadorConMasDonaciones() << endl;

    op.transferirDonaciones("Gabo", "Maxi");

    cout << "Jugador con más donaciones: " << op.GetJugadorConMasDonaciones() << endl;

    return 0;
}
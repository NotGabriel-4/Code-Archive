#include <iostream>
using namespace std;

class partida
{
private:
    
    // Atributos

    string jugadorA, jugadorB;
    int puntosA, puntosB;
    int setsA, setsB;

public:
   
    // Constructores

    partida() // Constructor Vacío
    {
    }

    partida(string _jugadorA, string _jugadorB) // Constructor lleno
    {
        jugadorA = _jugadorA;
        jugadorB = _jugadorB;
        puntosA = 0;
        puntosB = 0;
        setsA = 0;
        setsB = 0;
    }

    // Setters

    void SetJugadorA(string x)
    {
        jugadorA = x;
    }

    void SetJugadorB(string x)
    {
        jugadorB = x;
    }

    void SetPuntosA(int x)
    {
        puntosA = x;
    }

    void SetPuntosB(int x)
    {
        puntosB = x;
    }

    void SetSetsA(int x)
    {
        setsA = x;
    }

    void SetSetsB(int x)
    {
        setsB = x;
    }

    // Getters

    string GetNombreA()
    {
        return jugadorA;
    }

    string GetNombreB()
    {
        return jugadorB;
    }

    int GetPuntosA()
    {
        return puntosA;
    }

    int GetPuntosB()
    {
        return puntosB;
    }

    int GetSetsA()
    {
        return setsA;
    }

    int GetSetsB()
    {
        return setsB;
    }

    // Métodos

    void punto_jugadorA() // Suma de puntos con sus respectivas validaciones
    {
        if (setsA != 4)
        {
            if (puntosA < 10)
            {
                puntosA++;
            }
            else
            {
                puntosA = 0;
                puntosB = 0;
                setsA++;
            }
        }
        if (setsA == 4)
        {
            cout << "\nEl jugador " << jugadorA << " ha ganado\n"
                 << endl;
        }
    }

    void punto_jugadorB() // Suma de puntos con sus respectivas validaciones
    {
        if (setsB != 4)
        {
            if (puntosB < 10)
            {
                puntosB++;
            }
            else
            {
                puntosA = 0;
                puntosB = 0;
                setsB++;
            }
        }
        if (setsB == 4)
        {
            cout << "\nEl jugador " << jugadorB << " ha ganado\n" << endl;
        }
    }

    void ResultadoParcial() // Método que imprime los datos 
    {
        cout << "Resultados parciales" << endl;

        cout << jugadorA << endl;

        cout << "Sets   | " << setsA << endl;

        cout << jugadorB << endl;

        cout << "Sets   | " << setsB << endl;
    }
};

void nombres(string &x, string &y)
{
    cout << "Ingrese el nombre del Jugador 1: ";
    cin >> x;
    cout << "Ingrese el nombre del Jugador 2: ";
    cin >> y;
}

int main()
{
    string nombreA, nombreB;
    int x;

    nombres(nombreA, nombreB);

    partida partido1(nombreA, nombreB);

    for (int i = 1; true; i++)
    {
        cout << "Ronda " << i << endl;
        cout << "Ingrese quien ganó (1. " << nombreA << " | 2. " << nombreB << "): ";
        cin >> x;

        if (x == 1)
        {
            partido1.punto_jugadorA();
        }
        if (x == 2)
        {
            partido1.punto_jugadorB();
        }

        partido1.ResultadoParcial();

        if ((partido1.GetSetsA() >= 4) || (partido1.GetSetsB() >= 4))
        {
            break;
        }
    }

    partida partido2;

    nombres(nombreA, nombreB);
    partido2.SetJugadorA(nombreA);
    partido2.SetJugadorB(nombreB);
    partido2.SetPuntosA(0);
    partido2.SetPuntosB(0);
    partido2.SetSetsA(0);
    partido2.SetSetsB(0);

    for (int i = 1; true; i++)
    {
        cout << "Ronda " << i << endl;
        cout << "Ingrese quien ganó (1. " << nombreA << " | 2. " << nombreB << "): ";
        cin >> x;

        if (x == 1)
        {
            partido2.punto_jugadorA();
        }
        if (x == 2)
        {
            partido2.punto_jugadorB();
        }
        partido2.ResultadoParcial();

        if ((partido2.GetSetsA() >= 4) || (partido2.GetSetsB() >= 4))
        {
            break;
        }
    }
}
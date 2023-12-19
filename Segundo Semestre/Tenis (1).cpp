#include <iostream>
using namespace std;

class partida
{
private:
    string nombre;
    int puntos, sets;

public:
    partida() // Constructor vacío para poder utilizar los Setters
    {
    }

    // Getters

    string GetNombre()
    {
        return nombre;
    }

    int GetPuntos()
    {
        return puntos;
    }

    int GetSets()
    {
        return sets;
    }

    // Setters

    void SetNombre(string x)
    {
        nombre = x;
    }

    void SetPuntos(int x)
    {
        puntos = x;
    }

    void SetSets(int x)
    {
        sets = x;
    }

    // Métodos

    void punto(int &code) // Método que suma puntaje, recibe una variable que funciona como retorno para reiniciar los puntajes una vez termina un set
    {        
        code = 0;

        if (puntos < 10) // Suma punto por ronda ganada, validando primero que no haya ganado el set
        {
            puntos++;
        }

        else if (puntos == 10) // Suma set al llegar a 11 puntos (Valida 10 por que no suma el punto 11)
        {
            puntos = 0;
            sets++;
            code = 1;
        }
        if (sets == 4) // Declara al ganador del juego
        {
            cout << "\n" << nombre << " ha ganado el juego! :)" << endl;
        }
    }

    void resultadoparcial()
    {

        cout << "\n" << "Puntajes Parciales " << nombre << endl;

        cout << puntos << " puntos." << endl;
        cout << sets << " sets.\n" << endl;
    }
};

int main()
{
    int g, code;
    
    cout << "\nBienvenido a Pro Evolution Ping Pong\n" << endl;

    string x;

    partida jugador1;
    partida jugador2;

    cout << "Ingrese el nombre del Jugador 1: "; cin >> x;
    jugador1.SetNombre(x);

    cout << "Ingrese el nombre del Jugador 2: "; cin >> x;
    jugador2.SetNombre(x);

    cout << "\nLista de Jugadores\n" << "\nJugador 1: " << jugador1.GetNombre() << "\nJugador 2: " << jugador2.GetNombre() << endl;

    jugador1.SetPuntos(0);
    jugador1.SetSets(0);
    jugador2.SetPuntos(0);
    jugador2.SetSets(0);

    for (int i = 1; true; i++)
    {
        code = 0;
        do
        {
            cout << "\nIngrese el jugador ganador (1 o 2) de la ronda " << i << ": "; cin >> g;
        } while (g > 2 || g < 1);

        if (g == 1)
        {
            jugador1.punto(code);
        }

        else if (g == 2)
        {
            jugador2.punto(code);
        }
        if (code == 1)
        {
            jugador1.SetPuntos(0);
            jugador2.SetPuntos(0);
        }
        jugador1.resultadoparcial();
        jugador2.resultadoparcial();

        if (jugador1.GetSets() == 4)
        {
            cout << jugador1.GetNombre() << " ha ganado";
            break;
        }
        if (jugador2.GetSets() == 4)
        {
            cout << jugador2.GetNombre() << " ha ganado";
            break;
        }
    }
}
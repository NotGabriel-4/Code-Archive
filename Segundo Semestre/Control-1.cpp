#include <iostream>
using namespace std;

class videojuego
{
private:                // Atributos de la clase
    string nombre;
    int precio, tiempo;

public:
    videojuego(string _nombre, int _precio, int _tiempo) // Constructor lleno
    {
        nombre = _nombre;
        precio = _precio;
        tiempo = _tiempo;
    }

    videojuego()    // Constructor vacío
    {
    }

    // Getters

    string GetNombre()
    {
        return nombre;
    }

    int GetTiempo()
    {
        return tiempo;
    }

    int GetPrecio()
    {
        return precio;
    }

    // Setters

    void SetNombre(string x)
    {
        nombre = x;
    }

    void SetPrecio(int x)
    {
        precio = x;
    }

    void SetTiempo(int x)
    {
        tiempo = x;
    }

    // Métodos

    bool incrementar(int x) // Método incrementar, aumenta x minutos el tiempo de juego y retorna si el juego es una buena inversión o no
    {
        tiempo += x;
        if ((precio / tiempo) < 25)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

// Método intercambiar que recibe dos juegos y modifica sus atributos, al estar fuera de la clase se hace uso de setters y getters

void intercambiar(videojuego &juegoA, videojuego &juegoB) 
{
    int a, b;
    a = juegoA.GetTiempo();
    b = juegoB.GetTiempo();

    juegoA.SetTiempo(b);
    juegoB.SetTiempo(a);

    cout << juegoA.GetNombre() << "\n" << endl;
    cout << "Tiempo de juego: " << juegoA.GetTiempo() << endl;
    cout << "Precio: " << juegoA.GetPrecio() << endl;

    cout << juegoB.GetNombre() << endl;
    cout << "Tiempo de juego: " << juegoB.GetTiempo() << endl;
    cout << "Precio: " << juegoB.GetPrecio() << endl;
}

int main() // En el control no se pide crear main, este es un main que sirve solo para probar el método de intercambiar
{
    string nombre;
    int precio, tiempo;

    cout << "\n1\n" << endl;
    cin >> nombre;
    cin >> precio;
    cin >> tiempo;

    videojuego juego1(nombre, precio, tiempo);

    cout << "\n2\n" << endl;
    cin >> nombre;
    cin >> precio;
    cin >> tiempo;

    videojuego juego2(nombre, precio, tiempo);

    intercambiar(juego1, juego2);
}
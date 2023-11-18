#include <iostream>
using namespace std;

class jugador
{
protected:
    string name, position;
    int age, number;

public:
    jugador(string _name, string _position, int _age, int _number) // Constructor Lleno
    {
        name = _name;
        position = _position;
        age = _age;
        number = _number;
    }

    jugador() // Constructor Vacío
    {
    }

    // Getters

    string GetNombre()
    {
        return name;
    }

    string GetPosicion()
    {
        return position;
    }

    int GetNumero()
    {
        return number;
    }

    int GetEdad()
    {
        return age;
    }

    // Setters

    void SetNombre(string x)
    {
        name = x;
    }

    void SetPosicion(string x)
    {
        position = x;
    }

    void SetNumero(int x)
    {
        number = x;
    }

    void SetEdad(int x)
    {
        age = x;
    }

    // Métodos

    void mostrarinformacion()
    {
        cout << "Nombre: " << name << endl;
        cout << "Edad: " << age << endl;
        cout << "N° de camiseta: " << number << endl;
        cout << "Posición: " << position << endl;
    }
};

class equipo_futbol : public jugador
{
private:
    jugador *titular[11];
    jugador *reserva[12];

public:
    equipo_futbol(jugador *titular[], jugador *reserva[])
    {
        for (int i = 0; i < 11; i++)
        {
            this->titular[i] = nullptr;
        }

        for (int i = 0; i < 12; i++)
        {
            this->reserva[i] = nullptr;
        }

        for (int i = 0; i < 11; i++)
        {
            this->titular[i] = titular[i];
        }

        for (int i = 0; i < 12; i++)
        {
            this->reserva[i] = reserva[i];
        }
    }

    void mostrartitulares()
    {
        for (int i = 0; i < 11; i++)
        {
            cout << "\ntitular " << i + 1 << "\n"
                 << endl;
            titular[i]->mostrarinformacion();
        }
    }

    void mostrarreserva()
    {
        for (int i = 0; i < 12; i++)
        {
            cout << "\nreserva " << i + 1 << "\n"
                 << endl;
            reserva[i]->mostrarinformacion();
        }
    }

    void agregartitular(jugador *nuevo)
    {
        bool portero = false;

        if (nuevo->GetPosicion() == "Portero")
        {
            for (int i = 0; i < 11; i++)
            {
                if (titular[i]->GetPosicion() == "Portero")
                {
                    portero = true;
                    break;
                }
            }

            if (!portero)
            {
                for (int i = 0; i < 11; i++)
                {
                    if (titular[i] == nullptr)
                    {
                        cout << "El jugador será asignado en la posición " << i + 1 << " de la plantilla" << endl;
                        titular[i] = new jugador(nuevo->GetNombre(), "Portero", nuevo->GetEdad(), nuevo->GetNumero());
                        break;
                    }
                }
            }
        }

        else
        {
            for (int i = 0; i < 11; i++)
            {
                if (titular[i] == nullptr)
                {
                    cout << "El jugador será asignado en la posición " << i + 1 << " de la plantilla" << endl;
                    titular[i] = new jugador(nuevo->GetNombre(), nuevo->GetPosicion(), nuevo->GetEdad(), nuevo->GetNumero());
                    break;
                }

                else
                {
                    cout << "La posición " << i + 1 << " está ocupada" << endl;
                }
            }
        }
    }

    void agregarreserva(jugador *nuevo)
    {

        for (int i = 0; i < 12; i++)
        {
            if (titular[i] == nullptr)
            {
                cout << "El jugador será asignado en la posición " << i + 1 << " de la plantilla" << endl;
                reserva[i] = new jugador(nuevo->GetNombre(), nuevo->GetPosicion(), nuevo->GetEdad(), nuevo->GetNumero());
                break;
            }

            else
            {
                cout << "La posición " << i + 1 << " está ocupada" << endl;
            }
        }
    }

    void intercambiarjugador(int _titular, int _reserva)
    {
        int aux1 = -1, aux2 = -1;

        for (int i = 0; i < 11; i++)
        {
            if (titular[i]->GetNumero() == _titular)
            {
                aux1 = i;
                break;
            }
        }

        if (aux1 == -1)
        {
            cout << "No se encontró al jugador N°" << _titular << endl;
        }

        for (int i = 0; i < 12; i++)
        {
            if (reserva[i]->GetNumero() == _reserva)
            {
                aux2 = i;
                break;
            }
        }

        if (aux2 == -1)
        {
            cout << "No se encontró al jugador N°" << _reserva << endl;
        }

        // Aux1 = Posicion del titular en el arreglo
        // Aux2 == Posicion del reserva en el arreglo

        jugador *aux3 = titular[aux1];
        jugador *aux4 = reserva[aux2];

        titular[aux1] = aux4;
        reserva[aux2] = aux3;
    }
};

int main()
{
    jugador *titulares[11], *reservas[12];
    string nombre, posicion;
    int edad, numero;

    for (int i = 0; i < 11; i++)
    {
        titulares[i] = nullptr;
    }
    
    for (int i = 0; i < 12; i++)
    {
        reservas[i] = nullptr;
    }

    for (int i = 0; i < 11; i++)
    {
        cout << "Ingrese los datos del jugador " << i + 1 << endl;
        cout << "Nombre: ";
        cin >> nombre;
        cout << "Edad: ";
        cin >> edad;
        cout << "Numero: ";
        cin >> numero;
        cout << "Posición: ";
        cin >> posicion;
        titulares[i] = new jugador(nombre, posicion, edad, numero);
    }

    for (int i = 0; i < 12; i++)
    {
        cout << "Ingrese los datos del reserva " << i + 1 << endl;
        cout << "Nombre: ";
        cin >> nombre;
        cout << "Edad: ";
        cin >> edad;
        cout << "Numero: ";
        cin >> numero;
        cout << "Posición: ";
        cin >> posicion;
        reservas[i] = new jugador(nombre, posicion, edad, numero);
    }

    equipo_futbol colocolo(titulares, reservas);

    colocolo.mostrartitulares();
    colocolo.mostrarreserva();

    for (int i = 0; i < 11; i++)
    {
        delete titulares[i];
    }
    for (int i = 0; i < 12; i++)
    {
        delete reservas[i];
    }
}
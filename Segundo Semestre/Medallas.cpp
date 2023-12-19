#include <iostream>
using namespace std;

class pais
{
private:
    string nombre_pais;
    int oro, plata, bronce, participaciones;

public:
    pais(string _nombre)
    {
        nombre_pais = _nombre;
        oro = 0;
        plata = 0;
        bronce = 0;
        participaciones = 0;
    }

    pais()
    {
    }

    // Setters

    void SetNombre(string _nombre_pais)
    {
        nombre_pais = _nombre_pais;
    }

    void SetOro(int _oro)
    {
        oro = _oro;
    }

    void SetPlata(int _plata)
    {
        plata = _plata;
    }

    void SetBronce(int _bronce)
    {
        bronce = _bronce;
    }

    void SetParticipaciones(int _participaciones)
    {
        participaciones = _participaciones;
    }

    // Getters

    string GetNombre()
    {
        return nombre_pais;
    }

    int GetOro()
    {
        return oro;
    }

    int GetPlata()
    {
        return plata;
    }

    int GetBronce()
    {
        return bronce;
    }

    int GetParticipaciones()
    {
        return participaciones;
    }

    // Métodos

    void agregarParticipaciones(int oro, int plata, int bronce, int ninguna)
    {
        int suma;

        this->oro += oro;
        this->plata += plata;
        this->bronce += bronce;

        suma = oro + plata + bronce + ninguna;
        participaciones += suma;
    }

    void estadisticas()
    {
        cout << "Total de participaciones: " << participaciones << endl;
        cout << "Medallas \n" << endl;
        cout << "Oro: " << oro << endl;
        cout << "Plata: " << plata << endl;
        cout << "Bronce: " << bronce << endl;

        if (oro > 0)
        {
            cout << "Porcentaje de medallas de oro: " << (float)(oro / participaciones) * 100 << "%" << endl;
        }

        else
        {
            cout << "No hubo medallas de oro" << endl;
        }
    }
};

int main()
{
    string nombre_pais;
    int oro, plata, bronce, ninguna;

    cout << "Ingrese el nombre del país: "; cin >> nombre_pais;
    cout << "Ingrese la cantidad de medallas\n" << endl;

    cout << "Oro: ";
    cin >> oro;
    cout << "Plata: ";
    cin >> plata;
    cout << "Bronce: ";
    cin >> bronce;
    cout << "Sin medalla: ";
    cin >> ninguna;

    pais pais1(nombre_pais);
    pais1.agregarParticipaciones(oro, plata, bronce, ninguna);
    pais1.estadisticas();
}
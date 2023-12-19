#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Equipaje
{
private:
    string rut;
    float peso;

public:
    Equipaje(string rut, float peso)
    {
        this->rut = rut;
        this->peso = peso;
    }

    string GetRut()
    {
        return rut;
    }

    float GetPeso()
    {
        return peso;
    }

    void SetRut(string rut)
    {
        this->rut = rut;
    }

    void SetPeso(float peso)
    {
        this->peso = peso;
    }
};

class Pasajero
{
private:
    string rut;
    vector <Equipaje> equipajes;

public:
    Pasajero(string rut)
    {
        this->rut = rut;
    }

    string GetRut()
    {
        return rut;
    }

    void SetRut(string rut)
    {
        this->rut = rut;
    }

    int GetEquipajes()
    {
        return equipajes.size();
    }

    bool AgregarEquipaje(Equipaje NuevoEquipaje)
    {
        if (equipajes.size() < 5)
        {
            return false;
        }
        else
        {
            equipajes.push_back(NuevoEquipaje);
        }

        return true;
    }

    Equipaje obtenerEquipajeMayorPeso()
    {

        if (equipajes.empty())
        {
            cout << "El pasajero no tiene equipajes" << endl;
            return Equipaje("N/A", 0);
        }
        else
        {
            sort(equipajes.begin(), equipajes.end());
        }

        return equipajes.at(equipajes.size());
    }

    Equipaje obtenerEquipajeMenorPeso()
    {

        if (equipajes.empty())
        {
            cout << "El pasajero no tiene equipajes" << endl;
            return Equipaje("N/A", 0);
        }
        else
        {
            sort(equipajes.begin(), equipajes.end());
        }

        return equipajes.at(0);
    }
};

class Operador
{
private:
    vector<Equipaje> MaletasPasajeros;

public:
    Operador()
    {
    }

    // Agregar equipaje

    void AgregarEquipaje(Pasajero Propietario, float peso)
    {
        Equipaje EquipajeNuevo(Propietario.GetRut(), peso);

        if (Propietario.AgregarEquipaje(EquipajeNuevo))
        {
            MaletasPasajeros.push_back(EquipajeNuevo);
        }
        else
        {
            cout << "No se puede añadir el equipaje (Lleno)" << endl;
        }
    }

    // Buscar Maleta

    int buscarMaleta(string rut)
    {
        for (int i = 0; i <= MaletasPasajeros.size(); i++)
        {
            if (MaletasPasajeros.at(i).GetRut() == rut)
            {
                return i;
            }
        }

        cout << "Maleta no encontrada" << endl;

        return 0;
    }

    // Informacion cinta

    void InfoCinta()
    {
        cout << "Equipaje en espera: " << MaletasPasajeros.size() << endl;

        float sumPeso = 0;

        for (int i = 0; i < MaletasPasajeros.size(); i++)
        {
            sumPeso += MaletasPasajeros.at(i).GetPeso();
        }

        int posEnCinta;

        for (int i = 0; i < MaletasPasajeros.size(); i++)
        {
            cout << endl;
        }
    }
    // Entregar equipaje
};

int main()
{
    cout << "Hola mundo" << endl;
}
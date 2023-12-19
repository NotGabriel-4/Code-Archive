#include <iostream>
#include <vector>

using namespace std;

/*Clase deportista, atributos: Nombre, Pais, especialidad, metodo imprimir.
Paradeportista, deportista heredado con atributo discapacidad

Modificar clase deportista a conveniencia y crear la clase paradeportista con el metodo imprimir

Los deportista estan registrados en una clase stgo 2023, cuyo atributo es un vector de deportistas
llamado "Participantes"

Programe, dentro de una nueva clase llamada ParticipantesStgo2023, un metodo que imprima los datos
de TODOS los participantes, ¿Es necesario cambiar la clase Deportista?
*/

class Deportista
{
protected:
    string nombre, pais, especialidad;

public:
    Deportista(string nombre, string pais, string especialidad)
    {
        this->nombre = nombre;
        this->pais = pais;
        this->especialidad = especialidad;
    }

    void imprimir()
    {
        cout << "Nombre: " << nombre << endl;
        cout << "Pais: " << pais << endl;
        cout << "Especialidad: " << especialidad << endl;
    }

    string GetNombre()
    {
        return nombre;
    }

    string GetPais()
    {
        return pais;
    }

    string GetEspecialidad()
    {
        return especialidad;
    }
};

class ParaDeportista : public Deportista
{
private:
    string discapacidad;

public:
    ParaDeportista(string nombre, string pais, string especialidad, string discapacidad) : Deportista(nombre, pais, especialidad)
    {
        this->discapacidad = discapacidad;
    }

    void imprimir()
    {
        cout << "Nombre: " << nombre << endl;
        cout << "Pais: " << pais << endl;
        cout << "Especialidad: " << especialidad << endl;
        cout << "Discapacidad: " << discapacidad << endl;
    }
};

class ParticipantesStgo2023
{
private:
    vector<Deportista> participantes;
public: 
    ParticipantesStgo2023()
    {
    }

    void ListarParticipantes()
    {
        for(int i = 0; i < participantes.size(); i++)
        {
            participantes.at(i).imprimir();
        }
    }
};

int main()
{
}
#include <iostream>
#include <queue>

using namespace std;

class Paciente
{
private:
    string Nombre;
    bool Urgente;

public:
    Paciente(string nombre, bool urgente)
    {
        Nombre = nombre;
        Urgente = urgente;
    }

    Paciente()
    {
    }

    string GetNombre()
    {
        return Nombre;
    }

    bool GetEstado()
    {
        return Urgente;
    }

    void SetNombre(string nombre)
    {
        Nombre = nombre;
    }

    void SetEstado(bool gravedad)
    {
        Urgente = gravedad;
    }
};

class ListaDeEspera : public Paciente
{
private:
    queue<Paciente> ColaUrgencia;
    queue<Paciente> ColaEspera;
    int llamados;

public:
    ListaDeEspera()
    {
        llamados = 0;
    }

    void Encolar(Paciente PacienteNuevo)
    {
        if (PacienteNuevo.GetEstado())
        {
            ColaUrgencia.push(PacienteNuevo);
        }

        else
        {
            ColaEspera.push(PacienteNuevo);
        }
    }

    Paciente Llamado()
    {
        Paciente PacienteLlamado;
        Paciente PacienteNulo("N/A", false);

        if (ColaUrgencia.empty() && ColaEspera.empty())
        {
            cout << "No hay pacientes en cola" << endl;
            return PacienteNulo;
        }

        else if (llamados < 5 && !ColaUrgencia.empty())
        {
            llamados++;
            PacienteLlamado = ColaUrgencia.front();
            ColaUrgencia.pop();
        }

        else if (!ColaEspera.empty())
        {
            
            llamados = 0;
            PacienteLlamado = ColaEspera.front();
            ColaEspera.pop();
            llamados++;
        }

        return PacienteLlamado;
    }

    void ListaEspera()
    {
        cout << "En lista de espera común: " << ColaEspera.size() << endl;
        cout << "En lista de espera urgente: " << ColaUrgencia.size() << endl;
    }

    int GetCola()
    {
        return ColaEspera.size() + ColaUrgencia.size();
    }
};

int main()
{
    ListaDeEspera lista;

    lista.Encolar(Paciente("Juan", true));
    lista.Encolar(Paciente("Ana", false));
    lista.Encolar(Paciente("Carlos", true));
    lista.Encolar(Paciente("Maria", true));
    lista.Encolar(Paciente("Pedro", true));
    lista.Encolar(Paciente("Laura", false));
    lista.Encolar(Paciente("Miguel", true));
    lista.Encolar(Paciente("Maximiliano", false));
    lista.Encolar(Paciente("Luis", true));
    lista.Encolar(Paciente("Gabriel", true));

    for (int i = 0; lista.GetCola() > 0; i++)
    {
        Paciente llamado = lista.Llamado();
        if (llamado.GetNombre() != "N/A")
            cout << "Llamado: " << llamado.GetNombre() << endl;
            cout << "Estado: " << (llamado.GetEstado() ? "Grave" : "Estable") << endl;
            cout << endl;
    }

    lista.ListaEspera();

}
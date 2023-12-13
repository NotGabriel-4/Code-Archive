#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

class Equipo
{
private:
    string nombreEquipo, pais;

public:
    Equipo()
    {
    }

    string GetPais()
    {
        return pais;
    }

    void imprimir()
    {
        cout << "Nombre del equipo: " << nombreEquipo << endl;
        cout << "Pais: " << pais << endl;
    }
};

class Evento
{
private:
    vector<Equipo> listadoParticipantes;

public:
    Evento()
    {
    }

    bool participa(string pais)
    {
        for (int i = 0; i < listadoParticipantes.size(); i++)
        {
            if (listadoParticipantes.at(i).GetPais() == "Pais")
            {
                return true;
            }
        }

        return false;
    }

    vector<string> noParticipa()
    {
        vector<string> paises;
        queue<string> consultas;

        consultas.push("Argentina");
        consultas.push("Bolivia");
        consultas.push("Brasil");
        consultas.push("Chile");
        consultas.push("Colombia");
        consultas.push("Ecuador");
        consultas.push("Paraguay");
        consultas.push("Peru");
        consultas.push("Uruguay");
        consultas.push("Venezuela");

        vector<Equipo> c = listadoParticipantes;

        for (int i = 0; i < consultas.size(); i++)
        {
            bool x = false;
            for (int j = 0; i < c.size(); i++)
            {
                if (c.at(j).GetPais() == consultas.front())
                {
                    consultas.pop();
                    x = true;
                    break;
                }
            }

            if (!x)
            {
                paises.push_back(consultas.front());
                consultas.pop();
            }
        }

        return paises;
    }
};
int main()
{
}
#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Encuestas
{
private:
    queue<string> respuestas_q;
    stack<string> respuestas_s;

public:
    Encuestas()
    {
    }

    void InsertarRespuesta(int numeroEncuesta, string respuesta)
    {
        if (numeroEncuesta == 1)
        {
            respuestas_q.push(respuesta);
        }

        else if (numeroEncuesta == 2)
        {
            respuestas_s.push(respuesta);
        }

        else
        {
            cout << "Ingrese un numero valido" << endl;
        }
    }

    int cantidadCambioRespuesta()
    {
        int contador = 0;

        if (respuestas_q.size() != respuestas_s.size())
        {
            return -1;
        }

        else
        {
            queue<string> q = respuestas_q;
            stack<string> s = respuestas_s;

            while (!q.empty() || !s.empty())
            {
                if (q.front() != s.top())
                {
                    q.pop();
                    s.pop();
                    contador++;
                }
            }
        }
    }

    void imprimeResultadoEncuesta2()
    {
        int a = 0, b = 0, c = 0, d = 0;
        stack<string> r = respuestas_s;

        for (int i = 0; i < r.size(); i++)
        {
            if (r.top() == "A favor")
            {
                a++;
                r.pop();
            }
            else if (r.top() == "En contra")
            {
                b++;
                r.pop();
            }
            else if (r.top() == "Indeciso")
            {
                c++;
                r.pop();
            }
            else if (r.top() == "No contesta")
            {
                d++;
                r.pop();
            }
        }

        cout << "A favor: " << a << endl;
        cout << "En contra: " << b << endl;
        cout << "Indeciso: " << c << endl;
        cout << "No contesta: " << d << endl;
    }
};

int main()
{
}
#include <iostream>
#include <vector>
#include <map>

using namespace std;

class carro
{
private:
    map<int, int> descuentos; // llave = tipo cliente | contenido = descuento asociado
    map<int, int>::iterator it;
    vector<int> precios;
    int tipo_cliente;

public:
    carro(int tipo_cliente, map<int, int> descuentos, vector<int> precios)
    {
        this->tipo_cliente = tipo_cliente;
        this->descuentos = descuentos;
        this->precios = precios;
    }

    float MontoPago()
    {
        int descuento;
        int tipo;

        cout << "¿Que tipo de cliente es?: ";
        cin >> tipo;

        it = descuentos.find(tipo);
        
        for (int i = 0; i < descuentos.size(); i++)
        {
        }
    }
};

int main()
{
}
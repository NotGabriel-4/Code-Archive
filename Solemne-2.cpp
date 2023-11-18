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
        if (tipo_cliente == 1)
        {
            it = descuentos.find(1);
            if(it != descuentos.end())
            {
                descuento = it->second;
            }
        }
        return descuento;
    }
};

int main()
{

}
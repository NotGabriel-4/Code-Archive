#include <iostream>

using namespace std;

class cuenta
{
private:
    int dinero, deuda;

public:
    cuenta()
    {
        dinero = 0;
        deuda = 0;
    }

    // Setters

    void SetDinero(int _dinero)
    {
        dinero = _dinero;
    };

    void SetDeuda(int _deuda)
    {
        deuda = _deuda;
    };

    // Getters

    int GetDinero()
    {
        return dinero;
    };

    int GetDeuda()
    {
        return deuda;
    };

    // Métodos

    void consulta() // Consulta el saldo en la Cuenta
    {
        cout << "Su saldo es de: " << dinero << endl; // No utilizo Getters ya que estoy operando dentro de la clase
        cout << "Su deuda es de: " << deuda << endl;
    }

    void counter(int failed, int passed)
    // Contador de operaciones, recibe datos inicializados desde "operaciones", puede decirse que es un metodo imprimir
    {
        cout << "Operaciones realizadas = " << passed << endl;
        cout << "Operaciones fallidas = " << failed << endl;
        cout << "Total de operaciones = " << passed + failed << endl;
    }

    void operaciones(int &s, int &deuda) // Realiza todas las operaciones enumeradas (1 a 4)
    {
        int x, transferencia, deposito, prestamo, pago; // x es usada para la selección de opciones
        int ops = 0, failed = 0, passed = 0;            // Variables utilizadas para el contador
        string destinatario;                            // Almacena el nombre del destinatario, no tiene utilidad real

        cout << "Bienvenido a Banco Estafo | Recuerda que las operaciones se guardan una vez sales del menú." << endl;

        cuenta cliente; // crea el objeto cliente de la clase cuenta

        while (true)
        {
            do
            {
                cout << "¿Que operación desea realizar? (1. Transferencia | 2. Deposito | 3. Pedir Prestamo | 4. Pagar Prestamo | 5. Salir)" << endl;
                cin >> x;
            } while (x > 5 || x < 1);

            if (x == 1) // Elige la opcion según lo escogido
            {
                do
                {
                    cout << "¿Cuanto dinero desea transferir?: $";
                    cin >> transferencia;
                } while (transferencia < 0);

                if (transferencia > s)
                {
                    cout << "No cuentas con suficiente saldo para transferir. La operación se ha cancelado" << endl;
                    failed++;
                }
                else
                {
                    cout << "¿A quien le vas a transferir dinero?: ";
                    cin >> destinatario;

                    cout << "Vas a transferir $" << transferencia << " a " << destinatario << endl;

                    do
                    {
                        cout << "¿Estás seguro? (1. Si | 2.No) ";
                        cin >> x;
                    } while (x > 2 || x < 1);

                    if (x == 1)
                    {
                        s -= transferencia; // Descuenta el dinero de la cuenta, pero no hace nada más, solo simula una transferencia
                        cout << "Has transferido $" << transferencia << " a " << destinatario << ", sus saldos actualizados se muestran a continuacion." << endl;
                        passed++;
                    }
                    else if (x == 2)
                    {
                        cout << "Operación cancelada" << endl;
                        failed++;
                    }
                }
            }

            if (x == 2) // Elige la opcion según lo escogido
            {
                do
                {
                    cout << "¿Cuanto dinero vas a depositar?: ";
                    cin >> deposito;
                } while (deposito < 0);

                cout << "Vas a depositar $" << deposito << endl;

                do
                {
                    cout << "¿Estás seguro? (1. Si | 2.No) ";
                    cin >> x;
                } while (x > 2 || x < 1);

                if (x == 1)
                {
                    s += deposito; // Suma el dinero al saldo total de la cuenta
                    cout << "Ha depositado $" << deposito << ", sus saldos actualizados se muestran a continuacion." << endl;
                    passed++;
                }
                else if (x == 2)
                {
                    cout << "Operación cancelada" << endl;
                    failed++;
                }
            }

            if (x == 3) // Elige la opcion según lo escogido
            {
                do
                {
                    cout << "¿Cuanto dinero quieres pedir?";
                    cin >> prestamo;
                } while (prestamo <= 0);

                s += prestamo;
                deuda += prestamo;

                cout << "Te hemos concedido exitosamente un prestamo por $" << prestamo << " su deuda se ha actualizado." << endl;
            }

            if (x == 4) // Elige la opcion según lo escogido
            {
                cout << "Actualmente debes $" << deuda << endl;
                do
                {
                    cout << "¿Cuanto dinero quieres pagar?: ";
                    cin >> pago;
                } while (pago > deuda && pago > s);

                do
                {
                    cout << "¿Estás seguro? (1. Si | 2.No) ";
                    cin >> x;
                } while (x > 2 || x < 1);

                if (x == 1)
                {
                    deuda -= pago;
                    s -= pago;
                    cout << "Ha pagado $" << pago << ", sus saldos actualizados se muestran a continuacion." << endl;
                    passed++;
                }
                else if (x == 2)
                {
                    cout << "Operación cancelada" << endl;
                    failed++;
                }
            }

            if (x == 5) // Elige la opcion según lo escogido
            {
                break;
            }

            cliente.SetDinero(s);
            cliente.SetDeuda(deuda);
            // Luego de terminar, actualiza el saldo en la clase, no es necesario utilizar setters ya que estamos en la clase
            // * Los setters serían necesarios si estuvieramos operando en una funcion FUERA de la clase

            cliente.consulta();
            cliente.counter(failed, passed);
            // Llama a los metodos de consulta y imprimir para finalizar esta operación
        }
    }
};

int main()
{
    cuenta cliente;
    int s = cliente.GetDinero();
    int deuda = cliente.GetDeuda();

    cliente.operaciones(s, deuda);
}
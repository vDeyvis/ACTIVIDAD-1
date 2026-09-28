#include <iostream>
using namespace std;

class CuentaBancaria {
private:
    double saldo;

public:
    CuentaBancaria(double saldoInicial) {
        saldo = saldoInicial;
    }

    void depositar(double cantidad) {
        if (cantidad > 0) {
            saldo = saldo + cantidad;
        }
    }

    void retirar(double cantidad) {
        if (cantidad > 0 && cantidad <= saldo) {
            saldo = saldo - cantidad;
        }
    }

    void mostrarSaldo() {
        cout << "Saldo actual: " << saldo << endl;
    }
};

int main() {
    CuentaBancaria cuenta(500);

    cuenta.depositar(200);
    cuenta.retirar(100);
    cuenta.mostrarSaldo();

    return 0;
}

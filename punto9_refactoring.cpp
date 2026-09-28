#include <iostream>
#include <string>
using namespace std;

class Alumno {
private:
    string nombre;

public:
    Alumno(string n) {
        nombre = n;
    }

    void registrar() {
        cout << "Alumno registrado: " << nombre << endl;
    }
};

class Pago {
public:
    void calcular(double monto) {
        cout << "Pago del alumno: S/ " << monto << endl;
    }
};

class Correo {
public:
    void enviar(string correo) {
        cout << "Enviando correo a: " << correo << endl;
    }
};

class Reporte {
public:
    void generar() {
        cout << "Generando reporte del alumno..." << endl;
    }
};

int main() {
    Alumno alumno("Deyvis");
    Pago pago;
    Correo correo;
    Reporte reporte;

    alumno.registrar();
    pago.calcular(250);
    correo.enviar("alumno@correo.com");
    reporte.generar();

    return 0;
}

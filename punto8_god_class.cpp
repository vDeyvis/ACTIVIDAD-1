#include <iostream>
#include <string>
using namespace std;

class SistemaUniversitario {
public:
    void registrarAlumno(string nombre) {
        cout << "Registrando alumno: " << nombre << endl;
    }

    void calcularPago(double monto) {
        cout << "Pago del alumno: S/ " << monto << endl;
    }

    void enviarCorreo(string correo) {
        cout << "Enviando correo a: " << correo << endl;
    }

    void generarReporte() {
        cout << "Generando reporte del alumno..." << endl;
    }
};

int main() {
    SistemaUniversitario sistema;

    sistema.registrarAlumno("Deyvis");
    sistema.calcularPago(250);
    sistema.enviarCorreo("alumno@correo.com");
    sistema.generarReporte();

    return 0;
}

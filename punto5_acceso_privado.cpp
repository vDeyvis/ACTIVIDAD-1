#include <iostream>
using namespace std;

class Padre {
private:
    void metodoPrivado1() {
        cout << "Metodo privado 1" << endl;
    }

    void metodoPrivado2() {
        cout << "Metodo privado 2" << endl;
    }

public:
    void mostrar() {
        cout << "Metodo publico del padre" << endl;
        metodoPrivado1();
        metodoPrivado2();
    }
};

class Hija : public Padre {
public:
    void probarAcceso() {
        cout << "La subclase no puede acceder directamente a los metodos privados del padre." << endl;
    }
};

int main() {
    Hija objeto;
    objeto.probarAcceso();

    return 0;
}

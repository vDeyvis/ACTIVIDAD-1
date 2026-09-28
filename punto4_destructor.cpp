#include <iostream>
using namespace std;

class Ejemplo {
public:
    Ejemplo() {
        cout << "Constructor ejecutado" << endl;
    }

    ~Ejemplo() {
        cout << "Destructor ejecutado" << endl;
    }
};

int main() {
    Ejemplo* objeto = new Ejemplo();

    cout << "El objeto fue creado." << endl;

    delete objeto;

    cout << "El objeto fue eliminado." << endl;

    return 0;
}

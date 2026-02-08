#include <iostream>
#include <string>

using namespace std;

// Definición de la clase
class Celular {
private:
    string marca;
    string modelo;
    int bateria;

public:
    // Constructor
    Celular(string m, string mod, int b) {
        marca = m;
        modelo = mod;
        bateria = b;
    }

    // Método 1
    void llamar() {
        cout << "Llamando desde el celular " << marca << " " << modelo << endl;
        bateria -= 10;
        cout << "Bateria actual: " << bateria << "%" << endl;
    }

    // Método 2
    void mostrarInfo() {
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Bateria: " << bateria << "%" << endl;
    }
};

int main() {
    // Crear dos objetos
    Celular celular1("Samsung", "Galaxy S21", 80);
    Celular celular2("Apple", "iPhone 13", 60);

    cout << "=== Celular 1 ===" << endl;
    celular1.mostrarInfo();
    celular1.llamar();

    cout << "\n=== Celular 2 ===" << endl;
    celular2.mostrarInfo();
    celular2.llamar();
    cin.get();   // ? evita que la consola se cierre


    return 0;
}

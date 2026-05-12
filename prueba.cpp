#include <iostream>

using std::cin;
using std::cout;

int main() {
    cout << "Este es un archivo de prueba para git\n";
    cout << "Estoy agregando mas lineas y cout jajaja\n";
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(10000, '\n');
    }
}
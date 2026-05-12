#include <iostream>
#include <limits>

using std::cin;
using std::cout;
using std::endl;

int main() {
    cout << "Este es un archivo de prueba para git\n";
    cout << "Estoy agregando mas lineas y cout jajaja\n";
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Ingresaste algo que no es un numero :(\n";
    } else {
        cout << "Ingresaste el numero: " << num << endl;
    }
    return 0;
}
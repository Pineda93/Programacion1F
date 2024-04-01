#include <iostream>

using namespace std;

bool esBisiesto(int año) {
    // Un año es bisiesto si es divisible entre 4
    // pero no es divisible entre 100, a menos que también sea divisible entre 400
    if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int año;

    // Solicitar al usuario que ingrese el año
    cout << "Ingrese un ano: ";
    cin >> año;

    // Verificar si el año es bisiesto o no y mostrar el resultado
    if (esBisiesto(año)) {
        cout << año << " es un ano bisiesto." << endl;
    } else {
        cout << año << " no es un ano bisiesto." << endl;
    }

    return 0;
}
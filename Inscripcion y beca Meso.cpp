#include <iostream>
using namespace std;

int main(int argc, char *argv){
    int inscripcion, beca;
    cout << "Ingrese el metodo de inscripcion: " << endl;
    cout << "1. CUI o DPI" << endl;
    cout << "2. Pasaporte" << endl;
    cin >> inscripcion;
    cout << "Ingrese si tiene beca o no: " << endl;
    cout << "1. Si" << endl;
    cout << "0. No" << endl;
    cin >> beca;
    if (inscripcion > 0 || beca == 1)
    {
        cout << "Bienvenido a univerisdad mesoamericana";
    } else {
        cout << "Complete su inscripcion por favor";
    }

    return 0;
    
}


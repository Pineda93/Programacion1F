#include <iostream>
using namespace std;

int main(){
    int condicion;
    bool resultado;
    cout << "S o N: ";
    cin >> condicion;

    if (condicion = "s")
    {
        resultado = true;
        cout << "S es: ";
        cout << resultado;
    }
    else if (condicion = "n")
    {
        resultado = false;
        cout << "N es: " << resultado;
    }
    else
    {
        cout << "Lo Siento, porfavor ingresa una de las 2 opciones";
    }

    return 0;
    



}
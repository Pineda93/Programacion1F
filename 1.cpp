#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int numero1; //Creamos una variable del primer número
    int numero2; //Segunda variable
    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    int resultado;
    resultado = numero1 - numero2;
    if (resultado < 0)
    {
        cout << "El Resultado es Negativo";
    }
    else
    {
        cout << "El Resultado es Positivo";
    }
    return 0;
}
#include <iostream>
using namespace std;

int main(int argc, char *argv[]){

    int numeros[5];

    cout <<"Ingresa los numeros \n";

    for (int i = 0; i < 5; i++){
        cout << "Ingrese un numero en la posicion " << i << endl;
        cin >> numeros[i];
    }
    for (int i = 0; i < 5; i++){
        cout << "Numero Ingresado en la posicion " << i << ": " << numeros[i] << endl;
    }
    
    return 0;
}
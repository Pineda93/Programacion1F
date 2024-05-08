#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    const int t = 5;
    int numero[t];

    cout <<"Ingresa los numeros \n";

    for (int i = 0; i < t; i++){
        cout << "Ingrese un numero en la posicion " << i << endl;
        cin >> numero[i];
    }
    for (int i = 0; i < 5; i++){
        cout << "Numero Ingresado en la posicion " << i << ": " << numero[i] << endl;
    }
    
    return 0;
}
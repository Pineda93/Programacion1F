#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int numeros[5];

    cout <<"Ingresa los numeros \n";

    for (int i = 1; i < 6; i++){
        cout << "Ingrese un numero en la posicion " << i << endl;
        cin >> numeros[i];
    }

    if (numeros[1] > numeros[2] && numeros[1] > numeros[3] && numeros[1] > numeros[4] && numeros[1] > numeros[5])
    {
        cout << "El Numero Mayor es: " << numeros[1] << endl;
    }
    else if (numeros[2] > numeros[1] && numeros[2] > numeros[3] && numeros[2] > numeros[4] && numeros[2] > numeros[5])
    {
        cout << "El Numero Mayor es: " << numeros[2] << endl;
    }
    else if (numeros[3] > numeros[1] && numeros[3] > numeros[2] && numeros[3] > numeros[4] && numeros[3] > numeros[5])
    {
        cout << "El Numero Mayor es: " << numeros[3] << endl;
    }
    else if (numeros[4] > numeros[1] && numeros[4] > numeros[2] && numeros[4] > numeros[3] && numeros[4] > numeros[5])
    {
        cout << "El Numero Mayor es: " << numeros[4] << endl;
    }
    else if (numeros[5] > numeros[1] && numeros[5] > numeros[2] && numeros[5] > numeros[3] && numeros[5] > numeros[4])
    {
        cout << "El Numero Mayor es: " << numeros[5] << endl;
    }
    return 0;
}
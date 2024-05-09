#include <iostream>
using namespace std;

int main(int argc, char *argv[]){

    double numeros[5];

    cout <<"Ingresa los numeros \n";

    for (int i = 1; i < 6; i++){
        cout << "Ingrese un numero en la posicion " << i << endl;
        cin >> numeros[i];
    }
    cout << "Su promedio es: " << (numeros[1] + numeros[2] + numeros[3] + numeros[4] + numeros[5])/5 << endl;

    return 0;
}
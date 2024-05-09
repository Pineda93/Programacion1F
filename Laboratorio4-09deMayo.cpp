#include <iostream>
using namespace std;

int main(int argc, char *argv[]){

    int numeros[10];
    int n1;

    cout <<"Ingresa los numeros \n";

    for (int i = 1; i <= 10; i++){
        cout << "Ingrese un numero en la posicion " << i << endl;
        cin >> numeros[i];
    }
    cout << "Ingrese un numero: " << endl;
    cin >> n1;
    if (n1 == numeros[1]||n1 == numeros[2]||n1 == numeros[3]||n1 == numeros[4]||n1 == numeros[5]||n1 == numeros[6]||n1 == numeros[7]||n1 == numeros[8]||n1 == numeros[9]||n1 == numeros[10])
    {
        cout << "Felicidades, padrino." << endl;
    }
    else
    {
        cout << "Mala Suerte, vuelva pronto :)" << endl;
    }
    
    
    return 0;
}
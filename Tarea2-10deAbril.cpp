#include <iostream>
#include <string>
using namespace std;

void multiplos(int n1){
        for (int i = 0, r1; i < 100; i++){
                if (n1 % i == 0)
                {
                    cout << "Multiplo: " << i << endl;
                }
        }
}
void factorial(int n1){
    int r1;
        for (int n2 = 1; n2 <= n1; n2++){
            r1 *= n2;
        }
        return factorial;
}
void caso3(int n1){
    int a = 0, b = 1;
    cout << "La Serie Fibonacci de " << n1 << " es:" << endl;
    for (int i = 0; i < n1; ++i) {
        cout << a << " " << endl;
        int numeros = a + b;
        a = b;
        b = numeros;
    }
}
int main(){
    int n1, a;
    cout <<"Ingrese un numero: ";
    cin >> n1;
    cout <<"Selecciona una accion: \n1. Multiplos \n2. Factorial \n3. Fibonacci \n";
    cin >> a;
    switch (a)
    {
    case 1:
        multiplos(n1);
        break;
    case 2:
        cout << "El factorial es " << (n1) << endl;
        break;
    case 3:
        caso3(n1);
        break;

    default:
    cout <<"Porfavor, eliga una opcion valida" << endl;
        break;
    }
    return 0;
}
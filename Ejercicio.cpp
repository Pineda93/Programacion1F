#include <iostream>
using namespace std;

int global = 6;

void mostrarMensaje(int numero){
    int valor = 0;
    cout << "Valor: " << valor << endl;
    cout << "Numero: " << numero << endl;
    cout << "Global: " << global << endl;
    global = global + 10;
}
int main(int argc, char *argv[]){
    int numero = 3;
    mostrarMensaje(numero);
    cout << "Numero: " << numero << endl;
    cout << 


}
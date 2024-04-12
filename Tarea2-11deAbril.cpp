#include <iostream>
#include <cstdlib>
using namespace std;
void menu(int n1){
    int n2;
    string n3;
    char n4;
    switch (n1)
    {
    case 1:
        cout <<"Ingrese un Numero: " << endl;
        cin >> n2;
        cout << "Su numero es: " << n2;
        break;
    case 2:
        cout <<"Ingrese una Palabra: " << endl;
        cin >> n3;
        cout << "Su palabra es: " << n3;
        break;
    case 3:
        cout <<"Ingrese una Letra: " << endl;
        cin >> n4;
        cout << "Su letra es: " << n4;
        break;
    default:
        cout <<"Ingrese una opcion valida";
        break;
    }
}

void mostrarMensaje(){
    system("cls");
    cout << "Eliga una opcion: \n1. Imprima un Numero \n2. Imprima una Palabra \n3. Imprima una Letra" << endl;
    }
int main(int argc, char *argv[]){
    int n1, control = 1;
    do
    {
        mostrarMensaje();
        cin >> n1;
        menu(n1);
        cout << endl << "Desea continuar? \n1. Si \n2. No \n";
        cin >> control;
        if (control != 1 && control != 2) {
			control == 1;
			cout << "Por favor siga instrucciones";
		}
    } while (control == 1);
    return 0;
}
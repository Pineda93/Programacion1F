#include <iostream>
using namespace std;
void menu(int n1){
    if (n1 == 1){
        cout << "Hola, Como Vas?";
    }
    if (n1 == 2){
        cout << "Hace tiempo no se de ti";
    }
    if (n1 == 3){
        cout << "Sabias que las abejas mueren despues de perder su aguijon?";
    }
    if (n1 == 4)
    {
        cout << "Vas a ganar todos tus cursos";
    }
    if (n1 == 5)
    {
        cout << "Abrazo :D";
    }
}

void mostrarMensaje(){
    system("cls");
    cout << "Eliga una opcion del 1 al 5" << endl;
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
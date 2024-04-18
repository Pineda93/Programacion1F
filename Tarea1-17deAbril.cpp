#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

void mostrarMensaje(){
    system("cls");
    cout << "Eliga una opcion: \n1. Menu 1 \n2. Menu 2 \n";
    }
void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void menu2(int n5){
    cout <<"Eliga una opcion \n1. Imprimir caracter Ascii \n2. Saluda \n3. Regresar al menu inicial \n";
    cin >> n5;
    switch (n5)
    {
    case 1:{
        int coordx3=30, coordy3=30;
        char n6 = '%';
        gotoxy(coordx3, coordy3);
        cout <<n6;
    }break;
    case 2:{
        cout << "Hola Roman";
    }break;
    case 3:{
        int n7;
        mostrarMensaje();
        cin >> n7;
    }break;
    default:{
    }break;
    }
}
void menu1(int n1){
    int n3;
    string n4;
    cout << "Eliga una opcion: \n1. Donde desea ubicar el texto? \n2. Imprima un numero \n3. Ingrese una palabra \n4. Regresar al menu"<< endl;
    cin >> n1;
    switch (n1)
    {
    case 1:
        int coordx, coordy;
	cout << "Por favor ingresa una coordenada en x" << endl;
	cin >> coordx;
	cout << "Por favor ingresa una coordenada en y" << endl;
	cin >> coordy;
	
	gotoxy(coordx, coordy);
	cout << "Hola mundo desde gotoxy";
        break;
    case 2: {
        int coordx1=25, coordy1=25;
        cout <<"Ingrese un Numero: " << endl;
        cin >> n3;
        gotoxy(coordx1, coordy1);
	    cout << n3;
        }break;
    case 3:{
        int coordx2=1, coordy2=1;
        cout <<"Ingrese una Palabra: " << endl;
        cin >> n4;
        do
        {
            coordx2++;
            coordy2++;
            gotoxy(coordx2, coordy2);
	    cout << n4;
        } while (coordx2<=10 && coordy2<=10);
    }break;
    case 4:{
        mostrarMensaje();
    }break;
    default:{
        cout <<"Ingrese una opcion valida";
     } break;
    }
}
int main(int argc, char *argv[]){
    int n7, control = 1;
    do
    {
        mostrarMensaje();
        cin >> n7;
        switch (n7)
        {
        case 1:{
            int n1=0;
            menu1(n1);
        }break;
        case 2:{
            int n5=0;
            menu2(n5);
        }
        default:{
        cout << "Por favor siga instrucciones";
        }break;
        }


        cout << endl << "Desea continuar? \n1. Si \n2. No \n";
        cin >> control;
        if (control != 1 && control != 2) {
			control == 1;
			cout << "Por favor siga instrucciones";
		}
    } while (control == 1);
    return 0;
}
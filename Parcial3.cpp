#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Gametags(){
    string tag1, tag2;
    int c1, c2;
    system("cls");
    cout << "-----Gametags-----" << endl;
    cout << "Primer Jugador: " << endl;
    cin >> tag1;
    cout << "Segundo Jugador: " << endl;
    cin >> tag2;

    system("cls");
    cout << "-----Gametags-----" << endl;
    cout << "Primer Jugador " << tag1 << " = X" << endl;
    cout << "Segundo Jugador " << tag2 << " = O" << endl;
    cout << "\nDesea Continuar? " << endl;
    cout << "1. Si " << endl;
    cout << "2. No " << endl;
    cin >> c1;
    if (c1 == 1){
        system("cls");
        int d1 = 1 + rand() % 4;
        if (d1 % 2 == 0){
        cout << "Empieza " << tag1 << endl;
        }
        else{
        cout << "Empieza " << tag2 << endl;
        }
        cout << "Iniciar Partida" << endl;
        cout << "1. Si" << endl;
        cout << "2. No" << endl;
        cin >> c2;
            if (c2 == 1){
                
            system("cls");
            cout << "--Tablero--" << endl;
            cout << " 1 | 2 | 3 " << endl;
            cout << "-----------" << endl;
            cout << " 4 | 5 | 6 " << endl;
            cout << "-----------" << endl;
            cout << " 7 | 8 | 9 " << endl;
            cout << "Turno de " << tag1 << endl;;
            }
            else
            {
                cout << "Ni modo";
            }
    }
    else
    {
        cout << "Vuelva Pronto" << endl;
    }
}
void Menu1(){
    system("cls");
    cout << "-Bienvenido a Totito-"<< endl;
    cout << "---Para 2 jugadores--\n" << endl;
    cout << "1. Jugar" << endl;
    cout << "2. Salir del Juego" << endl;
    }
int main(int argc, char *argv[]){
    int c1;
    srand(time(0));
    do
    {
        int n1;
        Menu1();
        cin >> n1;
        switch (n1)
        {
        case 1:{
            Gametags();
        }break;
        
        default:
            cout << "Nunca funco" << endl;
            break;
        }
    } while (c1 == 1);
    return 0;
}
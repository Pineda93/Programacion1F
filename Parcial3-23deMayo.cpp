#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int Tamanio = 3;
string tag1, tag2;

void NuevoTablero(char Tablero[Tamanio][Tamanio]) {
    for (int i = 0; i < Tamanio; i++) {
        for (int j = 0; j < Tamanio; j++) {
            Tablero[i][j] = ' ';
        }
    }
}

void MosTablero(const char Tablero[Tamanio][Tamanio]) {
    for (int i = 0; i < Tamanio; i++) {
        for (int j = 0; j < Tamanio; j++) {
            cout << Tablero[i][j];
            if (j < Tamanio - 1) cout << " | ";
        }
        cout << endl;
        if (i < Tamanio - 1) cout << "---------" << endl;
    }
}

char Revision(const char Tablero[Tamanio][Tamanio]) {
    for (int i = 0; i < Tamanio; i++) {
        if (Tablero[i][0] == Tablero[i][1] && Tablero[i][1] == Tablero[i][2] && Tablero[i][0] != ' ')
            return Tablero[i][0];
        if (Tablero[0][i] == Tablero[1][i] && Tablero[1][i] == Tablero[2][i] && Tablero[0][i] != ' ')
            return Tablero[0][i];
    }
    if (Tablero[0][0] == Tablero[1][1] && Tablero[1][1] == Tablero[2][2] && Tablero[0][0] != ' ')
        return Tablero[0][0];
    if (Tablero[0][2] == Tablero[1][1] && Tablero[1][1] == Tablero[2][0] && Tablero[0][2] != ' ')
        return Tablero[0][2];
    return ' ';
}

bool TableroMax(const char Tablero[Tamanio][Tamanio]) {
    for (int i = 0; i < Tamanio; i++) {
        for (int j = 0; j < Tamanio; j++) {
            if (Tablero[i][j] == ' ')
                return false;
        }
    }
    return true;
}

void Menu1() {
    system("cls");
    cout << "-Bienvenido a Totito-" << endl;
    cout << "---Para 2 jugadores--\n" << endl;
    cout << "1. Jugar" << endl;
    cout << "2. Salir del Juego" << endl;
}

void Gametags(char& simboloInicio) {
    int c1;
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

    int d1 = rand() % 2;
    if (d1 == 0) {
        cout << "Empieza " << tag1 << endl;
        simboloInicio = 'X';
    } else {
        cout << "Empieza " << tag2 << endl;
        simboloInicio = 'O';
    }

    cout << "Iniciar Partida" << endl;
    cout << "1. Si" << endl;
    cout << "2. No" << endl;
    cin >> c1;
    if (c1 == 2) {
        cout << "Vuelva Pronto, Gustazo de Saludarle" << endl;
        exit(0);
    }
}

void playGame(char simboloInicio) {
    char Tablero[Tamanio][Tamanio];
    char simbolo = simboloInicio;
    bool fail = false;

    NuevoTablero(Tablero);

    while (!fail) {
        system("cls");
        MosTablero(Tablero);

        int fila, columna;
        cout << "Jugador " << ((simbolo == 'X') ? tag1 : tag2) << " (" << simbolo << "), ingresa la fila y columna (1, 2, 3): \n";
        cout << "Fila: ";
        cin >> fila;
        cout << "Columna: ";
        cin >> columna;
        fila--;
        columna--;

        if (cin.fail() || fila < 0 || fila >= Tamanio || columna < 0 || columna >= Tamanio || Tablero[fila][columna] != ' ') {
            cout << "Asi no. Hazlo again." << endl;
            continue;
        }

        Tablero[fila][columna] = simbolo;
        char g1 = Revision(Tablero);
        if (g1 != ' ') {
            system("cls");
            MosTablero(Tablero);
            cout << "Se la rifo " << ((g1 == 'X') ? tag1 : tag2) << endl;
            fail = true;
        } else if (TableroMax(Tablero)) {
            system("cls");
            MosTablero(Tablero);
            cout << "Quedaron Tablas" << endl;
            fail = true;
        } else {
            simbolo = (simbolo == 'X') ? 'O' : 'X';
        }
    }
    int menu2;
    cout << "\nElige una opción: \n";
    cout << "1. Regresar al menú principal\n";
    cout << "2. Salir del juego\n";
    cin >> menu2;

    if (menu2 == 1) {
        system("cls");
    } else {
        cout << "Buena onda por jugar, Mesho" << endl;
        exit(0);
    }
}

int main() {
    srand(time(0));
    int n1;

    do {
        Menu1();
        cin >> n1;

        switch (n1) {
        case 1: {
            char simboloInicio;
            Gametags(simboloInicio);
            playGame(simboloInicio);
            break;
        }
        case 2:
            cout << "Gracias por participar" << endl;
            return 0;
        default:
            cout << "Por favor, ingresa una opción válida" << endl;
            break;
        }
    } while (n1 != 2);
    return 0;
}

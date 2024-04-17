#include <IOSTREAM>
#include <WINDOWS.H>
using namespace std;

VOID GOTOXY(int X, int Y) {
COORD COORD;
COORD.X = X;
COORD.Y = Y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),
COORD);
}
int main() {
cout << "POSICIONANDO EL CURSOR EN (5, 5)" << endl;
GOTOXY(5, 5);
cout << "HOLA, MUNDO!" << endl;
return 0;
}
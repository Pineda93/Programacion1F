#include <iostream>
#include <windows.H>
#include <cstdlib>
#include <string>
using namespace std;
int ex, y = 0;
void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void menu1() {

	int cx, cy, numero;
	string primermenu;
	cout << "Menu #1" << endl;
	cout << "1. Si quieres ver un holi mundo " << endl;
	cout << "2. Poner cualquier numero " << endl;
	cout << "3. Poner en lugares random tu palabra, va a estar bello " << endl;
	cin >> ex;
	switch (ex) {
	case 1:
		system("cls");
		cout << "ingrese las coordenadas en X: ";
		cin >> cx;
		cout << "ingrese las coordenadas en Y: ";
		cin >> cy;
		gotoxy(cx, cy);
		cout << "Holi Mundo" << endl;
		break;
	case  2:
		cout << "Pon un numerillo: ";
		cin >> numero;
		gotoxy(60, 40);
		cout << numero << endl;
		break;
	case 3:
		cout << "Pon cualquier palabra: " << endl;
		cin >> primermenu;
		for (int c = 1; c <= 10; c++) {
			cx = rand() % 100;
			cy = rand() % 30;
			gotoxy(cx, cy);
			cout << primermenu << endl;
		}
		break;

	default:
		cout << "Pone algo valido pls " << endl;
		break;

	}

}
void menu2() {
	int compañere;

	cout << "Menu #2" << endl;
	cout << "1. Un caracter Ascii curseado " << endl;
	cout << "2. Saludar a un amiguito de la clase " << endl;
	cin >> ex;
	switch (ex) {
	case 1:
		gotoxy(30, 30);
		cout << char(12) << endl;
		break;
	case 2:
		cout << "A quien saludamos ";
		cin >> compañere;
		cout << "Que onda jefazo," << compañere << " love u " << endl;
		break;
	default:

		break;
	}
}
int main() {
	int i;

	cout << "Elige un menu " << endl;
	cout << "1. Menu 1" << endl;
	cout << "2. Menu 2" << endl;
	cin >> i;

	do {
		if (i == 1) {
			system("cls");
			menu1();
		}
		else {
			system("cls");
			menu2();
		}

		cout << "Ocupas repetir o no? " << endl;
		cout << "1. Simon" << endl;
		cout << "2. Nopi" << endl;
		cin >> y;
		if (y == 1) {
			i = 0;

			cout << "Elige un menu " << endl;
			cout << "1. Menu 1" << endl;
			cout << "2. Menu 2" << endl;
			cin >> i;
		}
	} while (y == 1);
	cout << "chao jefe" << endl;

	return 0;
}
#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
int n1 = 0, n4=1;
float n2, n3;
do
{
    cout <<"---------Calculadora--------- \n";
    cout <<"Que operacion desea realizar? \n";
    cout <<"1. Suma \n";
    cout <<"2. Resta \n";
    cout <<"3. Multiplicacion \n";
    cout <<"4. Division \n";
    cin >> n1;
    switch (n1)
    {
    case 1:
        cout <<"Ingrese el primer numero: ";
        cin >> n2;
        cout <<"Ingrese el segundo numero: ";
        cin >> n3;
        cout << "Resultado: " << n2 + n3 << endl;
        break;
    case 2:
        cout <<"Ingrese el primer numero: ";
        cin >> n2;
        cout <<"Ingrese el segundo numero: ";
        cin >> n3;
        cout << "Resultado: " << n2 - n3 << endl;
        break;
    case 3:
        cout <<"Ingrese el primer numero: ";
        cin >> n2;
        cout <<"Ingrese el segundo numero: ";
        cin >> n3;
        cout << "Resultado: " << n2 * n3 << endl;
        break;
    case 4:
        cout <<"Ingrese el primer numero: ";
        cin >> n2;
        cout <<"Ingrese el segundo numero: ";
        cin >> n3;
        cout << "Resultado: " << n2 / n3 << endl;
        break;
    default:
        cout << "Ingrese una operacion valida"<< endl;
        break;
    }
    cout << "------------------------------ \n";
    cout << "Desea realizar otra operacion? \n1. Si \n2. No \n";
    cin >> n4;
} while (n4==1);
cout << "Que le vaya bien, vuelva pronto <3";
return 0;
}
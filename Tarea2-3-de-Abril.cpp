#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int n1 = 0;
    cout <<"Ingrese el numero de semestre: ";
    cin >> n1;
    switch (n1)
    {
    case 1:
        cout << "Area Comun";
        break;
    case 2:
    cout << "No nos encontramos en este semestre";
    break;
    case 3:
    cout << "Area Comun";
    break;
    case 4:
    cout << "No nos encontramos en este semestre";
    break;
    case 5:
    cout << "Area Especifica";
    break;
    case 6:
    cout << "No nos encontramos en este semestre";
    break;
    case 7:
    cout << "Area Especifica";
    break;
    default:
    cout << "Ingrese otro numero";
        break;
    }
return 0;
}
#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int n = 1, c;
    cout << "Serie de Fibonacci" << endl;
    cout << "Ingrese el limite: ";
    cin >> c;
    for (int i = 0; n < c; c++)
    {
        n= n + i;
        i= i + n;
        cout << "Es: " << n << endl << "Es: " << i << endl;
    }
return 0;
}
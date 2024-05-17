#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
int c, n; 
double s, m;
cout << "Contraseña numerica: ";
cin >> c;
cout << "Ingrese un numero: ";
cin >> n;
s= n + c;
m= s * n;
 cout<<"Contraseña cifrada: "<<m;
return 0;
}
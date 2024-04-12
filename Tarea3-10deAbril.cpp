#include <iostream>
using namespace std;
double suma(double n1, double n2, double n3){
    return n1 + n2 + n3;
}
int main(){
    double n1, n2, n3;
    cout << "Ingrese el primer numero: " << endl;
    cin >> n1;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> n2;
    cout << "Ingrese el tercer numero: " << endl;
    cin >> n3;
    double r1=suma(n1, n2, n3);
    cout << "La suma es: " << r1;
    return 0;
}

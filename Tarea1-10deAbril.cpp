#include <iostream>
#include <string>
using namespace std;
string palabras(string n1, string n2){
    return n1 + ' ' + n2;
}
int main(){
    string n1, n2;
    cout << "Ingrese la palabra No. 1: " << endl;
    cin >> n1;
    cout << "Ingrese la palabra No. 2: " << endl;
    cin >> n2;
    string r1=palabras(n1, n2);
    cout <<"Unido es: " << r1;
    
    return 0;
}
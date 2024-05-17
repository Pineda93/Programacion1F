#include <iostream>
#include <string>

using namespace std;

string cifrar(const string & cadena) {
    string resultado = cadena;
    int longitud = resultado.length();

for (int i = 0; i < longitud; i++){
char caracter = resultado[i];
if(caracter == 'i' || caracter == 'I'){
resultado[i] = '1';
}
if(caracter == 'e' || caracter == 'E'){
resultado[i] = '3';
}
if(caracter == 'a' || caracter == 'A'){
resultado[i] = '4';
}
if(caracter == 'o' || caracter == 'O'){
resultado[i] = '0';
}
if(caracter == 'u' || caracter == 'U'){
resultado[i] = '*';
}

}

return resultado;
}

int main(int argc, char *argv[]) {
string frase, fraseC;
cout << "Ingrese una frase: ";

getline(cin, frase);
fraseC = cifrar(frase);
cout << endl << "Frase cifrada: " << fraseC;
return 0;
}
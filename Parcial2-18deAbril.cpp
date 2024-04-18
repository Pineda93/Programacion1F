#include <iostream>
#include <cmath>
using namespace std;
void calcu4(double r21, double r22, double r23){
    cout <<"Ingrese la cantidad pagada: " << endl;
    cin >> r21;
    cout <<"Ingrese la cantidad gastada: "<< endl;
    cin >> r22;
    if (r21 > r22)
    {
        r23 = r21 - r22;
        cout <<"Su cambio es de: " << r23 << endl;
    }
    else if (r21 == r22)
    {
        cout <<"No hay cambio, esta cabal"<< endl;
    }
    else if (r21 < r22)
    {
        r23 = r22 - r21;
        cout <<"Le hace falta: " << r23 << endl;
    }
}
void calcu3(int r11, int r12=1){
    cout << "Ingrese un Numero: ";
    cin >> r11;
        for (int num2 = 1; num2 <= r11; num2++){
            r12 *= num2;
        }
        cout << "El resultado es: " << r12 << endl;
        
}
void calcu2(double r4, double r5, double r6){
    cout <<"Ingrese Grado No. 1: " << endl;
    cin >> r4;
    cout <<"Ingrese Grado No. 2: " << endl;
    cin >> r5;
    r6= 180-(r4+r5);
    cout << "La hipotenusa es: " << r6 << endl;
}
void calcu1(double r1, double r2, double r3){
    cout <<"Ingrese Cateto No. 1: " << endl;
    cin >> r1;
    cout <<"Ingrese Cateto No. 2: " << endl;
    cin >> r2;
    r3= sqrt(r1*r1+r2*r2);
    cout << "La hipotenusa es: " << r3 << endl;
}
void mostrarMensaje(){
    system("cls");
    cout << "Eliga una opcion: \n1. Calculadora de la hipotenusa de un triangulo" << endl;
    cout << "2. Calculadora del angulo faltante de un triangulo" << endl;
    cout << "3. Calculadora Factorial de un Numero" << endl;
    cout << "4. Calculadora de Vuelto" << endl;
    }

int main(int argc, char *argv[]){
    int control = 1;

    do
    {
        int n1;
        mostrarMensaje();
        cin >> n1;
        switch (n1)
        {
        case 1:{
            double r1, r2, r3;
            calcu1(r1, r2, r3);
        }break;
        case 2:{
            double r4, r5, r6;
            calcu2(r4, r5, r6);
        }break;
        case 3:{
            int r11, r12=1;
            calcu3(r11, r12);
        }break;
        case 4:{
            double r21, r22, r23;
            calcu4(r21, r22, r23);
        }break;
        default:
            break;
        }
        cout << endl << "Desea continuar? \n1. Si \n2. No \n";
        cin >> control;
        if (control != 1 && control != 2) {
			control == 1;
			cout << "Por favor siga instrucciones";
		}
    } while (control == 1);
    
    return 0;
}
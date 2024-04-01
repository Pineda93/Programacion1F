#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    cout << "Estoy vivo?\n1. Si\n2. No\n";
    int vivo;
    int mudar;
    int lugar1;
    int lugar2;
    int trabajo1;
    char ZonaRural;
    char Ciudad;

    cin >> vivo;
    if (vivo == 1)
    {
        cout << "Si esta vivo\nSe quiere mudar?\n1. Si. \n2. No\n";
        cin >> mudar;
        if (mudar == 1)
        {
            cout << "Quiere vivir en? \n1. Apartamento \n2. Casa\n";
            cin >> lugar1;

            if (lugar1 == Apartamento)
            {
                cout << "Quiere vivir en un Apartamento en? \n1. Zona Rural \n2. Ciudad\n";
                cin >> lugar2;
                if (lugar2 == 1)
                {
                    cout << "Usted actualmente trabaja? \n1. Si\n2. No\n";
                    cin >> trabajo1;
                    if (trabajo1 == 1)
                    {
                        cout << ""
                    }    
                }
                
            }   
            else
            {
                cout << "Piense en donde desea vivir";
            }
            if (lugar1 == 2)
            {
                cout << "Quiere vivir en un Apartamento en? \n1. Zona Rural \n2. Ciudad\n";
                cin >> lugar2;
                if (lugar2 == 2)
                {
                    cout << "Usted actualmente trabaja?";
                    cin >> trabajo1;
                }
                
            }
            else
            {
                cout << "Piense en donde desea vivir";
            }
        }
        else
        {
            cout << "Siga viviendo en el mismo lugar";
        }
        
        
        
    }
    else
    {
        cout << "No esta vivo, siga durmiendo";
    }


    return 0;
}
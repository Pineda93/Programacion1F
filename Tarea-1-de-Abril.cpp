#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int n = 1;
    cout << "Serie de Fibonacci" << endl;
    for (int i = 0; i < 40;)
    {
        n= n + i;
        i= i + n;
        cout << "Es: " << n << endl << "Es: " << i << endl;
    }
return 0;
}
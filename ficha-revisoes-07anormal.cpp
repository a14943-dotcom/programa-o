#include <iostream>


using namespace std;


int main() {

    float resultado,resultado2,resultado3;
    int x,y;
    float z, xf;

    cout << "Diga me um numero inteiro. ";
    cin >> x;
    cout << "Diga me um numero inteiro. ";
    cin >> y;
    cout << "Diga me um numero real. ";
    cin >> z;

     xf=x;
     resultado = (y*2) * (xf/2);

     cout << "Resultado nº1: "<< resultado <<endl;

     resultado2 = (3*z + x);

     cout << "Resultado nº2: " << resultado2 << endl;

     resultado3 = (z*z*z);

     cout << "Resultado nº3: " << resultado3 << endl;

    return 0;
}




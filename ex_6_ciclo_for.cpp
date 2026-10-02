#include <iostream>

using namespace std;

int main() {

    int contador = 0;

    cout << " Numeros entre 1 e 10 \n";
    for (int i=1; i<=10; i++) {
        cout << i << endl;
    }
        cout << " Numero impares entre 1 e 5 \n";
       for (int i=1; i<=10; i = i + 2) {
        cout << i << endl;
        if ( i >=5) break;
    }

    return 0;
}

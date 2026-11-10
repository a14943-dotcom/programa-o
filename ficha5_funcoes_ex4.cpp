#include <iostream>
#include <string>

using namespace std;

string pedeNome() {

    string Pnome , Snome;

    cout << "Qual o seu primeiro nome? ";
    cin >> Pnome;
    cout << "Qual o seu segundo nome? ";
    cin >> Snome;

    return Pnome + " " + Snome;
}

int main () {

    /*string nome =*/ pedeNome();

    cout << "O seu nome e: " << pedeNome();

    return 0;
}




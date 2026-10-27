#include <iostream>

using namespace std;

int getYear() { return 2026;}
int getMonth () { return 10 ;}
int getDay () { return 27 ;}

int aMinhaIdade (int ano, int mes, int dia) {
    int aux = getYear() - ano;

    if (getMonth() < mes) {
        aux --;
    } else {
        if (getDay () < dia && getMonth () == mes) {
            aux--;
        }
    }
    return aux;
}

void menu () {

    cout << "Menu: \n";
    cout << "1- Dar o ano: \n";
    cout << "2- Sair do programa: \n";
    cout << "R: ";
}

int main () {

    int ano, op1;

    cout << "A tua idade = " << aMinhaIdade(2010, 7, 28) << " anos\n";

    do{
        menu();
        cin >>op1;

        if (op1 == 1) {
            ano = getYear();
            cout << ano <<endl;

        }else if (op1 == 2) {
            cout << "Saiste do Programa!";
        }

    }while (op1 !=2);

    return 0;
}

#include <iostream>
#include <stdio.h>

//Desenvolva o algoritmo de um programa que faz a leitura de dez números inteiros e apresenta como resultado a soma dos quadrados dos dez valores lidos.


using namespace std;

int main () {

    int n = 10;

    int algoritmo[n], soma = 0;

    cout << "Preciso que me digas 10 numeros"<< endl;

    for (int i = 0; i < n; i++) {
        cout << "Numero "<< i + 1 << ": ";
        cin >> algoritmo[n];
        soma = soma + algoritmo[n] * algoritmo[n];
    }
    cout << "Resultado: " << soma;

    return 0;
}

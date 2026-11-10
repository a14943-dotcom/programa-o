#include <iostream>
#include <string.h>

//Desenvolva o algoritmo de um programa que faz a soma de vários números.
//No inicio, o programa deve perguntar ao utilizador quantos números vão ser somados,
//só depois deve ser pedido ao utilizador para inserir os números a somar. No final deve ser apresentado o resultado da soma


using namespace std;

int main () {

    int n = 21;
    int soma = 0;
    char algoritmo[n];


    cout << "Preciso que me digas quantos numeros queres somar (Max. 20 numeros). ";
    cin >> algoritmo[n];

    for (int i = 0; i < n; i++) {
        cout << "Numero "<< i + 1 << ": ";
        cin >> algoritmo[n];
        soma = algoritmo[n] + algoritmo[n];
        cout << "Resultado: " << soma;
    }
    return 0;
}


#include <iostream>

using namespace std;

int main() {

    int peso;
    int acelaracao;

    cout << "Diga um numero para ser o peso. ";
    cin >> peso;
    cout << "Diga um numero para ser a acelaracao da gravidade. ";
    cin >> acelaracao;

    cout << "Resultado: " << (peso/acelaracao);
}

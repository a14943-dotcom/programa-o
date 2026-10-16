#include <iostream>


using namespace std;


int main() {
    float dinheiro;
    float hrsmes;
    float mes;
    float ano, mesesAno = 12;


    cout << "Quanto ganhas por hora? -> ";
        cin >> dinheiro;
    cout << "Quantas horas trabalhas por mes? -> ";
        cin >> hrsmes;


        mes = dinheiro*hrsmes;
        ano = mes*mesesAno;


    cout << "\nRecebes: " << dinheiro << "$/hora " << hrsmes << "$/mes " << mes << "$/mes " << ano << "$/ano";

    return 0;
}

#include <iostream>


using namespace std;


int main() {

    float farenheit;
    float celsius;

    cout << "Diga uma temperatura em Celsius para ser transformado em Farenheit. ";
    cin >> celsius;

    farenheit = ((celsius*9/5) + 32);

    cout << farenheit << " ºF";

    return 0;
}



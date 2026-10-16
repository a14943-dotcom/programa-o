#include <iostream>


using namespace std;


int main() {

    float farenheit;
    float celsius;

    cout << "Diga uma temperatura em Farenheit para ser transformado em Celsius. ";
    cin >> farenheit;

    celsius = (5 * (farenheit-32) / 9);

    cout << celsius << " ºC";

    return 0;
}


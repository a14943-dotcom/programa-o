#include <iostream>

using namespace std;

int main() {

    string nome;
    int idade;
    string loc;
    string genero;
    string mensagem;
    mensagem = "Ola";

    cout << "Diga me o seu nome. ";
    cin >> nome;

    cout << "\nDiga me a sua idade. ";
    cin >> idade;

    cout << "\nDiga me a sua localidade. ";
    cin >> loc;

    cout << "\nDiga me o seu genero.(M/F)  ";
    cin >> genero;

    if (genero == "M"){
        mensagem = mensagem + " Caro Sr ";
    }else{
        mensagem = mensagem + " Cara Sra ";
    }
        mensagem = mensagem + nome;

    if (idade >=18 ){
        mensagem = mensagem + " e maior de idade";
    }else {
        mensagem = mensagem + " e menor de idade";
    }
        mensagem = mensagem + " e mora em ";
        mensagem = mensagem + loc;

        cout << mensagem;
}

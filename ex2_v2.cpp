#include <iostream>

using namespace std;

int main() {
    int op;

    for (int i =0; i < 1 ; i=0) {

    cout << "\nEscolha uma das opcoes!\n";
    cout << "Opcao - 0\n";
    cout << "Opcao - 1\n";
    cout << "Opcao - 2\n";
    cout << "Opcao - 3\n";
    cout << "Opcao:";

    cin >> op;

        switch (op) {

        case 0:
            cout << "Sair do programa";
            break;
        case 1:
            cout << "Es bom programador! ";
            break;
        case 2:
            cout << "Es muito bom programador! ";
            break;
        case 3:
            cout << "Es um excelente programador";
            break;
        default:
            cout << "Nao entendo o que estas a pedir";
            break;

        }

        if (op == 0) break;
    }
    return 0;
}

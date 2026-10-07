#include <iostream> //so funciona em c++

using namespace std;

int main() {

    int n1;

    cout<<"Diga um numero.\n";

    cin>>n1;

    if (n1<0) {
            cout<<"Numero Negativo\n";
    }else if (n1==0) {
                cout<<"Numero Neutro\n";
    }else if (n1<100) {
                cout<<"Numero Positivo Pequeno\n";
    }else if (n1>=100) {
                cout <<"Numero Enorme\n";
    }

    return 0;
}



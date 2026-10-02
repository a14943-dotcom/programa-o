#include <iostream> //so funciona em c++

using namespace std;

int main() {
    string op;
    float n1,n2;
    float cal;

    cout<<"Qual opercao queres?\n";
    cout<<"Somar,Subtrair,Multiplicar ou Dividir\n";

    cout<<"Diz qual queres usar:";
    cin>>op;

    cout<< "Diz 1 numero:";
    cin>>n1;
    cout<< "Diz 2 numero :";
    cin>>n2;

    if (op=="Somar") {
        cout<<"Soma= "<<(n1+n2);
    }
       if (op=="Subtrair") {
        cout<<"Subtracao= "<<(n1-n2);
    }
     if (op=="Multiplicar") {
        cout<<"Multiplicao= "<<(n1*n2);
    }
     if (op=="Dividir") {
        cal = (n1)/(n2);
        cout<<"Divicao= "<<cal;

    }


    }



#include <iostream>
#include <fstream>
using namespace std;

int main(){
    float n1, n2, n3;
    char operador;

    cout << "Insira dois números e a operação: " << endl;
    cin >> n1 >> n2 >> operador;

    switch(operador){
        case '+':
            n3=n1+n2;
            break;
        case '-':
            n3=n1-n2;
            break;
        case '*':
            n3=n1*n2;
            break;
        case '/':
            n3=n1/n2;
            break;

    }
    cout << n1 << operador << n2 << "=" << n3 << "\n";

    return 0;
}
#include "corrente.h"

int main(){
    cout << "Conta 1 -> ";
    Corrente conta1;
    conta1.obterDados();

    cout << "Conta 2 -> ";
    Corrente conta2(100, 50);
    conta2.obterDados();

    conta1.mostrarDadosCC();
    conta2.mostrarDadosCC();

    return 0;
}
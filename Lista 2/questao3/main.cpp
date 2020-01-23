#include "conta.h"

int main(){
    cout << "Conta 1 -> ";
    Conta conta1;
    conta1.obterDados();

    cout << "Conta 2 -> ";
    Conta conta2(50);
    conta2.obterDados();

    return 0;
}
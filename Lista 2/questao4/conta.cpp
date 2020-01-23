#include "conta.h"


Conta::Conta(){
    saldo = 2000;
}

Conta::Conta(float s){
    if(saldo>=0){
        saldo = s;
    }else{
        saldo = 0;
    }
}

void Conta::setSaldo(float s){
    saldo = s;
}

float Conta::getSaldo(){
    return saldo;
}

void Conta::fazerDeposito(float d){
    if (d > 0){
        saldo += d;
    }
}

void Conta::fazerSaque(float sq){
    if (sq <= saldo){
        saldo = saldo - sq;
    }else{
        cout << "Saldo insuficiente." << endl;
    }
}

void Conta::obterDados(){
    float temp;
    int n;
    string resp;

    cout << "saldo inicial: R$" <<saldo << endl;
    
    do{
        cout << "Informe a operação desejada:" << endl;
        cout << "(1) Fazer Depósito" << endl << "(2) Fazer Saque" << endl << "(3) Mostrar Saldo" << endl;
        cin >> n;

        switch(n){
        case 1:
            float temp2;
            cout << "Insira o valor a ser depositado: ";
            cin >> temp2; 
            fazerDeposito(temp2);
            break;
        case 2:
            float temp3;
            cout << "Insira o valor a ser sacado: ";
            cin >> temp3; 
            fazerSaque(temp3);
            break;
        case 3:
            mostrarDados();
            break;
        }
        cout << "Realizar outra operação? (s/n)" << endl;
        cin >> resp;
    }while(resp == "s");
}

void Conta::mostrarDados(){
    cout << "O saldo atual da conta é de: R$" << saldo << endl;
}
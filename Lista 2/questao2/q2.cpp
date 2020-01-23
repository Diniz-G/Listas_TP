#include "q2.h"

void Data::setDia(int d){
    dia = d;
}

int Data::getDia(){
    return dia;
}

void Data::setMes(int m){
    if (m >= 1 && m <= 12){
        mes = m;
    }else{
        mes = 01;
    }
}

int Data::getMes(){
    return mes;
}

void Data::setAno(int a){
    ano = a;
}

int Data::getAno(){
    return ano;
}

void Data::obterData(){
    int temp1;
    int temp2;
    int temp3;

    cout << "\nInforme o dia: ";
    cin >> temp1;
    cout << "\nInforme o mês: ";
    cin >> temp2;
    cout << "\nInforme o ano: ";
    cin >> temp3;

    setDia(temp1);
    setMes(temp2);
    setAno(temp3);
}

void Data::mostrarData(){
    cout << "Data: " << getDia() << "/" << getMes() << "/" << getAno() << endl;

}
#include "fatura.h"

void Fatura::obterDados(){
    string temp1;
    string temp2;
    int temp3;
    float temp4;

    cout << "Informe o número de série: ";
    cin >> temp1;
    setSerie(temp1);

    cout << "Insira uma descrição: " << endl;
    cin >> temp2;
    setDesc(temp2);

    cout << "Insira a quantidade de produtos: " << endl;
    cin >> temp3;
    setQuant(temp3);

    cout << "Insira o preço do produto: R$";
    cin >> temp4;
    setPreco(temp4);
}

void Fatura::mostrarDados(){
    cout << "Número de série: " << serie << endl;
    cout << "Descrição:" << endl << desc << endl;
    cout << "Quantidade: " << quant << endl;
    cout << "Preço unitário: " << preco << endl;
    cout << "Fatura total: " << getFaturaTotal() << endl;
}

void Fatura::setSerie(string s){
    serie = s;
}

void Fatura::setDesc(string d){
    desc = d;
}

void Fatura::setQuant(int q){
    if(q>0){
        quant = q;
    }else{
        quant = 0;
    }
}

void Fatura::setPreco(float p){
    if(p>0){
        preco = p;
    }else{
        preco = 0;
    }
}

void Fatura::setFaturaTotal(float ft){
    ft = quant*preco;
}

float Fatura::getFaturaTotal(){
    return ft;
}

Fatura::Fatura(){
    
}
#include "q1.h"

void Aluno::setNome(string n){

    if (n.size() >= 3){
        nome = n;
    }else{
        cout << "Nome inválido." << endl;
    }
}

string Aluno::getNome(){
    return nome;
}

void Aluno::setMedia(float m){
    if (m < 0){
        cout << "Média inválida." << endl;
    }else{
        media = m;
    }
}

float Aluno::getMedia(){
    return media;
}

void Aluno::obterDados(){
    string temp1;
    float temp2;
    int somanotas = 0;
    string temp4;
    int qtdnotas;

    cout << "Insira o nome: " << endl;
    cin >> temp1;
    cout << "Insira a quantidade de notas: " <<  endl;
    cin >> qtdnotas;

    for (int i=0; i < qtdnotas; i++){
        int temp;
        cout << "Insira a " << i+1 << " nota: ";
        cin >> temp;

        somanotas += temp;
    }

    temp2 = somanotas/qtdnotas;
    

    setNome(temp1);
    setMedia(temp2);
}

void Aluno::mostrarDados(){
    cout << "O aluno " << getNome() << " tem média: " << getMedia() << endl;
}


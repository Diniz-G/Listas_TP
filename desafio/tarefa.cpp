#include "tarefa.h"

bool Tarefa::setDescricao(string d){
    if(d!=""){
        descricao = d;
        return 1;
    }else return 0;
}

bool Tarefa::setPrioridade(string p){
    if(p!=""){
        prioridade = p;
        return 1;    
    }else return 0;
}

void Tarefa::setStatus(bool b){
    status = b;
}

string Tarefa::getDescricao(){
    return descricao;
}

string Tarefa::getPrioridade(){
    return prioridade;
}

bool Tarefa::getStatus(){
    return status;
}

void Tarefa::obterTarefa(){
    cout << getDescricao() << endl;
    cout << "Prioridade: " << getPrioridade() << endl;
    if(getStatus() == 1){
        cout << "Finalizado.\n";
    }else cout << "Incompleta.\n";
    cout << "------------------------------------\n";
}
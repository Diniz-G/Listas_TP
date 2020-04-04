#include "lista.h"


bool ordenarPorDescricao(Tarefa a, Tarefa b){
    return a.getDescricao() < b.getDescricao();
}

bool ordenarPorPrioridade(Tarefa a, Tarefa b){
    return a.getPrioridade() < b.getPrioridade();
}

bool ordenarPorStatus(Tarefa a, Tarefa b){
    return a.getStatus() < b.getStatus();
}

void Lista::adicionarTarefa(Tarefa t){
    lista.push_back(t);
}

void Lista::removerTarefa(string d){
    for(int i=0; i<lista.size(); i++){
        if(lista[i].getDescricao() == d){
            lista.erase(lista.begin()+i);
        }
    }
}

void Lista::mudarStatus(string d){
    for(int i=0; i<lista.size(); i++){
        if(lista[i].getDescricao() == d){
            if(lista[i].getStatus() == 1){
                lista[i].setStatus(0);
            }else lista[i].setStatus(1);
        }
    }
}

void Lista::mostrarTarefas(){
    for(int i=0; i<lista.size(); i++){
        lista[i].obterTarefa();
    }
}

void Lista::mostrarTarefasPorDescricao(){
    sort(lista.begin(), lista.end(), ordenarPorDescricao);
    for(int i=0; i<lista.size(); i++){
        lista[i].obterTarefa();
    }
}

void Lista::mostrarTarefasPorPrioridade(){
    sort(lista.begin(), lista.end(), ordenarPorPrioridade);
    for(int i=0; i<lista.size(); i++){
        lista[i].obterTarefa();
    }
}

void Lista::mostrarTarefasPorStatus(){
    sort(lista.begin(), lista.end(), ordenarPorStatus);
    for(int i=0; i<lista.size(); i++){
        lista[i].obterTarefa();
    }
}

int Lista::size(){
    return lista.size();
}
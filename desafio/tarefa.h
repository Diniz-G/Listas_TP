#ifndef TAREFA_H
#define TAREFA_H
#include <iostream>
using namespace std;

class Tarefa{
    protected:
        string descricao;
        string prioridade;
        bool status;
    
    public:
        bool setDescricao(string d);
        bool setPrioridade(string p);
        void setStatus(bool b);
        string getDescricao();
        string getPrioridade();
        bool getStatus(); //finalizada ou n
        void obterTarefa();
};

#endif

#include "lista.h"

int main(){
    Lista lista1;
    int op;
    bool sair = 0;
    char v;

    do{
        Tarefa temp;
        string desc, pr;
        bool stt;

        cout <<  "Informe a sua opção: \n" ;
        cout << "\t1 - Adicionar tarefa \n \
        2 - Mostrar tarefas \n \
        3 - Mostrar tarefas por descrição \n \
        4 - Mostrar tarefas por prioridade \n \
        5 - Mostrar tarefas por status \n \
        6 - Alterar status da tarefa \n \
        7 - Remover tarefa \n \
        8 - Sair \n ";

        cin >> op;

        switch(op){
        case 1: 
            cout << "Insira a descrição:\n";
            cin.ignore();
            getline(cin, desc);
            temp.setDescricao(desc);
            cout << "Insira a Prioridade:\n";
            //cin.ignore();
            cin >> pr;
            temp.setPrioridade(pr);
            cout << "Informe o status (1-finalizado/0-pra fazer)\n";
            //cin.ignore();
            cin >> stt;
            temp.setStatus(stt);
            lista1.adicionarTarefa(temp);
            break;

        case 2: lista1.mostrarTarefas(); break;
        case 3: lista1.mostrarTarefasPorDescricao(); break;
        case 4: lista1.mostrarTarefasPorPrioridade(); break;
        case 5: lista1.mostrarTarefasPorStatus(); break;
        case 6:
            cout << "Para mudar o status, informe a descrição da tarefa: \n";
            cin.ignore();
            getline(cin, desc);
            lista1.mudarStatus(desc);
            break;
        case 7:
            cout << "Para remover a tarefa , informe sua descrição: \n";
            cin.ignore();
            getline(cin, desc);
            lista1.removerTarefa(desc);
            break;
        case 8:
            sair = 1;
            break;
        }
        if(sair != 1){
            cout << "Realizar outra tarefa? (s/n)\n";
            cin >> v;
        }
    }while(v == 's' && sair == 0);

    return 0;
}
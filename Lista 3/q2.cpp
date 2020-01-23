#include <iostream>
#include <vector>
#include <fstream>
#define QTDE 500
using namespace std;

int main(){
    ofstream arquivo;
    arquivo.open("q2.txt");
    cout << "Listando números aleatórios...";
    for(int i=0; i<QTDE; i++){
        arquivo << rand() % 999;
        arquivo << endl;
    }
    arquivo.close();
    return 0;
}
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;

int main(){
    int valor;
    vector<int> vetor;
    ifstream arquivo;

    arquivo.open("q2.txt");

    // o conteúdo de arquivo será lido e atribuído a um inteiro
    while(arquivo >> valor){
        // os valores inteiros serão atribuídos ao vetor
        vetor.push_back(valor);
    }

    // reordenar o vetor em ordem crescente
    // .begin e .end indicam o range de elementos do vetor a ser reordenado
    sort(vetor.begin(), vetor.end());
    
    for(auto elemento:vetor){
        cout << elemento << " ";
    }

    arquivo.close();
    return 0;
}
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main(){
    int valor;
    vector<int> vetor;
    ifstream arquivo;

    arquivo.open("q2.txt");

    while(arquivo >> valor){
        vetor.push_back(valor);
    }

    for(auto elemento:vetor){
        cout << elemento << " ";
    }
    
    arquivo.close();
    return 0;
}
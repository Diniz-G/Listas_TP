#include <iostream>
#include <vector>
using namespace std;

int main(){
    int valor;
    vector<int> vetor;

    cout << "informe valores inteiros: ";

    while(cin>>valor){
        vetor.push_back(valor);
    }

    //copia os valores de cada posição do vetor
    for(auto elemento:vetor){
        cout << elemento << " ";
    }
    cout << endl;
    return 0;
}
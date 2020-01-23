#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream arquivo;
    arquivo.open("input.txt", ios::app);
    if (arquivo.is_open()){
        string texto;
        cout << "Insira o texto desejado no arquivo\n";
        cin >> texto;
        arquivo << endl << texto << endl;
    }
}
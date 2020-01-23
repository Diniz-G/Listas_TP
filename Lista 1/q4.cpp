#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string texto;
    ifstream arquivo;
    arquivo.open("input.txt");
    while(getline(arquivo, texto)){
        cout << texto << endl;
    }
    arquivo.close();
    return 0;
}
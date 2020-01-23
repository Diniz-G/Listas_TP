#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream arquivo;
    arquivo.open("input.txt");
    arquivo<<"Estou adicionando uma linha\nC++ é mais fácil que C.";
    arquivo.close();
    return 0;

}
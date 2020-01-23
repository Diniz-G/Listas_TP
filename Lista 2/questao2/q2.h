#include <iostream>
using namespace std;

class Data{
    private:
        int dia;
        int mes;
        int ano;
    public:
        Data data(int d, int m, int a);

        void setDia(int d);
        int getDia();

        void setMes(int m);
        int getMes();

        void setAno(int a);
        int getAno();

        void obterData();
        void mostrarData();

};
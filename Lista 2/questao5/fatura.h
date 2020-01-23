#ifndef FATUTA_H
#define FATURA_H
#include <iostream>
using namespace std;

class Fatura{
    private:
        string serie;
        string desc;
        int quant;
        float preco;
        float ft;

    public:
        Fatura();
        
        void setSerie(string s);
        string getSerie();

        void setDesc(string d);
        string getDesc();

        void setQuant(int q);
        int getQuant();

        void setPreco(float p);
        float getPreco();

        void setFaturaTotal(float ft);
        float getFaturaTotal();

        void obterDados();
        void mostrarDados();

};

#endif
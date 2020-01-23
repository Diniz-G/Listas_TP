#include <iostream>
using namespace std;

class Conta{
    private:
        float saldo;
        string nome;
    public:
        Conta();
        Conta(float s);

        void setSaldo(float s);
        float getSaldo();

        void fazerDeposito(float d);

        void fazerSaque(float sq);

        void mostrarSaldo(float s);

        void obterDados();
        void mostrarDados();

};
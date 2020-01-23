#include <iostream>
using namespace std;

class Aluno{
    private:
        string nome;
        int nota;
        float media;
        string disciplinas;
    
    public:
        Aluno aluno(string n, float m);

        void setNome(string n);
        string getNome();

        void setMedia(float m);
        float getMedia();

        void obterDados();
        void mostrarDados();
};


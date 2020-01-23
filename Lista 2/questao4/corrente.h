#include <iostream>
#include "conta.h"

class Corrente : public Conta{
  private :
    float limite;
  public:
    Corrente();
    Corrente(float l, float s);

    void mostrarDadosCC();
};
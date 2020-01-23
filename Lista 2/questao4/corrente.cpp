#include "corrente.h"

Corrente::Corrente(){
  limite = 5000;
  saldo = 3000;
}

void Corrente::mostrarDadosCC(){
  cout << "Saldo: R$" << saldo << endl;
  cout << "Limite: R$" << limite << endl;
}
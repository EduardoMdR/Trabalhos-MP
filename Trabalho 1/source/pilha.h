#ifndef PILHA_H
#define PILHA_H
 
#include <cstdlib>
#include <iostream>
 
class bloco{
  public:
    bloco();
    int item;
    bloco * anterior;
};

class pilha{
  private:
    bloco * blocoTopo;
  public:
    pilha(); 
    bool push(int valor);

};
 
#endif // PILHA_H
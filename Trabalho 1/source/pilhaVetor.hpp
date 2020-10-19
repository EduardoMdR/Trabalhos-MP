#ifndef PILHA_H
#define PILHA_H
 
#include <cstdlib>
#include <iostream>

using namespace std;

#define SIZE 10
#define ItemType int
 
class PilhaVetor{
  private:
    ItemType num[SIZE];  // defini o tamanho padao da pilha como 10
    int top;
    // PilhaVetor * anterior;
  public:
    PilhaVetor();    //defualt constructor
    ItemType push(ItemType);
    ItemType pop();
    bool isEmpty();
    bool isFull();
    ItemType topo();
    int tamanho();
    // int setSize();
    void displayItems();
    ~PilhaVetor();
};
 
#endif // PILHA_H
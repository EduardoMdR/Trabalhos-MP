#ifndef PILHA_H
#define PILHA_H
 
#include <cstdlib>
#include <iostream>

#define SIZE 10
#define ItemType int
 
class Pilha{
  private:
    ItemType num[SIZE];  // defini o tamanho padao da pilha como 10
    int top;
    Pilha * anterior;
  public:
    Pilha();    //defualt constructor
    ItemType push(ItemType);
    ItemType pop();
    bool isEmpty();
    bool isFull();
    ItemType topo();
    int tamanho();
    // int setSize();
    void displayItems();
    ~Pilha();
};
 
#endif // PILHA_H
#ifndef PILHA_H
#define PILHA_H
 
#include <cstdlib>
#include <iostream>

#define SIZE 10
 
class Pilha{
  private:
    int num[SIZE];  // defini o tamanho padao da pilha como 10
    int top;
  public:
    Pilha();    //defualt constructor
    int push(int);
    int pop();
    int isEmpty();
    int isFull();
    int topo();
    int tamanho();
    // int setSize();
    void displayItems();
};
 
#endif // PILHA_H
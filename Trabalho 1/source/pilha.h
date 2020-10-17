#ifndef PILHA_H
#define PILHA_H
 
#include <cstdlib>
#include <iostream>
 

class Pilha{
  private:
    int num[10];  // defini o tamanho padao da pilha como 10
    int top;
  public:
    Pilha();    //defualt constructor
    int push(int);
    int pop();
    // int isEmpty();
    // int isFull();
    // void displayItems();
};
 
#endif // PILHA_H
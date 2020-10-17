#include "pilha.h"
 
// criando pilha
Pilha::Pilha(){
    top=-1;
}

int Pilha::push(int n){
    // preciso verificar se a pilha está cheia (ainda n fiz)
    // if(isFull()){
    //     return 0;
    // }
    ++top;
    num[top]=n;
    return n;
}

int Pilha::pop(){
    // variavel temporaria
    int temp;
    // verifica se a pilha está vazia
    // if(isEmpty())
    //     return 0;
    temp = num[top];
    --top;
    return temp;
}
#include "pilha.h"
using namespace std;

// criando pilha
Pilha::Pilha(){
    top=-1;
}

int Pilha::push(int n){
    // preciso verificar se a pilha está cheia
    if(isFull()){
        return 0;
    }
    ++top;
    num[top]=n;
    return n;
}

int Pilha::pop(){
    int temp;   // variavel temporaria
    // verifica se a pilha está vazia
    if(isEmpty())
        return 0;
    temp = num[top];
    --top;
    return temp;
}

int Pilha::isEmpty(){
    if(top==-1)
        return 1;
    else
        return 0;   
}

int Pilha::isFull(){
    if(top==(SIZE-1))
        return 1;
    else
        return 0;
}

void Pilha::displayItems(){
    if(isEmpty())
        cout << "";
    int i; //for loop
    cout << "Sua pilha : ";
    for(i = (top); i >= 0 ; i--)
        cout << num[i] << " ";
    cout << endl;
}

int Pilha::topo(){
    int temp;   // variavel temporaria
    // verifica se a pilha está vazia
    if(isEmpty())
        return 0;
    temp = num[top];
    return temp;
}

int Pilha::tamanho(){
    // verifica se a pilha está vazia
    if(isEmpty())
        return 0;
    int temp = 0;
    for(int i = (top); i >= 0 ; i--)
        temp = temp + 1;
    return temp;
}
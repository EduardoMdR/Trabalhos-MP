#include "pilhaVetor.hpp"

using namespace std;

// criando pilha
PilhaVetor::PilhaVetor(){
    top=-1;
}

ItemType PilhaVetor::push(ItemType n){
    // preciso verificar se a pilha está cheia
    if(isFull()){
        return 0;
    }
    ++top;
    num[top]=n;
    return n;
}

ItemType PilhaVetor::pop(){
    ItemType temp;   // variavel temporaria
    // verifica se a pilha está vazia
    if(isEmpty())
        return 0;
    temp = num[top];
    --top;
    return temp;
}

bool PilhaVetor::isEmpty(){
    if(top==-1)
        return 1;
    else
        return 0;   
}

bool PilhaVetor::isFull(){
    if(top==(SIZE-1))
        return 1;
    else
        return 0;
}

void PilhaVetor::displayItems(){
    if(isEmpty())
        cout << "";
    int i; //for loop
    cout << "Sua pilha : ";
    for(i = (top); i >= 0 ; i--)
        cout << num[i] << " ";
    cout << endl;
}

ItemType PilhaVetor::topo(){
    ItemType temp;   // variavel temporaria
    // verifica se a pilha está vazia
    if(isEmpty())
        return 0;
    temp = num[top];
    return temp;
}

int PilhaVetor::tamanho(){
    // verifica se a pilha está vazia
    if(isEmpty())
        return 0;
    int temp = 0;
    for(int i = (top); i >= 0 ; i--)
        temp = temp + 1;
    return temp;
}

PilhaVetor::~PilhaVetor(){
    // delete top;
}


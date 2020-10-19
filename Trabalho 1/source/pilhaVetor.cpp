#include "pilhaVetor.hpp"

using namespace std;

/**
 * @brief Construct a new Pilha Vetor:: Pilha Vetor object
 * 
 */
PilhaVetor::PilhaVetor(){
    top=-1;
}

/**
 * @brief colocar na pilha - push = (empilhar novo elemento)
 * 
 * @param n 
 * @return ItemType 
 */
ItemType PilhaVetor::push(ItemType n){
    // preciso verificar se a pilha está cheia
    if(isFull()){
        return 0;
    }
    ++top;
    num[top]=n;
    return n;
}

/**
 * @brief remover elemento (que está no topo) 
 * 
 * @return ItemType 
 */
ItemType PilhaVetor::pop(){
    ItemType temp;   // variavel temporaria
    // verifica se a pilha está vazia
    if(isEmpty())
        return 0;
    temp = num[top];
    --top;
    return temp;
}

/**
 * @brief verifica se a pilha está vazia
 * 
 * @return true 
 * @return false 
 */
bool PilhaVetor::isEmpty(){
    if(top==-1)
        return 1;
    else
        return 0;   
}

/**
 * @brief verifica se apilha está cheia
 * 
 * @return true 
 * @return false 
 */
bool PilhaVetor::isFull(){
    if(top==(SIZE-1))
        return 1;
    else
        return 0;
}

/**
 * @brief retorna todos os itens da pilha
 * 
 */
void PilhaVetor::displayItems(){
    if(isEmpty())
        cout << "";
    int i; //for loop
    cout << "Sua pilha : ";
    for(i = (top); i >= 0 ; i--)
        cout << num[i] << " ";
    cout << endl;
}

/**
 * @brief pegar elemento que está no topo - obter/pegar
 * 
 * @return ItemType 
 */
ItemType PilhaVetor::topo(){
    ItemType temp;   // variavel temporaria
    // verifica se a pilha está vazia
    if(isEmpty())
        return 0;
    temp = num[top];
    return temp;
}

/**
 * @brief retorna todos os itens da pilha
 * 
 * @return int 
 */
int PilhaVetor::tamanho(){
    // verifica se a pilha está vazia
    if(isEmpty())
        return 0;
    int temp = 0;
    for(int i = (top); i >= 0 ; i--)
        temp = temp + 1;
    return temp;
}

/**
 * @brief Destroy the Pilha Vetor:: Pilha Vetor object
 * 
 */
PilhaVetor::~PilhaVetor(){
    // delete top;
}


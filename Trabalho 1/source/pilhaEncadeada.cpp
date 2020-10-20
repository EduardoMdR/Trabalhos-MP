/**
 * @file testa_pilha.cpp
 * @author Eduardo Marques dos reis (190012358)
 * @brief 
 * @version 0.1
 * @date 2020-10-19
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include "pilhaEncadeada.hpp"

/**
 * @brief Construct a new Pilha Encadeada:: Pilha Encadeada object
 * 
 */
PilhaEncadeada::PilhaEncadeada(int size){
    arr = new int[size];
	capacity = size;
	top = -1;
}

/**
 * @brief colocar na pilha - push = (empilhar novo elemento)
 * 
 * @param valor 
 * @return ItemType 
 */
ItemType PilhaEncadeada::push(ItemType valor){
	if (isFull()){
		return 0;
	}
	arr[++top] = valor;
    return valor;
}

/**
 * pegar elemento que está no topo - obter/pegar
 * 
 * @brief 
 * 
 * @return ItemType 
 */
ItemType PilhaEncadeada::topo(){
	if (!isEmpty())
		return arr[top];
	else
		return 0;
}

/**
 * @brief verifica se a pilha está vazia
 * 
 * @return true 
 * @return false 
 */
bool PilhaEncadeada::isEmpty(){
	return top == -1;	// or return size() == 0;
}

/**
 * @brief verifica se apilha está cheia
 * 
 * @return true 
 * @return false 
 */
bool PilhaEncadeada::isFull(){
    return top == capacity - 1;	// or return size() == capacity;
}

/**
 * @brief emover elemento (que está no topo) 
 * 
 * @return ItemType 
 */
ItemType PilhaEncadeada::pop(){
	// check for stack underflow
	if (isEmpty()){
        return 0;
	}
	// decrease stack size by 1 and (optionally) return the popped element
	return arr[top--];
}

/**
 * @brief retorna o tamanho da pilha
 * 
 * @return int 
 */
int PilhaEncadeada::tamanho(){
    return top + 1;
}

/**
 * @brief retorna todos os itens da pilha
 * 
 */
void PilhaEncadeada::displayItems(){
    if(isEmpty())
        cout << "";
    int i;  //for loop
    cout << "Sua pilha : ";
    for(i = (top); i >= 0 ; i--)
        cout << arr[i] << " ";
    cout << endl;
}
/**
 * @brief Destroy the Pilha Encadeada:: Pilha Encadeada object
 * 
 */
PilhaEncadeada::~PilhaEncadeada(){
    delete[] arr;
}
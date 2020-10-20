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

#ifndef PILHA_H
#define PILHA_H
#include <cstdlib>
#include <iostream>

using namespace std;

/**
 * @brief Tamanho padrão é estabelecido como 10
 * 
 */
#define SIZE 10

/**
 * @brief ItemType guarda o tipo da variavel que vou utilizar
 * 
 */
#define ItemType int

/**
 * @brief Classe da pilha, e seus métodos para fazer a pilha funcionar
 * 
 */
class PilhaVetor {
  private:

/**
 * @brief variavel que guarda o valor salvo na pilha
 * 
 */
    ItemType num[SIZE];  // defini o tamanho padao da pilha como 10
    int top;
  // PilhaVetor * anterior;
  public:

/**
 * @brief Construct a new Pilha Vetor object
 * 
 */
    PilhaVetor(int);    //defualt constructor

/**
 * @brief colocar na pilha - push = (empilhar novo elemento)
 * 
 * @return ItemType 
 */
    ItemType push(ItemType);

/**
 * @brief remover elemento (que está no topo) 
 * 
 * @return ItemType 
 */
    ItemType pop();

/**
 * @brief verifica se a pilha está vazia
 * 
 * @return true 
 * @return false 
 */
    bool isEmpty();

/**
 * @brief verifica se apilha está cheia
 * 
 * @return true 
 * @return false 
 */
    bool isFull();

/**
 * @brief pegar elemento que está no topo - obter/pegar
 * 
 * @return ItemType 
 */
    ItemType topo();

/**
 * @brief retorna todos os itens da pilha
 * 
 * @return int 
 */
    int tamanho();

// muda o tamanho da pilha

    // int setSize();

/**
 * @brief retorna todos os itens da pilha
 * 
 */
    void displayItems();

/**
 * @brief Destroy the Pilha Vetor object
 * 
 */
    ~PilhaVetor();
};
#endif // PILHA_H
#ifndef PILHAENCADEADA_H
#define PILHAENCADEADA_H
 
#include <cstdlib>
#include <iostream>

using namespace std;

/**
 * 
 * ItemType guarda o tipo da variavel que vou utilizar
 * isso facilita quando quero mudar de int para string por exemplo
 * 
 */
#define ItemType int

/**
 * @brief Classe Bloco, é utilizada para faciliatar a construção da pilha
 * 
 */
class bloco{
public:

/**
 * @brief Construct a new bloco object
 * 
 */
    bloco();

/**
 * @brief variavel que guarda o valor salvo na pilha
 * 
 */
    ItemType item;

/**
 * @brief ponteiro para fazer a pilha encadeada
 * 
 */
    bloco * anterior;
};
 
/**
 * @brief Classe da pilha, e seus métodos para fazer a pilha funcionar
 * 
 */
class PilhaEncadeada{
private:

/**
 * @brief ponteiro para a classe bloco, criada logo a cima
 * 
 */
    bloco * blocoTopo;
public:

/**
 * @brief Construct a new Pilha Encadeada object
 * 
 */
    PilhaEncadeada();

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
    bool isEmpty(); // 

/**
 * @brief 
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
 * @brief retorna o tamanho da pilha
 * 
 * @return int 
 */
    int tamanho();

/**
 * @brief retorna todos os itens da pilha
 * 
 */
    void displayItems();

/**
 * @brief Destroy the Pilha Encadeada object
 * 
 */
    ~PilhaEncadeada();
};
 
#endif // PILHAENCADEADA_H
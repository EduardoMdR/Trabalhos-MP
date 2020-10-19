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
 * @brief Construct a new bloco::bloco object
 * 
 */
bloco::bloco(){
 
}

/**
 * @brief Construct a new Pilha Encadeada:: Pilha Encadeada object
 * 
 */
PilhaEncadeada::PilhaEncadeada(){
    blocoTopo=NULL;
}

/**
 * @brief colocar na pilha - push = (empilhar novo elemento)
 * 
 * @param valor 
 * @return ItemType 
 */
ItemType PilhaEncadeada::push(ItemType valor){
    bloco * novoBloco = (bloco * ) malloc(sizeof(bloco));
    if(novoBloco==NULL){
        return 0;
    }else{
        novoBloco->item = valor;
        novoBloco->anterior = blocoTopo;
        blocoTopo = novoBloco;
        return blocoTopo->item;
    }
}

/**
 * pegar elemento que está no topo - obter/pegar
 * 
 * @brief 
 * 
 * @return ItemType 
 */
ItemType PilhaEncadeada::topo(){
  ItemType valor;
    if(blocoTopo->item==NULL){
        return 0;
    }else{
        valor = blocoTopo->item;
        return valor;
    }
}

/**
 * @brief verifica se a pilha está vazia
 * 
 * @return true 
 * @return false 
 */
bool PilhaEncadeada::isEmpty(){
    return 0;
}

/**
 * @brief verifica se apilha está cheia
 * 
 * @return true 
 * @return false 
 */
bool PilhaEncadeada::isFull(){
    return 0;
}

/**
 * @brief emover elemento (que está no topo) 
 * 
 * @return ItemType 
 */
ItemType PilhaEncadeada::pop(){
    ItemType valor;
    if(blocoTopo==NULL){
        return 0;
    }else{
        bloco * temp;
        valor = blocoTopo->item;
        temp = blocoTopo;
        blocoTopo = blocoTopo->anterior;
        temp = NULL;
        free(temp);
        return valor;
    }
}

/**
 * @brief retorna o tamanho da pilha
 * 
 * @return int 
 */
int PilhaEncadeada::tamanho(){
    if(blocoTopo==NULL){
        return 0;
    }else{

    }
}

/**
 * @brief Destroy the Pilha Encadeada:: Pilha Encadeada object
 * 
 */
PilhaEncadeada::~PilhaEncadeada(){
    if(blocoTopo!=NULL){
        bloco * temp;
        while(blocoTopo!=NULL){
            temp = blocoTopo;
            blocoTopo = blocoTopo->anterior;
            temp = NULL;
            free(temp);
        }
    }
}
#ifndef PILHAENCADEADA_H
#define PILHAENCADEADA_H
 
#include <cstdlib>
#include <iostream>

using namespace std;

#define ItemType int
 
class bloco{
public:
    bloco();
    ItemType item;
    bloco * anterior;
};
 
class PilhaEncadeada{
private:
    bloco * blocoTopo;
public:
    PilhaEncadeada(); // construtor (iniciar as variáveis do já setadas) --> primeira ação a ser feita quando a pilha for chamada.
    ItemType push(ItemType); // colocar na pilha - push = empurrar/mover
    ItemType pop(); // remover elemento (que está no topo) - estourar/detonar
    bool isEmpty();
    bool isFull();
    ItemType topo(); // pegar elemento que está no topo - obter/pegar
    int tamanho();
    void displayItems();
    ~PilhaEncadeada(); // destrutor (destroi o que foi criado / limpa memória) -->  ultima ação a ser feita antes do programa ser fechado.
};
 
#endif // PILHAENCADEADA_H
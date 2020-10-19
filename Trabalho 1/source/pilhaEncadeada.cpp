#include "pilhaEncadeada.hpp"

bloco::bloco(){
 
}
 
PilhaEncadeada::PilhaEncadeada(){
    blocoTopo=NULL;
}
 
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
 
ItemType PilhaEncadeada::topo(){
  ItemType valor;
    if(blocoTopo==NULL){
        return 0;
    }else{
        valor = blocoTopo->item;
        return valor;
    }
 
}

bool PilhaEncadeada::isEmpty(){
    return 0;
}

bool PilhaEncadeada::isFull(){
    return 0;
}
 
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
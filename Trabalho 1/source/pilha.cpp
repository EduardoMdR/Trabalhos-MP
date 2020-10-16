#include "pilha.h"
 
pilha::pilha(){
    blocoTopo=NULL;
}
 
bool pilha::push(int valor){
    bloco * novoBloco = (bloco * ) malloc(sizeof(bloco));
    if(novoBloco==NULL){
        return false;
    }else{
        novoBloco->item = valor;
        novoBloco->anterior = blocoTopo;
        blocoTopo = novoBloco;
        return true;
    }
}
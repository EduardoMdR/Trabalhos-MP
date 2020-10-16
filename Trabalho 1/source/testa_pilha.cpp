#include <iostream>
#include "pilha.h"
using namespace std;
 
int main(){

  cout << " Pilha criada " << endl;
  pilha teste;

  int operacao, valor;
  do {
    cout << "-----------------------------" << endl;
    cout << " 1 - Adicionar Elemento " << endl;
    cout << " 2 - Retirar Elemto " << endl;
    cout << " 3 - Retornar elemento do topo " << endl;
    cout << " 4 - Ver tamanho da pilha " << endl;
    cout << " 5 - Mudar tamanho da pilha " << endl;
    cout << " 6 - Pilha está cheia? " << endl;
    cout << " 7 - Pilha está vazia?  " << endl;
    cout << " 0 - Finalizar operação (destruir pilha)" << endl;
    cout << "-----------------------------" << endl;
    cin >> operacao;
    switch(operacao) {
      case 1 :
        cout << "Push" << endl; 
        cin >> valor;
        // if(teste.push(valor)) cout << "O valor " << valor << " foi inserido com sucesso!\n\n";
        //   else cout << "O valor não pode ser inserido!\n\n";
      break;
      case 2 :
        cout << "Pop" << endl;
      break;
      case 3 :
        cout << "Top" << endl;
      break;
      case 4 :
        cout << "Size" << endl;
      break;
      case 5 :
        cout << "SetSize" << endl;
      break;
      case 6 :
        cout << "IsFull" << endl;
      break;
      case 7 :
        cout << "IsEmpty" << endl;
      break;
      default :
        cout << "Número invalido" << endl;
      }
    } while (operacao != 0);

    cout << "Fim da operação" << endl;
    return 0;
}
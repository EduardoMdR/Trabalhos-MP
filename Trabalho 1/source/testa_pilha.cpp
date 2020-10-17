#include <iostream>
#include "pilha.h"
// #include "gtest/gtest.h"

using namespace std;

// Desenvolvimento orientado a teste
// TEST(Pilha, testPushAndGet)
// {
//     int name = 9;

//     Pilha *valor = new Pilha();
//     valor->push(name);

//     EXPECT_EQ(valor->pop(), name);
// }

// int main(int argc, char **argv)
// {
//     testing::InitGoogleTest(&argc, argv);
//     return RUN_ALL_TESTS();
// }

int main()
{
  cout << " Pilha criada " << endl;
  Pilha teste;

  int operacao, valor, temp;
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
        cout<<"Digite o número que queira inserir na pilha: \n";
        cin >> valor;

        temp = teste.push(valor);
        if(temp==0)
          cout<<"A Pilha está cheia.\n\n"<<endl;
        else
          cout  << "Número " << temp << " inserido com sucesso.\n\n" << endl;
      break;
      case 2 :
        cout << "Pop" << endl;
        temp=teste.pop();
        if(temp==0)
          cout<<"A pilha está vazia!! \n"<<endl;
        else
          cout  << "Número " << temp << " retirado da lista.\n\n" << endl;

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
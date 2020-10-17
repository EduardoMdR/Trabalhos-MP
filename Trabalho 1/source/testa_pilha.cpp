#include <iostream>
#include "pilha.h"
// #include "gtest/gtest.h"

#define ItemType int

using namespace std;

// Desenvolvimento orientado a teste
// TEST(Pilha, testPushAndPop)
// {
//     int name = 9;

//     Pilha *valor = new Pilha();
//     valor->push(name);

//     EXPECT_EQ(valor->pop(), name);
// }


// TEST (Pilha, testTopo)
// {
//   Pilha *valor = new Pilha();
//   EXPECT_EQ(valor->topo(), 0);

//   for (int i = 0; i < 10; i++) {
//     valor->push(i);
//     EXPECT_EQ(valor->topo(), i);
//   }
// }


// TEST (Pilha, testSize)
// {
//   Pilha *valor = new Pilha();
//   EXPECT_EQ(valor->tamanho(), 0);

//   for (int i = 1; i <= 10; i++) {
//     valor->push(i);
//     EXPECT_EQ(valor->tamanho(), i);
//   }
//   temp = valor->pop();
//   i--;
//   EXPECT_EQ(valor->tamanho(), i);
// }


// TEST (Pilha, testIsEmpty)
// {
//   int temp, temp2;
//   Pilha *valor = new Pilha();
//   EXPECT_EQ(valor->isEmpty(), 1;

//   valor->push(2);
//   EXPECT_EQ(valor->isEmpty(), 0);
// }


// TEST (Pilha, testIsFull)
// {
//   int temp, temp2;
//   Pilha *valor = new Pilha();
//   EXPECT_EQ(valor->isFull(), 0);

// for (int i = 0; i < 10; i++) {
//   valor->push(i);
// }
//   EXPECT_EQ(valor->isFull(), 1);
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

  int operacao;
  ItemType valor, temp;
  do {
    cout << "-----------------------------" << endl;
    cout << " 1 - Adicionar Elemento " << endl;
    cout << " 2 - Retirar Elemto " << endl;
    cout << " 3 - Retornar elemento do topo " << endl;
    cout << " 4 - Ver tamanho da pilha " << endl;
    cout << " 5 - Mudar tamanho da pilha " << endl;
    cout << " 6 - Pilha está cheia? " << endl;
    cout << " 7 - Pilha está vazia?  " << endl;
    cout << " 8 - Mostrar pilha  " << endl;
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
        temp=teste.pop();
        if(temp==0)
          cout<<"A pilha está vazia!! \n"<<endl;
        else
          cout  << "Número " << temp << " retirado da lista.\n\n" << endl;
      break;

      case 3 :
        temp=teste.topo();
        if(temp==0)
          cout<<"A pilha está vazia!! \n"<<endl;
        else
          cout  << "Número no topo de sua lista é : " << temp << endl;
      break;

      case 4 :
        temp=teste.tamanho();
        if(temp==0)
          cout<<"A pilha está vazia!! \n"<<endl;
        else
          cout  << "O tamanho de sua pilha é de : " << temp << endl;
      break;

      case 5 :
        // setSize
      break;

      case 6 :
        if (teste.isFull())
          cout<<"A Pilha está cheia.\n\n"<<endl;
        else
          cout<<"A Pilha não está cheia.\n\n"<<endl;
      break;

      case 7 :
        if (teste.isEmpty())
          cout<<"A Pilha está vazia.\n\n"<<endl;
        else
          cout<<"A Pilha não está vazia.\n\n"<<endl;
      break;

      case 8 :
        if (teste.isEmpty())
          cout<<"A Pilha está vazia.\n\n"<<endl;
        else
          teste.displayItems();
      break;

      default :
        cout << "Número invalido" << endl;
      }
    } while (operacao != 0);

    cout << "Fim da operação" << endl;
    return 0;
}
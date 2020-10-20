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

#include <iostream>
#include "pilhaVetor.hpp"
#include "pilhaEncadeada.hpp"

#ifndef StackType
#define StackType PilhaVetor
#endif //StackType
// #include "gtest/gtest.h"

using namespace std;

/**
 * @brief Inicio do desenvolcimento orientado a testes
 * 
 */

/**
 * @brief Construct a new TEST object
 * 
 * teste para push e pop(esses dois métodos são muitos testados nos outros testes)
 * 
 * então não fiz teste muitos elaborado para eles
 * 
 */
// TEST(StackType, testPushAndPop)
// {
//     int name = 9;

//     StackType *valor = new StackType();
//     valor->push(name);

//     EXPECT_EQ(valor->pop(), name);
// }

/**
 * @brief Construct a new TEST object
 * 
 * Testar método topo, que retorna o ultimo item adicionado na pilha
 * 
 */
// TEST (StackType, testTopo)
// {
//   StackType *valor = new StackType();
//   EXPECT_EQ(valor->topo(), 0);

//   for (int i = 0; i < 10; i++) {
//     valor->push(i);
//     EXPECT_EQ(valor->topo(), i);
//   }
// }

/**
 * @brief Construct a new TEST object
 * 
 * Testar método size, que retorna o tamanho da pilha
 * 
 */
// TEST (StackType, testSize)
// {
//   StackType *valor = new StackType();
//   EXPECT_EQ(valor->tamanho(), 0);

//   for (int i = 1; i <= 10; i++) {
//     valor->push(i);
//     EXPECT_EQ(valor->tamanho(), i);
//   }
//   temp = valor->pop();
//   i--;
//   EXPECT_EQ(valor->tamanho(), i);
// }

/**
 * @brief Construct a new TEST object
 * 
 * Testar se o método isEmpty está funcionando corretamente
 * 
 * podendo ser verdadeira ou falsa o retorno da função
 * 
 */
// TEST (StackType, testIsEmpty)
// {
//   int temp, temp2;
//   StackType *valor = new StackType();
//   EXPECT_EQ(valor->isEmpty(), 1;

//   valor->push(2);
//   EXPECT_EQ(valor->isEmpty(), 0);
// }

/**
 * @brief Construct a new TEST object
 * 
 * Testar se o método isFull está funcionando corretamente
 * 
 * podendo ser verdadeira ou falsa o retorno da função
 * 
 */
// TEST (StackType, testIsFull)
// {
//   int temp, temp2;
//   StackType *valor = new StackType();
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


/**
 * @brief Desenvolvimento orientado a testes manuais
 * 
 * fiz isso para ter um controle maior para saber  se as classes e os métodos estão
 * 
 * funcionando corretamente, uma vez que posso digitar o resultado e descobrir se a saida está correta
 * 
 * se trata de uma maneira mais cansativa, porém visualmente facil de entender se está correto ou não
 * 
 */
int main()
{

/**
 * @brief Crianco pilha para testes 
 * 
 */
  cout << " Pilha criada " << endl;
  StackType teste(10);

  int operacao;
  ItemType valor, temp;

/**
 * @brief Iniciando um loop, até que digite o valor para sair : '0'
 * 
 */
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

/**
 * @brief Caso a opção digitada for 1 :
 * 
 * adiciono um novo elemento na pilha
 * 
 */
      case 1 :
        if (teste.isFull()){  // Se isEmpty retornar 1, é porque a pilha não tem mais espaço
          cout<<"A Pilha está cheia.\n\n"<<endl;
        }else{
          cout<<"Digite o número que queira inserir na pilha: \n";
          cin >> valor;
          temp = teste.push(valor);
 
          cout  << "Número " << temp << " inserido com sucesso.\n\n" << endl;
        }
      break;

/**
 * @brief Caso a opção digitada for 2 :
 * 
 * Retiro o elemnto no topo da pilha
 * 
 */
      case 2 :
        temp=teste.pop();
        if (teste.isEmpty())
          cout<<"A pilha está vazia!! \n"<<endl;
        else
          cout  << "Número " << temp << " retirado da lista.\n\n" << endl;
      break;

/**
 * @brief Caso a opção digitada for 3 :
 * 
 * Retorno o elemneto no topo da pilha (sem remover o mesmo)
 * 
 */
      case 3 :
        temp=teste.topo();
        if (teste.isEmpty())
          cout<<"A pilha está vazia!! \n"<<endl;
        else
          cout  << "Número no topo de sua lista é : " << temp << endl;
      break;

/**
 * @brief Caso a opção digitada for 4 :
 * 
 * retorna o tamanho da pilha
 * 
 */
      case 4 :
        int temp2; // vai receber o tamanho da pilha
        temp2 = teste.tamanho();
        if (teste.isEmpty())
          cout<<"A pilha está vazia!! \n"<<endl;
        else
          cout  << "O tamanho de sua pilha é de : " << temp2 << endl;
      break;

/**
 * @brief Caso a opção digitada for 5 :
 * 
 * Muda o tamanho da pilha
 */
      case 5 :
        // setSize
      break;

/**
 * @brief Caso a opção digitada for 6 :
 * 
 * Verifica se a pilha está cheia
 * 
 */
      case 6 :
        if (teste.isFull())
          cout<<"A Pilha está cheia.\n\n"<<endl;
        else
          cout<<"A Pilha não está cheia.\n\n"<<endl;
      break;

/**
 * @brief Caso a opção digitada for 7 :
 * 
 * Verifica se a pilha está vazia
 * 
 */
      case 7 :
        if (teste.isEmpty())
          cout<<"A Pilha está vazia.\n\n"<<endl;
        else
          cout<<"A Pilha não está vazia.\n\n"<<endl;
      break;

/**
 * @brief Caso a opção digitada for 8 :
 * 
 * Retona todos os elementos da pilha
 * 
 */
      case 8 :
        if (teste.isEmpty())
          cout<<"A Pilha está vazia.\n\n"<<endl;
        else
          teste.displayItems();
      break;

/**
 * @brief Caso a opção digitada for :
 * 
 * caso nenhum número requerido for digitado, repeti o loop novamente
 * 
 */
      default :
        cout << "Número invalido" << endl;
      }
    } while (operacao != 0);

    cout << "Fim da operação" << endl;
    return 0;
}
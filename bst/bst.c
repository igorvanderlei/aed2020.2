//Implementação das funções.

#include "bst.h"
#include <stdio.h>
#include <stdlib.h>

/*Recursividade
1 -> Caso Base da Recursão => Instancia mais simples do problema
2 -> Caso recursivo (indutivo) => Redução do problema para se aproximar do Caso Base
*/


arvore adicionar (arvore raiz, int valor) {
    //Caso Base - Adicionar em uma árvore vazia
    if(raiz == NULL) {
        //1. Alocar o espaço em memória para acomodar o novo nó
        arvore novo = (arvore) malloc (sizeof(no));

        //2. Inicializar os valores das variáveis membro do struct
        novo->valor = valor;
        novo->esq = NULL;
        novo->dir = NULL;

        //3. Atualizar a raiz relativa da (sub-)árvore
        return novo;
    }

    //Os casos recursivos
    if(valor >= raiz->valor) {
        //chamada recursiva para inserir na sub-árvore a direita
        raiz->dir = adicionar(raiz->dir,valor);
    } else {
        //chamada recursiva para inserir na sub-árvore a esquerda
        raiz->esq = adicionar(raiz->esq,valor);
    }
    return raiz;
}

/*
Caso base:
1. Elemento encontrado
2. árvore vazia (elemento não encontrado)

Caso(s) recursivo(s):
*/
arvore procurar(arvore raiz, int valor){


      //caso base 1
      if(raiz == NULL) {
         return NULL;
      }

      //caso base 2
      if(raiz-> valor == valor)  {
         return raiz;
      }


      if(valor >= raiz->valor) {
        //chamada recursiva para inserir na sub-árvore a direita
        return procurar(raiz->dir,valor);
    } else {
        //chamada recursiva para inserir na sub-árvore a esquerda
        return procurar(raiz->esq,valor);
    }   
    

}








#include "hash.h"
#include <stdio.h>
#include <stdlib.h>

#define C1 17
#define C2 23
#define C3 11
#define C4 19

void inicializar (tabela_hash * tabela) {
    int i;
    for(i=0; i<MAX; i++)
        tabela->T[i] = NULL;
    tabela->quantidade = 0;
}

int adicionar (tabela_hash * tabela, pessoa *p){
    int i=0, posicao;
    if(tabela->quantidade == MAX)
        return 0;

    while(1) {
      posicao = probingDuploHash(p->chave, i);
      i++;  
      if(tabela->T[posicao] == NULL) {
         tabela->T[posicao] = p;  
         tabela->quantidade++;
      }
      return 1;
    }
}

struct pessoa * localizar(tabela_hash * tabela, int chave) {

    int i=0, posicao;

    while(1) {
      posicao = probingDuploHash(chave, i);
      i++;  
      if(tabela->T[posicao] != NULL &&
         tabela->T[posicao]->chave == chave) {
         return tabela->T[posicao];
      }
      if(i == MAX || tabela->T[posicao] == NULL ) {
          return NULL;
      }
    }


}

int probingLinear(int chave, int i) {
    return (hash1(chave) + i) % MAX;
}

int probingDuploHash(int chave, int i) {
    return (hash1(chave) + i*hash2(chave)) % MAX;
}

int hash1(int chave) {
    return (chave * C1 + C2) % MAX;
}

int hash2(int chave) {
    return (chave * C3 + C4) % MAX;
}

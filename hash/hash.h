#ifndef HASH_H
#define HASH_H
#define MAX 1000


typedef struct pessoa {
    int chave;
    char nome[100];
} pessoa;

typedef struct tabela {
    pessoa * T[MAX]; 
    int quantidade;
} tabela_hash;

void inicializar (tabela_hash * tabela);
int adicionar (tabela_hash * tabela, pessoa *p);
struct pessoa * localizar(tabela_hash * tabela, int chave);


int hash1(int chave) ;
int hash2(int chave) ;
int probingDuploHash(int chave, int i) ;
int probingLinear(int chave, int i);

#endif

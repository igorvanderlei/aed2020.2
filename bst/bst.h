//Estruturas utilizadas, constantes, declaração de funções (sem implementação

#ifndef BST_H
#define BST_H

typedef struct no {
    int valor;
    struct no *esq, *dir;
} no;

typedef no* arvore;

arvore adicionar (arvore raiz, int valor) ;

arvore procurar(arvore raiz, int valor);



#endif
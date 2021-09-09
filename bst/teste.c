//main

#include "bst.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv) {
    //Declaração de uma variável do "tipo" árvore
    arvore a;

    //Inicialização da árvore
    a = NULL;

    a = adicionar(a, 10);
    a = adicionar(a, 15);
    a = adicionar(a, 5);
    a = adicionar(a, 8);

    if(procurar(a, 8) != NULL)
        printf("achou\n");
    else 
        printf("nao achou\n");

    if(procurar(a, 30) != NULL)
        printf("achou\n");
    else 
        printf("nao achou\n");


    return 0;
}

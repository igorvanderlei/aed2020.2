//main

#include "hash.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv) {
    //Declaração de uma variável do "tipo" árvore
    tabela_hash tabela;
    int opcao, valor;
    //Inicialização da árvore
    inicializar(&tabela);

    while(1) {
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                scanf("%d", &valor);
                adicionar(&tabela, valor);
                break;

            case 99:
                return 0;

        }

    }    
}

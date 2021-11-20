#include <stdio.h>
#include <stdlib.h>
#include "grafo.h"

void inicializar (grafo *g, int tamanho) {
	int i,j;
	g->v = tamanho;
	g->mapa = (char *) malloc(sizeof(char) * tamanho);
	g->matriz = (int **) malloc(sizeof(int *) * tamanho);
	for(i =0; i < tamanho; i++)
		g->matriz[i] = (int *) malloc(sizeof(int) * tamanho);

	for(i =0; i < tamanho; i++) {
		for(j=0; j < tamanho; j++) {
				if(i==j) {
					g->matriz[i][j] = 1;
				} else {
					g->matriz[i][j] = 0;
				}
		}
      //  g->lista[i] = NULL;  inicializando a lista encadeada vazia
	}
}


void imprimir(grafo *g) {
		int i,j;
 //   for()
 //       imprimir nomes dos vértices

		for(i =0; i < g->v; i++) {
//				print(nome do vértice dessa linha)
				for(j = 0; j < g->v; j++) {
						printf("\t%d", g->matriz[i][j]);
				}					
				printf("\n");
		}
}


int main(int argc, int* argv) {
	grafo g;
    
    printf("%d, %d\n\n", sizeof(int), sizeof(int *));
	inicializar(&g, 10);

	imprimir(&g);

}

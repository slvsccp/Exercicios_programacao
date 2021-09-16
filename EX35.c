/* Exemplo 1: Escreva uma função que recebe dois vetores e seus 
	respectivos tamanhos e mostre na tela somente os elementos 
	comuns aos dois vetores. */
	
#include <stdio.h>

void compara (int *vA, int tam1, int *vB, int tam2);

int main(){
	
	int vetA[6] = {5, 2, 0, 1, 4, 6};
	int vetB[5] = {8, 5, 7, 6, 10};
	
	compara(vetA, 6, vetB, 5);	
	
	return 0;
}

void compara (int *vA, int tam1, int *vB, int tam2){
	
	int i, j;
	
	for(i=0;i<tam1;i++){
		for(j=0;j<tam2;j++){
			if(vA[i] == vB[j]){
				printf("%d\n", vA[i]);
			}
		}
	}
	
}

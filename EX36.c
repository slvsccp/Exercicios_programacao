/* Exemplo 1: Programa para teste do algoritmo bolha */
	
#include <stdio.h>

void bolha(int *v, int TAM);

int main(){

	int v[10] = {6, 3, 32, -5, 5, 10, 223, 5, 8, 14};
	int i;
	
	bolha(v,10);
	
	for(i=0;i<10;i++){
		printf("%d\n", v[i]);
	}
	
	return 0;
}

void bolha(int *v, int TAM){
	
	int a, b, temp;
	
	for(a=1;a<TAM;a++){
		for(b=TAM-1;b>=a;b--){
			if(v[b-1] > v[b]){
				temp = v[b-1];
				v[b-1] = v[b];
				v[b] = temp;
			}
		}
	}
}

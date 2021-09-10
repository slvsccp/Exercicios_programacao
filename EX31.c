/* Exemplo 2: Faça um programa que contenha funções para:

	- média aritmética
	- maior valor
	- menor valor
	
	As funções devem receber um vetor de valores do tipo float, e 
	o tamanho do vetor como parâmetros e retornar o dado pedido.

*/

#include <stdio.h>

float media(float *vet, int tam);
float maior(float *vet, int tam);
float menor(float *vet, int tam);

int main(){

	float v[10], med, ma, me;
	int i;
	
	printf("Digite 10 valores\n");
	for(i=0;i<10;i++){
		scanf("%f", &v[i]);
	}
	
	med = media(v, 10);
	ma = maior(v, 10);
	me = menor(v, 10);
	
	printf("\nMedia dos 10 valores: %f\n", med);
	printf("\nMaior dos 10 valores: %f\n", ma);
	printf("\nMenor dos 10 valores: %f\n", me);
	
	return 0;
}

float media(float *vet, int tam){
	
	float soma;
	int i;
	
	soma = 0;
	for(i=0;i<10;i++){
		soma = soma + vet[i];
	}
	soma = soma / 10;
	
	return soma;
}

float maior(float *vet, int tam){
	
	float m;
	int i;
	
	m=vet[0];
	for(i=1;i<10;i++){
		if (vet[i] > m){
			m = vet[i];
		}
	}
	
	return m;
}

float menor(float *vet, int tam){
	
	float m;
	int i;
	
	m=vet[0];
	for(i=1;i<10;i++){
		if (vet[i] < m){
			m = vet[i];
		}
	}
	
	return m;
}

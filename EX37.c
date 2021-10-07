/* Exemplo 1: Faça um programa recursivo que imprima em ordem descrescente todos os 
	números entre n e 0, sendo n fornecido pelo usuário. */
	
#include<stdio.h>
void imprime(int n);

int main(){
	
	int n;
	
	printf("Digite o valor de n\n");
	scanf("%d", &n);
	
	imprime(n);
	
	return 0;
}

void imprime(int n){
	
	if(n>=0){
		printf("%d\n", n);
		imprime(n-1);
	}
}

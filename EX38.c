/* Exemplo 2: Programa que calcula o fatorial de um número usando recursividade. */
	
#include<stdio.h>

int main(){
	
	int n, res;
	
	printf("Digite o valor de n\n");
	scanf("%d", &n);
	
	res = fat(n);
	
	printf("%d ! = %d", n, res);
	
	return 0;
}

int fat(int n){
	
	if(n == 0){
		return 1;
	}else{
		return n * fat(n-1);
	}
		
}

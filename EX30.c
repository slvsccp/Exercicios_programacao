/* Exemplo 1: Escreva uma função que recebe três valores inteiros 
	por passagem de parâmetros por valor, e dois ponteiros 
	para retornar o maior e o menor valor dos três números.
	*/
	
void maiormenor(int a, int b, int c, int *maior, int *menor);

#include <stdio.h>

int main(){
	
	int m, n;
	
	maiormenor(7,2,0,&m,&n);
	
	printf("Maior valor: %d, menor valor: %d\n", m, n);
	
	return 0;
}

void maiormenor(int a, int b, int c, int *maior, int *menor){
	
	if(a >= b && a >= c){
		*maior = a;
	}else if(b >= a && b >= c){
		*maior = b;
	}else if(c >= a && c >= b){
		*maior = c;
	}
	
	if(a <= b && a <= c){
		*menor = a;
	}else if(b <= a && b <= c){
		*menor = b;
	}else if(c <= a && c <= b){
		*menor = c;
	}
	
}

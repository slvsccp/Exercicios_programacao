/* Programa exemplo que mostra conteúdo e endereços de variáveis. */

#include<stdio.h>

int main(){
	
	int a, b, c, *pa, *pb, *pc;
	
	a = 4;
	b = 2;
	c = 7;
	
	pa = &a;
	pb = &b;
	pc = &c;
	
	printf("\n Endereco de a: %p / Conteudo de a: %d", pa, a);
	printf("\n Endereco de b: %p / Conteudo de b: %d", pb, b);
	printf("\n Endereco de c: %p / Conteudo de c: %d", pc, c);
	
		
	return 0;
}

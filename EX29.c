/* 2) Escreva uma função que recebe a nota do aluno de 0 a 10, 
		e retorna o conceito final. Considere:

De 0 a 6 (sem considerar o 6): D
De 6 a 7 (sem considerar o 7): C
De 7 a 8,5 (sem considerar o 8,5): B
De 8,5 a 10: A

Veja que o retorno deve ser do tipo 'char'. Teste a função pedindo 
para o usuário digitar a nota e o conceito é mostrado na tela. */

#include <stdio.h>

char conceito (float nota);

int main(){
	
	char c;
	float nota;
	
	printf("Digite a nota final do aluno\n");
	scanf("%f", &nota);
	
	c = conceito(nota);
	
	if(c != '*'){
		printf("Conceito final do aluno: %c\n", c);
	}

	return 0;
}

char conceito (float nota){
	
	if(nota >=0 && nota < 6){
		return 'D';
	}else if(nota >=6 && nota < 7){
		return 'C';
	}else if(nota >=7 && nota < 8.5){
		return 'B';
	}else if(nota >=8.5 && nota <= 10){
		return 'A';
	}else{
		printf("Valor invalido");
		return '*';
	}
	
}

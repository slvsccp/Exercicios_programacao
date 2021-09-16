/* Exemplo 6: Crie uma função em linguagem C chamada Dado() que 
	retorna, através de sorteio, um número de 1 até 6. Depois, 
	faça 1 milhão de lançamentos e avalie se o dado é viciado.

*/

#include <stdio.h>
#include <stdlib.h>

int Dado();

int main(){
	
	int i, d, cont[6];
	
	for(i=0;i<6;i++){
		cont[i] = 0;
	}
	
	srand(time(NULL));
	
	for(i=0;i<10000000;i++){
		d = Dado();
		if(d == 1){
			cont[0]++;
		}else if(d == 2){
			cont[1]++;
		}else if(d == 3){
			cont[2]++;
		}else if(d == 4){
			cont[3]++;
		}else if(d == 5){
			cont[4]++;
		}else if(d == 6){
			cont[5]++;
		}
	}
	
	printf("Ocorrencias:\n");
	printf("%d vezes o valor 1\n", cont[0]);
	printf("%d vezes o valor 2\n", cont[1]);
	printf("%d vezes o valor 3\n", cont[2]);
	printf("%d vezes o valor 4\n", cont[3]);
	printf("%d vezes o valor 5\n", cont[4]);
	printf("%d vezes o valor 6\n", cont[5]);
	
	
	return 0;
}

int Dado(){
	
	return 1 + rand()%6;
	
}

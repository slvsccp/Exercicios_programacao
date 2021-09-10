/* Exemplo 3: Igual ao anterior, mas a mesma função retorna 
	os três cálculos em ponteiros passados para a função.

*/

#include <stdio.h>

void geral(float *vet, int tam, float *media, float *maior, float *menor);

int main(){

	float v[10], med, ma, me;
	int i;
	
	printf("Digite 10 valores\n");
	for(i=0;i<10;i++){
		scanf("%f", &v[i]);
	}
	
	geral(v, 10, &med, &ma, &me);
	
	printf("\nMedia dos 10 valores: %f\n", med);
	printf("\nMaior dos 10 valores: %f\n", ma);
	printf("\nMenor dos 10 valores: %f\n", me);
	
	return 0;
}

void geral(float *vet, int tam, float *media, float *maior, float *menor){
	
	float soma, m;
	int i;
	
	soma = 0;
	for(i=0;i<10;i++){
		soma = soma + vet[i];
	}
	soma = soma / 10;
	
	*media = soma;
	
	m=vet[0];
	for(i=1;i<10;i++){
		if (vet[i] > m){
			m = vet[i];
		}
	}
	
	*maior = m;
	
	m=vet[0];
	for(i=1;i<10;i++){
		if (vet[i] < m){
			m = vet[i];
		}
	}
	
	*menor = m;

}

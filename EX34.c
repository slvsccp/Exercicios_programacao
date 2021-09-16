/* Exemplo 5: Exemplo bem matemático: Faça uma função que receba 
	as coordenadas x e y de dois pontos e retorna a 
	distância entre eles.
*/

#include <stdio.h>
#include <math.h>

float modulo(float x);
float distancia(float x1, float y1, float x2, float y2);

int main(){

	float d;
	
	d = distancia (3, 2, 5, 4);
	
	printf("A distancia entre os pontos e de: %f\n", d);
	
	return 0;
}

float modulo(float x){
	if(x>=0){
		return x;
	}else{
		return -x;
	}
}

float distancia(float x1, float y1, float x2, float y2){
	
	float d;
	
	d = sqrt(pow(modulo(x1-x2),2) + pow(modulo(y1-y2),2));
	
	return d;
}

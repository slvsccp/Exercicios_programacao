#include <stdio.h>

//Crie um programa que solicita um número e informa se ele é positivo ou negativo.

int main(void) {
  
  int num1;

  printf("Digite o número: ");
  scanf("%d", &num1);

  if(num1 <= 0){
    printf("Número é negativo");
  } else {
    printf("Número positivo");
  }
  
  return 0;
}

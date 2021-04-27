#include <stdio.h>

int main() {

  int numero;

  printf("Digite um número: ");
  scanf("%d", &numero);
  if(numero > 1000){
    printf("Número digitado maior do que 1000.");
  } else {
    printf("Número digitado menor do que 1000.");
  }

  return 0;
}

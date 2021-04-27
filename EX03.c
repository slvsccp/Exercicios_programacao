#include <stdio.h>

int main() {

  int numero;

  printf("Digite um número: ");
  scanf("%d", &numero);

  if(numero == 1000) {
    printf("O número é igual a 1000");
  } else {
    printf("O número é diferente de 1000");
  }

  return 0;
}

#include <stdio.h>

int main()
//escreva um programa para calcular o fatorial de um número
{
  int numero, fatorial=1, contador=1;

  printf("Digite o número para calc o fatorial: ");
  scanf("%d", &numero);

  while(contador <= numero){
    fatorial = fatorial * contador;
    contador = contador + 1;
  }
  printf("O fatorial de %d é %d", numero, fatorial);

  return 0;
}

#include <stdio.h>

int main()
{
  //Crie um algoritmo para somar valores até o usuário digitar 0
  float valorDigitado, soma;

  printf("Digite um valor para a soma: ");
  scanf("%f", &valorDigitado);

  while(valorDigitado != 0){
    soma += valorDigitado;
    printf("\nTotal: %.2f", soma);

    printf("\nDigite um valor para a soma: ");
    scanf("%2f", &valorDigitado);
  }
  printf("\nResultado: %.2f", soma);

  return 0;
}

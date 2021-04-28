//Calculadora com soma, subtração, multiplicação e divisão.

#include <stdio.h>

int main()
{
  float numero1, numero2, resultado;
  char operacao;

  printf("Digite o primeiro número: ");
  scanf("%f", &numero1);

  printf("Digite a operação: ");
  scanf("%s", &operacao);

  printf("Digite o segundo número: ");
  scanf("%f", &numero2);

  switch(operacao)
  {
    case '+':
    resultado = numero1+numero2;
    break;

    case '-':
    resultado = numero1-numero2;
    break;

    case '*':
    resultado = numero1*numero2;
    break;

    case '/':
    resultado = numero1/numero2;
    break;

    default:
    printf("ERRO! opção inválida, tente: + - * /");
  }

  printf("Resultado: %.2f", resultado);


  return 0;
}

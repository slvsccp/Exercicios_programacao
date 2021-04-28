//simular um caixa eletrônico quando vamos sacar dinheiro.

#include <stdio.h>

int main()
{
  float saldoDisponivel = 1000;
  float valorDoSaque;

  printf("Informe o valor do saque: ");
  scanf("%f", &valorDoSaque);

  if(valorDoSaque <= saldoDisponivel){
    saldoDisponivel = saldoDisponivel - valorDoSaque;
    printf("Sacando R$ %.2f", valorDoSaque);
  } else {
    printf("O valor solicitado é maior que o valor disponível para saque!");
  }

  return 0;
}

#include <stdio.h>

int main(void) {

  float receita, despesa, lucro;

  printf("Digite a receita da empresa R$ ");
  scanf("%f", &receita);

  printf("Digite a despesa da empresa R$ ");
  scanf("%f", &despesa);

  lucro = receita - despesa;

  printf("O lucro foi R$ %.2f", lucro);


  return 0;
}

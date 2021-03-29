#include <stdio.h>

int main() {

  float receita, despesa, soma;

  printf("Digite a receita da empresa R$ ");
  scanf("%f", &receita);

  printf("Digite a despesa da empresa R$ ");
  scanf("%f", &despesa);

  if(receita > despesa) {
    printf("Empresa com lucro");
  } else {
    printf("Empresa com prejuízo");
  }

  return 0;
}

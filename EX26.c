#include <stdio.h>

int main(void) {
  // Peça para o usuário digitar 10 valores, depois imprima na tela somente aqueles maiores do que 10.

  int v[10];
  
  printf("Digite 10 números inteiros: \n");
  for(int i = 0;i < 10;i++) {
    scanf("%d", &v[i]);
  }

  printf("Números maiores do que 10: \n");
  for(int i = 0;i < 10;i++) {
    if (v[i] > 10) {
      printf("%d\n", v[i]);
    }
  }

  return 0;
}

#include <stdio.h>

int main() {

  int num1, num2;

  printf("Digite o primeiro núm: ");
  scanf("%d", &num1);

  printf("Digite o segundo núm: ");
  scanf("%d", &num2);

  if(num1 > num2) {
    printf("O maior é: %d", num1);
  } else {
    printf("O maior é: %d", num2);
  }

  return 0;
}

#include <stdio.h>

int main() {

  float num1, num2, dividirMaior;

  printf("Digite o primeiro núm: ");
  scanf("%f", &num1);

  printf("Digite o segundo núm: ");
  scanf("%f", &num2);

  if(num1 > num2) {
    dividirMaior = num1 / num2;
  } else {
    dividirMaior = num2 / num1;
  }

  printf("A divisão do maior pelo menor: %2.f\n", dividirMaior);

  return 0;
}

#include <stdio.h>

int main(void) {
//escreva um algoritmo que solicita ao usuário o valor dos dois catetos, calcula e apresenta na tela o valor da hipotenusa do triângulo retângulo.

  float a,b,c;

  printf("Digite o valor do primeiro cateto do triângulo: ");
  scanf("%f", &b);

  printf("Digite o valor do segundo cateto do triângulo: ");
  scanf("%f", &c);

  a = (b*b + c*c);

  printf("O valor da hipotenusa é: %.2f", a);



  return 0;
}

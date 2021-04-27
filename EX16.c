#include <stdio.h>

//Crie um programa que solicita o ano de nascimento do usuário e informe a sua idade no ano de 2021.

int main(void) {

  int anoNascimento, idade;

  printf("Digite seu ano de nascimento: ");
  scanf("%d", &anoNascimento);

  idade = anoNascimento - 2021;

  printf("Sua idade é: %d ", idade);

  return 0;
}

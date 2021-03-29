// Escreva um programa que leia o salário de um funcionário.
//Deverá ser concecido ao funcionário um reajuste de salário baseado nas informações a seguir:

#include <stdio.h>

int main() {
  float salarioVelho, taxaReajuste, salarioNovo;

  printf("Digite o salário do funcionário R$ ");
  scanf("%f", &salarioVelho);

  if(salarioVelho <= 1000) {
    taxaReajuste = 15;
  } else if(salarioVelho <= 2000){
    taxaReajuste = 10;
  } else {
    taxaReajuste = 5;
  }

  salarioNovo = salarioVelho + (salarioVelho * (taxaReajuste / 100));

  printf("Salário velho R$ %.2f \n", salarioVelho);
  printf("Taxa de reajuste %.2f%% \n", taxaReajuste);
  printf("Salário novo R$ %2.f \n", salarioNovo);


  return 0;
}

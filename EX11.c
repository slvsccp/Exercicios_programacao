#include <stdio.h>

int main() {
  float salarioBruto, descontoINSS, taxaINSS, salarioLiquido;

  printf("Digite o salário bruto R$ ");
  scanf("%f", &salarioBruto);

  if(salarioBruto <= 1317.07) {
    taxaINSS = 8;
  } else if (salarioBruto <= 2195.12) {
    taxaINSS = 9;
  } else {
    taxaINSS = 11;
  }

  descontoINSS = salarioBruto * (taxaINSS / 100);
  salarioLiquido = salarioBruto - descontoINSS;

  printf("Salário bruto R$ %.2f \n", salarioBruto);
  printf("Taxa de INSS %.2f%% \n", taxaINSS);
  printf("Desconto de INSS R$ %.2f \n", descontoINSS);
  printf("Salário liquido R$ %.2f \n", salarioLiquido);

  return 0;
}

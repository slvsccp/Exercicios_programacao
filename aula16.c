#include <stdio.h>
#include <stdlib.h>

/* Crie um programa que solicite duas notas do aluno, calcule a média e informe se o aluno
  está "aprovado" ou "reprovado" (média 6.0) */

int main()
{
  
  float nota1, nota2, media;

  printf("Digite a nota um: ");
  scanf("%f", &nota1);

  printf("Digite a nota dois: ");
  scanf("%f", &nota2);

  media = (nota1 + nota2) / 2;

  if(nota1 && nota2 < 6.0){
    printf("Aluno reprovado");
  } else {
    printf("Aluno aprovado");
  }

  return 0;
}

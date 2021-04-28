/* O usuário digita as 4 notas (de 0 a 10) bimestrais do aluno e o algoritmo deve calcular a média. Depois o algoritmo deve verificar se a média é maior ou igual a 6. ​Caso afirmativo​, exibe na tela uma mensagem informando que o aluno foi aprovado, ​caso contrário​, uma mensagem informando que ele foi reprovado */

#include <stdio.h>

int main()
{
  float nota1, nota2, nota3, nota4, media;

  printf("Digite a primeita nota: ");
  scanf("%f", &nota1);

  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);

  printf("Digite a terceira nota: ");
  scanf("%f", &nota3);

  printf("Digite a quarta nota: ");
  scanf("%f", &nota4);

  media = (nota1+nota2+nota3+nota4) / 4;

  if(media >= 6){
    printf("Aluno aprovado!");
  } else {
    printf("Aluno reprovado!");
  }



  return 0;
}

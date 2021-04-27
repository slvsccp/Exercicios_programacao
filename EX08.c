#include <stdio.h>

int main(void) {

  float volume = 3.14159;
  float raio, altura, resul;

  printf("Digite o raio da lata: ");
  scanf("%f", &raio);

  printf("Digite a altura da lata: ");
  scanf("%f", &altura);

  resul = volume * raio * raio * altura;

  printf("Valor do volume: %.2f \n", resul);

  return 0;
}

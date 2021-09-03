#include <stdio.h>

// Escreva uma função que recebe um valor inteiro. Ela deve mostrar na tela se o valor é par ou ímpar.

int parImpar(int x) {

    if(x % 2 == 0) {
      printf("O número é PAR");
    } else {
      printf("O número é IMPAR");
    }

    return 0;
  }

int main() {
  
  parImpar(2);



  return 0;
}

#include <stdio.h>
#include <stdlib.h>
//Faça um programa que leia um valor N inteiro e calcule por meio de uma função o seu dobro, após isso, imprima o número e o seu dobro na tela.
int dobro(int x)
{
    x = 2*x;
    return x ;
}
int main()
{
    int n;

    printf("Digite um numero: ");
    scanf("%d",&n);

    n = dobro(n);

    printf("O dobro é: %d\n", n);
    return 0 ;
}

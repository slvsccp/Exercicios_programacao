#include <stdio.h>
#include <stdlib.h>

int main()
{
    float volume, comprimento, largura, altura;

    printf("Digite o valor do comprimento: ");
    scanf("%f", &comprimento);

    printf("Digite o valor da largura: ");
    scanf("%f", &largura);

    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    volume = comprimento * largura * altura;

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{

	int qtdepessoa;
	float conta;
	float rateio;
    	float multa;
    	int novaConta = 1;
    	int loop = 1;
	

    printf("Digite quantidade de pessoas: ");
    scanf("%d",&qtdepessoa);
    
 while(loop == 1){

    printf("Digite valor da conta R$ ");
    scanf("%f", &conta);	

    printf("Digite o valor da multa R$ ");
    scanf("%f", &multa);

    rateio = (conta + multa)/qtdepessoa;	

    printf("Cada um terá que pagar R$ %.2f.\n\n", rateio);

    printf("Digite 1 para incluir nova conta: ");
    scanf("%d",&loop);

}


	return 0;
}

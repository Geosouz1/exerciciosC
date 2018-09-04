#include <stdio.h>
#include <stdlib.h>


void main () {

float cotacao = 0;
float dolar = 0;
float reais = 0;

printf("\n***************************************************************\n");
printf("******************Conversão Dolar para Real********************\n\n");

printf("Entre com o valor da cotação atual: ");
scanf("%f",& cotacao);
printf("\n");

printf("Entre com o valor em Dolares que deseja converter: ");
scanf("%f", & dolar);
printf("\n");

reais = dolar * cotacao;

if(dolar >=2 ) {
	printf(" %2.f Dolares equivale a %2.f Reais \n \n", dolar, reais);

	}else if(dolar < 2){
		printf(" %2.f Dolar equivale a %2.f Reais \n \n", dolar, reais);
	}
}

#include <stdio.h>
#include <stdlib.h>

void main ()
{
int estoqueMinimo;
int estoqueMaximo;
float media;

printf("\n*****************************************************************");
printf("\n*********************** ESTOQUE MÉDIO ***************************\n\n");

printf("Qual o valor do estoque Minimo de peças: ");
scanf("%d",& estoqueMinimo);
printf("\n");

printf("Qual o valor do estoque Máximo de peças: ");
scanf("%d", & estoqueMaximo);
printf("\n \n");

media = (estoqueMinimo + estoqueMaximo)/2;

printf("O valor do estoque Médio é  %2.f peças; \n \n",media);

}

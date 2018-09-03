#include <stdio.h>
#include <stdlib.h>

void main (){
int quantidadeMinima = 0;
int quantidadeMaxima =10;
float estoqueMedio = 0;

printf("Entre com o valor do estoque minimo: ");
scanf("d%",& quantidadeMinima);
printf("Entre com o valor do estoque maximo");
scanf("d%",& quantidadeMaxima);

estoqueMedio=(quantidadeMinima + quantidadeMaxima)/2;

printf("\n O estoque médio é %f",estoqueMedio);

return ;
}

#include <stdio.h>
#include <stdlib.h>

void main (){

int codigoVendedor = 0;
int codigoPeca = 0;
int quantidadePeca = 0;
float comissao = 0;

printf("\n\n********************************************************************\n");
printf("\n********************** Comissão do Vendedor ************************\n\n");

printf("Digite o código do vendedor: ");
scanf("%d", & codigoVendedor);
printf("\n");

printf("Digite o código da peça: ");
scanf("%d", & codigoPeca);
printf("\n");

printf("Digite a quantidade de peças: ");
scanf("%d",& quantidadePeca);
printf("\n");

switch (codigoVendedor)
{
	case 1:
		
		switch (codigoPeca)
		{
			case 1:
				comissao = (quantidadePeca * 2) * 0.05;
				
				printf("\n");
				printf("A vendedora Maria do Rosario vendeu %d Limões e teve %2.f de comissão", quantidadePeca, comissao);
				printf("\n \n");
				break;
			case 2:
				comissao = (quantidadePeca * 3) * 0.05;
				
				printf("A vendedora Maria do Rosario Vendeu %d Laranjas e teve %2.f de comissao \n \n", quantidadePeca, comissao);
				break;
		}
		break;
	        case 2:

                switch (codigoPeca) 
                {
                        case 1:
                                comissao = (quantidadePeca * 2) * 0.05;

                                printf("\n");
                                printf("A vendedora Joana Helena vendeu %d Limões e teve %2.f de comissão", quantidadePeca, comissao);
                                printf("\n \n");
                                break;
                        case 2:
                                comissao = (quantidadePeca * 3) * 0.05; 

                                printf("A vendedora Joana Helena Vendeu %d Laranjas e teve %2.f de comissao \n \n", quantidadePeca, comissao);
                                break;
			default:
				printf("Esse código de fruta não existe escolha os código 1 ou 2: ");
		}
		break;
		default:
			printf("Esse código de vendedor não existe escolha  1 ou 2: ");
}
}


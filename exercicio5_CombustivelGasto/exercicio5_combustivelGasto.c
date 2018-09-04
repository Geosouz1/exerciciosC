#include <stdio.h>
#include <stdlib.h>


void main () {

	float velocidade, tempo, distancia, combustivel;


	printf("\n************************************************************");
	printf("\n****************Consulmo de combustivel*********************\n\n");

	printf("Digite a velocidade média do veiculo:  ");
	scanf("%f",&velocidade);

	printf("\n\nDigite o tempo gasto:  ");
	scanf("%f",&tempo);

	distancia = tempo *velocidade;
	combustivel = distancia/12;

	printf("\n\nO carro andou %2.fkm de distancia e gastou %2.f de combustivel: \n \n",distancia, combustivel);
}

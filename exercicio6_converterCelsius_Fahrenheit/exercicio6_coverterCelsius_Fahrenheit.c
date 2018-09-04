#include <stdio.h>
#include <stdlib.h>

void main () {

	float celsius;

	printf("Digite a temperatura em graus Celsius: ");
	scanf("%f",& celsius);

	printf(" %2.f Celsius é igual a %2.f fahrenheit \n", celsius, (9*celsius + 160)/5);
}




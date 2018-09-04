#include <stdio.h>
#include <stdlib.h>

void main () {

	float fahrenheit;

	printf("Digite a temperatura em graus Fahrenheit: ");
	scanf("%f",& fahrenheit);

	printf(" %2.f Fahrenheit é igual a %2.f Celsius \n", fahrenheit, (fahrenheit - 32)*5/9);
}




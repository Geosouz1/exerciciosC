#include <stdio.h>
#include <stdlib.h>


void main (){

int letras[4];

printf("Digite os valores das letras a, b, c e d respctivamente: ");

int i;
for( i>0; i< 4; i++){

int aux = 0;
scanf("%d",& aux);
letras[i]= aux;

}

	int A= letras[0];
	int B= letras[1];
	int C= letras[2];
	int D= letras[3];

	printf("%d", D);  
}

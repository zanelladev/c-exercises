#include <stdio.h>
#include <stdlib.h>

void positivenegative(double);

int main(){

	double n1;

	printf("Digite um numero: ");
	scanf("%lf", &n1);
	fflush(stdin);

	positivenegative(n1);

	return 0;
}

void positivenegative(double n1){
	(n1 > 0) ? printf("\nPositivo!\n") : printf("\nNegativo!\n");
}
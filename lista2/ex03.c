#include <stdio.h>
#include <stdlib.h>

void par(int);

int main(){

	int n;

	printf("Digite um numero: ");
	scanf("%i", &n);
	fflush(stdin);

	par(n);

	return 0;
}

void par(int n){
	(n % 2 == 0) ? printf("Par!") : printf("Impar!");
}
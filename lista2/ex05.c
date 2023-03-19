#include <stdio.h>
#include <stdlib.h>

int main(){

	double n;

	printf("Digite um numero: ");
	scanf("%lf", &n);
	fflush(stdin);

	(n == (int)n) ? printf("\nInteiro!\n") : printf("\nQuebrado!\n");    

	return 0;
}
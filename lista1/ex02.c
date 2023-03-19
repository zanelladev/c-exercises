#include <stdio.h>
#include <stdlib.h>

int main(){

	double num;
	
	printf("Digite um numero: ");
	scanf("%lf", &num);
	fflush(stdin);
	
	printf("Numero informado = %lf", num);
	
	return 0;
}
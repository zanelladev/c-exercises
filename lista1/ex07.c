#include <stdio.h>
#include <stdlib.h>

int main(){

	double num1, num2, soma;
	
	printf("Digite um numero: ");
	scanf("%lf", &num1);
	fflush(stdin);

	printf("Digite outro numero: ");
	scanf("%lf", &num2);
	fflush(stdin);
	
	soma = num1 + num2;
	
	printf("\nA soma entre %0.2lf e %0.2lf equivale a %0.2lf",num1, num2, soma);
	
	return 0;
}
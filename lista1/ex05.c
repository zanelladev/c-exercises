#include <stdio.h>
#include <stdlib.h>

int main(){

	double n;
	
	printf("Digite um numero com cinco casas decimais: ");
	scanf("%lf", &n);
	fflush(stdin);
	
	printf("O numero informado com apenas duas casas decimais equivale a %0.2lf", n);
	
	return 0;
}
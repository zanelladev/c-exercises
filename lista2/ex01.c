#include <stdio.h>
#include <stdlib.h>

void maior(double, double);

int main(){
	double n1, n2;
	
	printf("Digite um numero: ");
	scanf("%lf", &n1);
	fflush(stdin);

	printf("Digite outro numero: ");
	scanf("%lf", &n2);
	fflush(stdin);
	
	maior(n1, n2);
	
	return 0;
}

void maior(double n1, double n2){
	(n1 > n2) ? printf("O maior numero: %0.1lf", n1) : printf("O maior numero: %0.1lf", n2);
}
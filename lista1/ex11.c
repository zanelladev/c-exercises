#include <stdio.h>
#include <stdlib.h>

int main(){

	double celsius, fahrenheit;
	
	printf("Digite a temperatura Fahrenheit: ");
	scanf("%lf", &fahrenheit);
	fflush(stdin);
	
	celsius = 5 * (fahrenheit - 32) / 9;
	
	printf("Temperatura em Celsius e %0.2lf\n", celsius);
	
	return 0;
}
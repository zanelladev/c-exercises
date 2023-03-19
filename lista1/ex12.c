#include <stdio.h>
#include <stdlib.h>

int main(){

	double celsius, fahrenheit;
	
	printf("Digite a temperatura em Celsius: ");
	scanf("%lf", &celsius);
	fflush(stdin);
	
	fahrenheit = (celsius * 9/5) + 32;
	
	printf("Temperatura em Fahrenheint e %0.2lf\n", fahrenheit);
	
	return 0;
}

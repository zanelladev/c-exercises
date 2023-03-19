#include <stdio.h>
#include <stdlib.h>

int main(){

	double raio, area;
	
	printf("Digite o raio do circulo: ");
	scanf("%lf", &raio);
	fflush(stdin);
	
	area = 3.14 * (raio * raio);
	
	printf("Area do circulo = %0.2lf", area);
	
	return 0;
}
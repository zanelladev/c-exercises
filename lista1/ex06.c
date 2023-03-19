#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	double lado, area;
	
	printf("Digite a medida do lado do quadrado: ");
	scanf("%lf", &lado);
	fflush(stdin);

	area = pow(lado, 2);
	
	printf("Area = %.2lf e o seu dobro equivale a %.2lf", area, (2 * area));
	
	return 0;
}
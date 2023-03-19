#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	int n1, n2;
	double n3;

	printf("Digite um numero inteiro: ");
	scanf("%i", &n1);
	fflush(stdin);

	printf("Digite outro numero inteiro: ");
	scanf("%i", &n2);	
	fflush(stdin);

	printf("Digite um numero real: ");
	scanf("%lf", &n3);	
	fflush(stdin);

	printf("\nO produto do dobro do primeiro com a metade do segundo e %0.2lf\n", (n1 * 2.0) * ((double)n2 / 2.0));
	printf("A soma do triplo do primeiro com o segundo e %0.2lf\n", (n1 * 3) +  n3);
	printf("O terceiro elevado ao cubo e %0.2lf\n", pow(n3, 3));
	
	return 0;
}

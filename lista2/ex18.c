#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	double valorA, valorB, valorC, delta, resul1, resul2;

	printf("Digite o valor de A: \n");
	scanf("%lf", &valorA);
	fflush(stdin);

	printf("Digite o valor de B: \n");
	scanf("%lf", &valorB);
	fflush(stdin);

	printf("Digite o valor de C: \n");
	scanf("%lf", &valorC);
	fflush(stdin);

	delta = pow(valorB, 2) - (4 * valorA * valorC);	
	resul1 = ((valorB * (-1)) + sqrt(delta)) / (valorA * 2);
	resul2 = ((valorB * (-1)) - sqrt(delta)) / (valorA * 2);

	if (delta > 0) {
		printf("\nDelta positivo.");
		printf("\nValor do x1: %lf\nValor do x2: %lf\n\n", resul1, resul2);
	} else {
		printf("\nDelta negativo. A equacao nao possui raizes reais.\n");
	}

	

	return 0;
}
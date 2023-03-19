#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	double largura, altura, area, consumo;
	int latas;
	
	printf("Digite a largura da parede: ");
	scanf("%lf", &largura);
	fflush(stdin);

	printf("Digite a altura da parede: ");
	scanf("%lf", &altura);
	fflush(stdin);
	
	area = largura * altura;
	consumo = area * 3;
	latas = ceil(consumo / 3.6);
	
	printf("\nMinimo %i de de latas de tinta\n", latas);
	
	return 0;
}

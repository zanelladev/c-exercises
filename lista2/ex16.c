#include <stdio.h>
#include <stdlib.h>

int main () {

	int temperatura;

	printf("Qual temperatura o aluminio deve ser trabalhado?\n");
	scanf("%i", &temperatura);
	fflush(stdin);

	if (temperatura <= 500) {
		printf("Temperatura Invalida!");
	} else if (temperatura < 700) {
		printf("Aquecimento Ligado em 100%%.");
	} else if (temperatura < 735) {
		printf("Aquecimento Ligado em 50%%");
	} else if (temperatura >= 735 && temperatura <= 780) {
		printf("Aquecimento Desligado");
	} else if (temperatura > 780 && temperatura < 1000) {
		printf("SUPERAQUECIMENTO");
	} else {
		printf("Os valores digitados devem ser inteiros e inferiores de 1000.");
	}

	return 0;
}
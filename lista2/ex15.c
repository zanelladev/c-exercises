#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	double custo;
	int codigoDeOrigem;
	char origem[13];

	printf("Digite o preco de custo do produto: ");
	scanf("%lf", &custo);
	fflush(stdin);
	
	printf("Digite o codigo de origem do produto: ");
	scanf("%i", &codigoDeOrigem);
	fflush(stdin);

	if (codigoDeOrigem == 1) {
		strcpy(origem, "Sul");
	} else if (codigoDeOrigem == 2) {
		strcpy(origem, "Norte");
	} else if (codigoDeOrigem == 3) {
		strcpy(origem, "Leste");
	} else if (codigoDeOrigem == 4) {
		strcpy(origem, "Oeste");
	} else if (codigoDeOrigem == 5 || codigoDeOrigem == 6) {
		strcpy(origem, "Nordeste");
	} else if (codigoDeOrigem == 7 || codigoDeOrigem == 8) {
		strcpy(origem, "Centro-oeste");
	} else {
		strcpy(origem, "Importado!");
	}

	printf("\nPreco do produto: %.2lf\nOrigem do produto: %s\n", custo, origem);

	return 0;
}
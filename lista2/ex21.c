#include <stdio.h>
#include <stdlib.h>

int main(){

	int infeccao, temperatura, coriza, espirros;

	printf("Voce tem algum dos sintomas abaixo:\n"):
	printf("Infeccao nos pulmoes (0 - nao, 1 - sim): ");
	scanf("%i", &infeccao);
	fflush(stdin);

	printf("\nTemperatura (0 - normal, 1 - anormal): ");
	scanf("%i", &temperatura);
	fflush(stdin);

	printf("\nCoriza (0 - nao, 1 - sim): ");
	scanf("%i", &coriza);
	fflush(stdin);

	printf("\nEspirros (0 - nao, 1 - sim): ");
	scanf("%i", &espirros);
	fflush(stdin);

	int somaDosSintomas = temperatura + espirros + coriza + infeccao;

	if (infeccao == 1 && temperatura == 1) {
		printf("\nPneumonia.\n");
	} else if (somaDosSintomas == 1) {
		printf("\nResfriado.\n");
	} else if (somaDosSintomas >= 2 && !(temperatura && infeccao)) {
		printf("\nGripe.\n");
	}
	
	return 0;
}
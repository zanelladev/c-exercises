#include <stdio.h>
#include <stdlib.h>

int main(){

	double notas[3], soma, media;
	
	for(int i = 0; i < 3; i++){
		printf("Digite sua nota do bimestre %i: ", (i + 1));
		scanf("%lf", &notas[i]);
		fflush(stdin);
		soma += notas[i];
	}

	media = soma / 3;

	if (media == 10) {
		printf("\nAprovado com distinção!");
	} else if (media >= 7) {
		printf("\nAprovado!");
	} else {
		printf("\nReprovado!");
	}
			
	return 0;
}

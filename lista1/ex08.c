#include <stdio.h>
#include <stdlib.h>

int main(){

	double notas[4], soma;
	
	for(int i = 0; i < 4; i++){
		printf("Digite sua nota do bimestre %i: ", (i + 1));
		scanf("%lf", &notas[i]);
		fflush(stdin);
		soma += notas[i];
	}
	
	printf("\nMedia: %0.1lf", (soma / 4));
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int idades[4], mediaIdade, soma;

	for(int i = 0; i < 4; i++){
		printf("Qual a idade do aluno %i?: ", (i + 1));
		scanf("%i", &idades[i]);
		fflush(stdin);
		soma += idades[i];
	}

	mediaIdade = round(soma / 4);

	if (mediaIdade < 25) {
		printf("\nTurma Jovem!");
	} else if (mediaIdade > 25 && mediaIdade < 40) {
		printf("\nTurma Adulta!");
	} else {
		printf("\nTurma Idosa!");
	}
			
	return 0;
}
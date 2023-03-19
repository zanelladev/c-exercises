#include <stdio.h>
#include <stdlib.h>

int main(){

	int num1, num2, i;

	printf("Digite um numero: ");
	scanf("%i", &num1);
	fflush(stdin);

	printf("Digite outro numero: ");
	scanf("%i", &num2);
	fflush(stdin);

	printf("\nValores inteiros no intervalo de %i e %i: ", num1, num2);

	if(num1 < num2){
		for (i = num1 + 1; i < num2; i++) {
			printf("%i ", i);
		}
	} else if(num2 < num1){
		for (i = num2 + 1; i < num1; i++) {
			printf("%i ", i);
		}
	} else{
		printf("Nao ha intervalo inteiro");
	}

	return 0;
}
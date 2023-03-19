#include <stdio.h>
#include <stdlib.h>

int main(){

	int num1, aux;

	printf("Digite um numero: \n");
	scanf("%i", &num1);
	fflush(stdin);

	if (num1 >= 1000) {
		printf("Valor invalido, por favor insira um valor menor que 1000.");
		return 0;
	}

	aux = num1;

	int centenas = num1 / 100;
	num1 %= 100;

	int dezenas = num1 / 10;
	num1 %= 10;

	int unidades = num1;

	printf("%d - ", aux);

	if (centenas > 0) {
    	printf("%d centena", centenas);
    	if (centenas > 1) printf("s");
    	if ((dezenas > 0 || unidades > 0) && centenas <= 99) printf(", ");
    	else if (dezenas > 0 || unidades > 0) printf(" e ");
	}	

	if (dezenas > 0) {
    	printf("%d dezena", dezenas);
    	if (dezenas > 1) printf("s");
    	if (unidades > 0) printf(" e ");
	}

	if (unidades > 0) {
    	printf("%d unidade", unidades);
    	if (unidades > 1) printf("s");
	}

	printf("\n");
	
	return 0;
}
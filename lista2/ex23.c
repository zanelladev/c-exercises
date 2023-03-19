#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int valor, nota100, nota50, nota10, nota5, nota1;

	printf("Digite o valor do saque: R$ ");
	scanf("%i", &valor);
	fflush(stdin);

	if (valor < 10 || valor > 600) {
		printf("\nValor Invalido!");
		return 0;
	} 

	nota100 = valor / 100;
	valor %= 100;

	nota50 = valor / 50;
	valor %= 50;

	nota10 = valor / 10;
	valor %= 10;

	nota5 = valor / 5;
	valor %= 5;

	nota1 = valor / 1;

	printf("\nRecebera;\n%i Notas de R$100\n%i Notas de R$50\n%i Notas de R$10\n%i Notas de R$5\n%i Notas de R$1\n", valor, nota100, nota50, nota10, nota5, nota1);

	return 0;
}
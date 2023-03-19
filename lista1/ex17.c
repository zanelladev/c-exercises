#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char nome[100];
	int qParafusos, qRoscas, qPorcas;
	double pParafusos, pRoscas, pPorcas, descontoParafusos, descontoRoscas, descontoPorcas, totalLiquido;
	
	printf("Digite o seu nome: ");
	fgets(nome, 25, stdin);
    nome[strlen(nome)-1] = '\0';
	fflush(stdin);

	printf("Quantos parafusos voce deseja comprar? ");
	scanf("%i", &qParafusos);
	fflush(stdin);

	printf("Quantas roscas voce deseja comprar? ");
	scanf("%i", &qRoscas);
	fflush(stdin);

	printf("Quantas porcas voce deseja comprar? ");
	scanf("%i", &qPorcas);
	fflush(stdin);
	
	pParafusos = qParafusos * 3;
	descontoParafusos = pParafusos * (1 - 0.02);

	pPorcas = qPorcas * 1;
	descontoPorcas = pPorcas * (1 - 0.025);

	pRoscas = qRoscas * 0.5;
	descontoRoscas = pRoscas * (1 - 0.027);

	totalLiquido = descontoParafusos + descontoRoscas + descontoPorcas;

	printf("\nCliente: %s\n", nome);
	printf("\nQuant\tProduto   \tUnit.\tBruto\tLiquido\n");
	printf("%i\tParafuso   \t3,00\t%0.2lf\t%0.2lf\n", qParafusos, pParafusos, descontoParafusos);
	printf("%i\tRosca   \t1,00\t%0.2lf\t%0.2lf\n", qRoscas, pRoscas, descontoRoscas);
	printf("%i\tPorca   \t0,50\t%0.2lf\t%0.2lf\n", qPorcas, pPorcas, descontoPorcas);
	printf("\t\t\tTotal:\tR$%0.2lf\n", totalLiquido);

	return 0;
}
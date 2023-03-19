#include <stdio.h>
#include <stdlib.h>

double calculadora(double, double, int);

int main(){
	double n1, n2, resultado;
	int operador;

	printf("Digite o primeiro numero: ");
	scanf("%lf", &n1);
	fflush(stdin);

	printf("Digite o segundo numero: ");
	scanf("%lf", &n2);
	fflush(stdin);

	printf("[ 1 ] - Adicao\n");
	printf("[ 2 ] - Subtracao\n");
	printf("[ 3 ] - Multiplicacao\n");
	printf("[ 4 ] - Divisao\n");
	printf("[ 5 ] - Fim\n");

	printf("\nQual sera a operaracao? ");
	scanf("%i", &operador);
	fflush(stdin);

	resultado = calculadora(n1, n2, operador);

	printf("\nResultado = %.2lf.", resultado);

	return 0;
}

double calculadora(double n1, double n2, int operador){
	double resultado;
	switch(operador){
		case 1:
			return resultado = n1 + n2;
			break;
		case 2:
			return resultado = n1 - n2;
			break;
		case 3:
			return resultado = n1 * n2;
			break;
		case 4:
			if(n2 != 0){
				return resultado = n1 / n2;
				break;
			} else{
				printf("\nErro: Divisao por 0!\n");
				exit(1);
			}
		case 5:
			printf("\nFim!");
			exit(0);
		default:
			printf("\nErro: Operador Invalido!\n");
			exit(1);
	}


}
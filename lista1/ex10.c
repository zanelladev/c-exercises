#include <stdio.h>
#include <stdlib.h>

int main(){

	int dias, valor = 25; 
	double salarioBruto, salarioLiquido;
	const double imposto = 0.08;
	
	printf("Digite o numero de dias trabalhados: ");
	scanf("%i", &dias);
	fflush(stdin);

	salarioBruto = dias * valor;
	salarioLiquido = salarioBruto * (1 - imposto);
	
	printf("Salario liquido = R$%0.2lf", salarioLiquido);
	return 0;
}

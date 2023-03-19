#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int horas;
	double valor, salario;
	
	printf("Quanto voce recebe por hora? ");
	scanf("%lf", &valor);
	fflush(stdin);

	printf("Quantas horas voce trabalha por mes? ");
	scanf("%i", &horas);
	fflush(stdin);
	
	salario = horas * valor;
	
	printf("Seu salario do mes = %0.2lf", salario);
	
	return 0;
}
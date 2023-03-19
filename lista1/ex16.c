#include <stdio.h>
#include <stdlib.h>

int main(){
	
	double salarioBruto, ir, inss, sindicato, salarioLiquido;
	
	printf("Salario Bruto: R$");
	scanf("%lf", &salarioBruto);
	fflush(stdin);
	
	ir = salarioBruto * 0.15;
	inss = salarioBruto * 0.11;
	sindicato = salarioBruto * 0.03;
	salarioLiquido = salarioBruto - ir - inss - sindicato;
	
	printf("\nSalario Bruto: R$%0.2lf\n", salarioBruto);
	printf("(-) IR\t\t (15%%): R$%0.2lf\n", ir);
	printf("(-) INSS\t (11%%): R$%0.2lf\n", inss);
	printf("(-) Sindicato\t  (3%%): R$%0.2lf\n", sindicato);
	printf("Salario Liquido: R$%0.2lf\n", salarioLiquido);
	
	return 0;
}

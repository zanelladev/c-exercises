#include <stdio.h>
#include <stdlib.h>

int main(){

	int maquinas, qm1, qm5, qm20, custototal;
	const int customaquina = 3900;

	printf("Quanto maquinas serao vendidas? ");
	scanf("%i", &maquinas);
	fflush(stdin);

	
	custototal =  customaquina * maquinas;
	qm1 = 2 * maquinas;
	qm5 = 3 * maquinas;
	qm20 = maquinas;
	
	printf ("\nQuantidade de motores a serem comprados:\n");
	printf ("%i motores de 1 CV \n%i motores de 5 CV \n%i motores de 20 CV\n", qm1, qm5, qm20);
	printf ("\nCusto por cada tipo de motor:\n");
	printf ("Motor 1cv: R$%i.00\nMotor 5cv: R$%i.00\nMotor 20cv: R$%i.00\n", (qm1 * 300), (qm5 * 600), (qm20 * 1500));
	printf ("\nCusto por maquina: R$%i.00\n", customaquina);
	printf ("Custo total: R$%i.00\n", custototal);

	return 0;
}

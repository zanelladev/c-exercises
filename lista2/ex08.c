#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1, n2, n3;

	printf("Digite um valor inteiro: ");
	scanf("%i", &n1);
	fflush(stdin);

	printf("Digite outro valor inteiro: ");
	scanf("%i", &n2);
	fflush(stdin);

	printf("Digite outro valor inteiro: ");
	scanf("%i", &n3);
	fflush(stdin);

	if (n1 > n2) {   // swapping method: value of n2 turn to n1
		n1 = n1 + n2;
		n2 = n1 - n2;
		n1 = n1 - n2;
	}

	if (n1 > n3) {   // swapping method: value of n3 turn to n1
		n1 = n1 + n3;
		n3 = n1 - n3;
		n1 = n1 - n3;
	}

	if (n2 > n3) {   // swapping method: value of n3 turn to n2
		n2 = n2 + n3; 
		n3 = n2 - n3;
		n2 = n2 - n3;
	}

	printf("Ordem crescente: %i, %i, %i", n1, n2, n3);
	
	return 0;
}

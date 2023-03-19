#include <stdio.h>
#include <stdlib.h>

int main(){
	double a, b, c;

	printf("Digite o primeiro lado do triangulo: ");
	scanf("%lf", &a);
	fflush(stdin);

	printf("Digite o segundo lado do triangulo: ");
	scanf("%lf", &b);
	fflush(stdin);

	printf("Digite o terceiro lado do triangulo: ");
	scanf("%lf", &c);
	fflush(stdin);

	if ((a + b > c) && (a + c > b) && (b + c > a)) {
		if ((a == b) && (b == c)) {
			printf("\nTriangulo equilatero\n");
		} else if ((a != b) && (b != c) && (a != c)) {
			printf("\nTriangulo escaleno\n");
		} else {
			printf("\nTriangulo isosceles\n");
		}
	} else {
		printf("\nOs valores informados não podem formar um triangulo\n");
	}

	return 0;
}

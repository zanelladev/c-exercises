#include <stdio.h>
#include <stdlib.h>

int main(){

	double cm, m;
	
	printf("Digite um valor em metros: ");
	scanf("%lf", &m);
	fflush(stdin);
	
    cm = m * 100;
	
	printf("%0.2lfm em centimetros equivale a %0.2lfcm", m, cm);
	
	return 0;
}
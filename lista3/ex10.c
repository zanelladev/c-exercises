#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

  int base, expoente;

  printf("Digite um numero: ");
  scanf("%i", &base);
  fflush(stdin);

  printf("Digite outro numero: ");
  scanf("%i", &expoente);
  fflush(stdin);

  printf("\n%i elevado a %i = %.lf!\n", base, expoente, pow(base, expoente));
    
	return 0;
}
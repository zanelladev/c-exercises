#include <stdio.h>
#include <stdlib.h>

int primos;

void verificaPrimo (int num) {
  int divisores = 0; 

  for(int i = 1; i <= num; i++) {
    if(num % i == 0) {
      divisores++;
      primos++;
    }
  }

  if(divisores == 2) {
    printf("%i ", num);
  }
}

int main(){
  int numero;

  printf("Digite um numero inteiro: ");
  scanf("%i", &numero);
  fflush(stdin);

  printf("\nPrimos entre 1 e %i: ", numero);

  for(int i = 1; i <= numero; i++) {
    verificaPrimo(i);
  }

  printf("\n\nForam feitas %i divisoes\n", primos);

	return 0;
}
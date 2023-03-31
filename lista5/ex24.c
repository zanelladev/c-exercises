#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void imprimeResultado(int resultado) {
  printf("\nResultado: %d", resultado);
}

int calculaPotencia(int base, int expoente) {
  return pow(base, expoente);
}

int main() {

  int base, expoente;

  printf("Digite o valor do base: ");
  scanf("%d", &base);
  fflush(stdin);

  printf("Digite o valor do expoente: ");
  scanf("%d", &expoente);
  fflush(stdin);

  imprimeResultado(calculaPotencia(base, expoente));
  
  return 0;
}
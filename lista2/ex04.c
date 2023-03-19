#include <stdio.h>
#include <stdlib.h>

int main() {

  int n;

  printf("Digite um numero: ");
  scanf("%i", &n);
  fflush(stdin);

  (n % 2 == 0) ? printf("\nTransformado em impar: %i", n + 1) : printf("\nTransformado em par: %i", n + 1);

  return 0;
}
#include <stdio.h>
#include <stdlib.h>

int par(int num) {
  return (num % 2 == 0) ? 1 : 0;
}

int main() {

  int num;

  printf("Digite um numero: ");
  scanf("%d", &num);
  fflush(stdin);

  par(num) ? printf("\nPar!") : printf("\nImpar!");

  return 0;
}
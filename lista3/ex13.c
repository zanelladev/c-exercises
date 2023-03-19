#include <stdio.h>
#include <stdlib.h>

int main(){ 

  double soma = 0;
  int i, j, k;

  for (i = 37, j = 38, k = 1; i >= 1 && j >= 2 && k <= 37; i--, j--, k++) {
      soma += (double) (i * j) / k;
  }

  printf("A soma da serie S = (37*38)/1 + (36*37)/2 + (35*36)/3 + ... + (1*2)/37 = %.4lf", soma);

  return 0;
} 
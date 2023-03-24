#include <stdio.h>
#include <stdlib.h>

int main() {

  double vetor[10];

  for(int i = 0; i < 10; i++) {
    printf("Digite um numero: ");
    scanf("%lf", &vetor[i]);
    fflush(stdin);
  }

  printf("\nOrdem inversa: ");

  for(int i = 9; i >= 0; i--) {
    printf("%.2lf, ", vetor[i]);
  }

  return 0;
}
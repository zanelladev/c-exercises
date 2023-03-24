#include <stdio.h>
#include <stdlib.h>

int main() {

  int vetor[5], soma = 0, multiplicacao = 1;

  for(int i = 0; i < 5; i++) {
    printf("Digite um numero: ");
    scanf("%d", &vetor[i]);
    fflush(stdin);
  }

  for(int i = 0; i < 5; i++) {
    soma += vetor[i];
    multiplicacao *= vetor[i];
  }

  printf("\nSoma = %d", soma);
  printf("\nMultiplicacao = %d", multiplicacao);
  
  return 0;
}
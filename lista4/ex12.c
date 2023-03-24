#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  int vetorA[10], soma = 0;

  for(int i = 0; i <  10; i++) {
    printf("Digite o elemento %i: ", i + 1);
    scanf("%i", &vetorA[i]);
    fflush(stdin);

    vetorA[i] = (int)pow(vetorA[i], 2);
    soma += vetorA[i];
  }

  printf("\nSoma dos quadrados = %i", soma);
  
  return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  int vetorA[10], vetorB[10], vetorC[10], vetorD[10];

  printf("Entre com os elementos do Vetor A\n");

  for(int i = 0; i < 10; i++) {
    printf("(%d) Digite um numero: ", i + 1);
    scanf("%d", &vetorA[i]);
    fflush(stdin);
  }

  printf("Entre com os elementos do Vetor B\n");

  for(int i = 0; i < 10; i++) {
    printf("(%d) Digite um numero: ", i + 1);
    scanf("%d", &vetorB[i]);
    fflush(stdin);
  }

  printf("\nVetor C: ");

  for(int i = 0; i < 10; i++) {
    vetorC[i] = pow(vetorA[i], vetorA[i]);
    printf("%d%s", vetorC[i], i != 9 ? ", " : "");
  }

  printf("\nVetor D: ");

  for(int i = 0; i < 10; i++) {
    vetorD[i] = pow(vetorA[i], vetorB[i]);
    printf("%d%s", vetorD[i], i != 9 ? ", " : "");
  }

  return 0;
}
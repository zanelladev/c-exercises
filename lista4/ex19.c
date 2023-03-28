#include <stdio.h>
#include <stdlib.h>

int main() {

  int vetorA[10], vetorB[10], vetorC[10], vetorD[30];

  printf("Entre com os valores do Vetor A\n");

  for(int i = 0; i < 10; i++) {
    printf("(%d) Digite um numero: ", i + 1);
    scanf("%d", &vetorA[i]);
    fflush(stdin);
  }

  printf("Entre com os valores do Vetor B\n");

  for(int i = 0; i < 10; i++) {
    printf("(%d) Digite um numero: ", i + 1);
    scanf("%d", &vetorB[i]);
    fflush(stdin);
  }

  printf("Entre com os valores do Vetor C\n ");

  for(int i = 0; i < 10; i++) {
    printf("(%d) Digite um numero: ", i + 1);
    scanf("%d", &vetorC[i]);
    fflush(stdin);
  }

  printf("\nVetor D = ");

  for(int i = 0; i < 10; i++) {
    vetorD[i] = vetorA[i];
    vetorD[i + 1] = vetorB[i];
    vetorD[i + 2] = vetorC[i];

    printf("%d ", vetorD[i]);
    printf("%d ", vetorD[i + 1]);
    printf("%d ", vetorD[i + 2]);
  }
  
  return 0;
  
}
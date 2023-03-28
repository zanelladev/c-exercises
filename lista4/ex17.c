#include <stdio.h>
#include <stdlib.h>

int main() {

  int vetorA[5], vetorB[10], vetorC[15], tamC = 0, tamD = 0, vetorD[5];

  printf("Entre com os elementos do vetor A:\n");

  for(int i = 0; i < 5; i++) {
    printf("Digite o elemento %i: ", i + 1);
    scanf("%d", &vetorA[i]);
    fflush(stdin);
  }

  printf("\nEntre com os elementos do vetor B:\n");

  for(int i = 0; i < 10; i++) {
    printf("Digite o elemento %i: ", i + 1);
    scanf("%d", &vetorB[i]);
    fflush(stdin);
  }

  for(int i = 0; i < 5; i++) {
    vetorC[tamC++] = vetorA[i];
  }

  for(int i = 0; i < 10; i++) {

    int encontrado = 0;

    for(int j = 0; j < 5; j++) {
      if(vetorB[i] == vetorA[j]) {
        encontrado = 1;
        break;
      }
    }

    if(!encontrado) vetorC[tamC++] = vetorB[i];
      
  }

  printf("\nVetor C: ");

  for(int i = 0; i < tamC; i++) printf("%i ", vetorC[i])
    
  for(int i = 0; i < 5; i++) {

    int encontrado = 0;

    for(int j = 0; j < 10; j++) {
      if(vetorA[i] == vetorB[j]) {
        encontrado = 1;
        break;
      }
    }

    if(!encontrado) vetorD[tamD++] = vetorA[i];

  }

  printf("\nVetor D: ");

  for(int i = 0; i < tamD; i++) {
    printf("%i ", vetorD[i]);
  }

  printf("\n");

  return 0;
}
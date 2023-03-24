#include <stdio.h>
#include <stdlib.h>


int main() {

  int tamanho;

  printf("Quantos numeros serao inseridos? ");
  scanf("%i", &tamanho);
  fflush(stdin);

  int vetorA[tamanho], vetorB[tamanho];

  for(int i = 0; i < tamanho; i++) {
    printf("Digite o elemento %i: ", i + 1);
    scanf("%i", &vetorA[i]);
    fflush(stdin);
  }

  for(int i = 0; i < tamanho; i++) {
    vetorB[i] = vetorA[i] - vetorA[tamanho - i - 1];
  }

  printf("Vetor B: { ");
  for(int i = 0; i < tamanho; i++) {
    printf("%i", vetorB[i]);
    if (i != tamanho - 1) {
      printf(", ");
    }
  }
  printf(" }\n");
  
  return 0;
}
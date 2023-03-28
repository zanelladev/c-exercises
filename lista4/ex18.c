#include <stdio.h>
#include <stdlib.h>

int main() {

  int vetorA[10], vetorB[10], vetorC[20];

  for(int i = 0; i < 10; i++) {
    printf("Vetor A - Digite um elemento: ");
    scanf("%i", &vetorA[i]);
    fflush(stdin);
  }

  for(int i = 0; i < 10; i++) {
    printf("Vetor B - Digite um elemento: ");
    scanf("%i", &vetorB[i]);
    fflush(stdin);
  }

  printf("\nVetor C = ");

  for(int i = 0; i < 10; i++) {
    vetorC[i] = vetorA[i];
    vetorC[i + 1] = vetorB[i];

    printf("%i ", vetorC[i]);
    printf("%i ", vetorC[i + 1]);
  }
  
  return 0;
  
}
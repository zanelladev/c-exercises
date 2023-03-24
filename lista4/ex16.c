#include <stdio.h>
#include <stdlib.h>

int main() {

  int vetor[20], soma = 0, calc;

  for(int i = 0; i < 20; i++) {
    printf("Digite o elemento %i: ", i + 1);
    scanf("%i", &vetor[i]);
    fflush(stdin);
  }

  for(int i = 0, j = 19; i < 10; i++, j--) {
    calc = ((vetor[i] - vetor[j]) * 2);

    if(i % 2 == 0) {
      soma -= calc;
    } else {
      soma += calc;
    }
  }

  printf("\nS = %d", soma);
  
  return 0;
}
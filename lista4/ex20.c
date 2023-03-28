#include <stdio.h>
#include <stdlib.h>

int main() {

  int vetor[10], temp;

  printf("Entre com os valores do Vetor:\n");
  for(int i = 0; i < 10; i++) {
    printf("(%d) Digite um numero: ", i + 1);
    scanf("%d", &vetor[i]);
    fflush(stdin);
  }

  for(int j = 0; j < 10; j++) {
    for(int i = 0; i < 10 - 1; i++) {
      if(vetor[i] > vetor[i + 1]) {
        temp = vetor[i];
        vetor[i] = vetor[i + 1];
        vetor[i + 1] = temp;
      }
    }
  }

  printf("\nVetor em ordem crescente: ");
  
  for(int i = 0; i < 10; i++) {
    printf("%d%s", vetor[i], i != 9 ? ", " : "");
  }
  
  return 0;
}
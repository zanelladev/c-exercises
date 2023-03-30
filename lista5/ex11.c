#include <stdio.h>
#include <stdlib.h>

void calculaMedia() {

  int quantidade, soma = 0;

  printf("Digite a quantidade de valores que serao inseridos: ");
  scanf("%d", &quantidade);
  fflush(stdin);

  int vetor[quantidade];

  for(int i = 0; i < quantidade; i++) {
    printf("(%d) Digite um valor: ", (i + 1));
    scanf("%d", &vetor[i]);
    fflush(stdin);

    soma += vetor[i];
  }

  printf("\nMedia dos valores: %lf", (double)soma / (double)quantidade);
}

int main() {

  calculaMedia();
  
  return 0;
}
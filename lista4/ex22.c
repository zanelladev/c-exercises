#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char vetor[50], tam;

  printf("Digite uma palavra: ");
  fgets(vetor, 50, stdin);
  vetor[strlen(vetor)-1] = '\0';

  tam = strlen(vetor);

  printf("A palavra \"%s\" possui %i caracteres.", vetor, tam);

  return 0;
}
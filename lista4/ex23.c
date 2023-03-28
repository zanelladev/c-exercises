#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char palavra1[50], palavra2[50];  

  printf("Digite a palavra 1: ");
  fgets(palavra1, 50, stdin);
  palavra1[strlen(palavra1)-1] = '\0';

  printf("Digite a palavra 2: ");
  fgets(palavra2, 50, stdin);
  palavra2[strlen(palavra2)-1] = '\0';
  
  printf("\nO tamanho da string \"%s\" vale %d.", palavra1, (int)strlen(palavra1));

  printf("\nO tamanho da string \"%s\" vale %d.", palavra2, (int)strlen(palavra2));
  
  strcmp(palavra1, palavra2) ? printf("\nAs strings sao diferentes.") : printf("\nAs strings sao iguais.");

  return 0;
}
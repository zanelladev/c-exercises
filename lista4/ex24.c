#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

  char nome[50];

  printf("Digite seu nome: ");
  fgets(nome, 50, stdin);
  nome[strlen(nome)-1] = '\0';

  printf("%s", strrev(nome));

  return 0;
}
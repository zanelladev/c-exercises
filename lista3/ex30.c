#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

  char nome[100];
  int numeroDaSorte, i, soma = 0;

  printf("Digite seu nome completo (sem espacos): ");
  fgets(nome, 100, stdin);
  nome[strlen(nome - 1)] = '\0';

  for(i = 0; i < (int)strlen(nome); i++) {
    soma += toupper(nome[i]) - 64;
  }

  numeroDaSorte = soma % 9;

  printf("\nNumero da Sorte: %i", numeroDaSorte);

  return 0;
}
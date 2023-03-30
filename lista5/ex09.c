#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void ajustaNome() {

  char nome[50];

  printf("Digite seu nome: ");
  fgets(nome, 50, stdin);
  nome[strlen(nome)-1] = '\0';

  nome[0] = toupper(nome[0]);

  for(int i = 0; i < 50; i++){
    if(nome[i] == ' ') nome[i + 1] = toupper(nome[i + 1]);
  }

  printf("\nNome ajustado: %s", nome);

}

int main() {
  
  ajustaNome();

  return 0;
}
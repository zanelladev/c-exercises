#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char listaDeNomes[100][tam], nome[100];

  for(int i = 0; i < tam; i++) {
    printf("Digite o nome %i: ", i + 1);
    fgets(listaDeNomes[i], 50, stdin);
    listaDeNomes[i][strlen(listaDeNomes[i])-1] = '\0';
  }

  printf("\nDigite o nome a ser procurado: ");
  fgets(nome, 50, stdin);
  nome[strlen(nome)-1] = '\0';
  
  for(int i = 0; i < tam; i++) {
    strstr(listaDeNomes[i], nome) ? printf("\nO nome %s foi encontrado na posicao %i.", nome, i) : printf("\nNome nao encontrado.");
  }

  return 0;
}
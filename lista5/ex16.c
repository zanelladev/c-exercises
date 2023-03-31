#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void escreveMensagem(int linhas, int colunas, char mensagem[]) {

  for(int i = 0; i < linhas - 1; i++) {
    printf("\n");
  }

  for(int i = 0; i < colunas - 1; i++) {
    printf(" ");
  }
  
  printf("%s", mensagem);
}

int main() {

  int linhas, colunas;
  char mensagem[200];

  printf("Digite o numero da linha: ");
  scanf("%d", &linhas);
  fflush(stdin);

  printf("Digite o numero da coluna: ");
  scanf("%d", &colunas);
  fflush(stdin);

  printf("Digite uma mensagem: ");
  fgets(mensagem, 200, stdin);
  mensagem[strlen(mensagem)-1] = '\0';

  escreveMensagem(linhas, colunas, mensagem);
  
  return 0;
}
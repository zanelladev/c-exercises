#include <stdio.h>
#include <stdlib.h>

void desenhaLinhas(char tipo, int quantidade) {
  for(int i = 0; i < quantidade; i ++) {
    printf("\n");
    for(int j = 0; j < 20; j++) {
      printf("%c", tipo);
    }
  }
}

int main() {

  int quantidade;
  char tipo;

  printf("Digite um caractere: ");
  scanf("%c", &tipo);
  fflush(stdin);

  printf("Digite a quantidade de linhas: ");
  scanf("%d", &quantidade);
  fflush(stdin);

  desenhaLinhas(tipo, quantidade);

  return 0;
}
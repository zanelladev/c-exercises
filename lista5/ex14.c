#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {

  char palavra[50];
  int opcao;

  printf("Digite uma palavra: ");
  fgets(palavra, 50, stdin);
  palavra[strlen(palavra)-1] = '\0';

  printf("\n--------------MENU-------------\n");
  printf("[1] - Todas as letras em maiuscula\n");
  printf("[2] - Todas as letras em minuscula\n");
  printf("[3] - Inverte palavra             \n");
  printf("[4] - Tamanho da palavra          \n");
  printf("[5] - Fim                         \n");
  printf("---------------------------------\n");
  printf("Digite a opcao desejada: ");
  scanf("%d", &opcao);
  fflush(stdin);

  switch(opcao) {
    case 1:
      printf("\nString maiuscula: %s", strupr(palavra));
      break;
    case 2:
      printf("\nString minuscula: %s", strlwr(palavra));
      break;
    case 3:
      printf("\nString invertida: %s", strrev(palavra));
      break;
    case 4:
      printf("\nTamanho da string: %d", (int)strlen(palavra));
      break;
    case 5:
      printf("\nFim!");
      break;
    default:
      printf("\nOpcao invalida!");
  }

  return 0;
}
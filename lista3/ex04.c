#include <stdio.h>
#include <stdlib.h>

int main(){

  int nota, quantidade, soma;

  printf("Quantas notas serao inserida? ");
  scanf("%i", &quantidade);
  fflush(stdin);

  for (int i = 0; i < quantidade; i++) {
    printf("Informe a nota de numero (%i): ", (i + 1));
    scanf("%i", &nota);
    fflush(stdin);

    soma += nota;
  }

  double media = (double)soma / (double)quantidade;

  printf("\nMedia da turma: %.1lf\n", media);

  return 0;
}
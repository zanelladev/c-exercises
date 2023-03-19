#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

  int turmas, alunos, media, soma;

  printf("Digite a quantidade de turmas: ");
  scanf("%i", &turmas);
  fflush(stdin);

  for (int i = 0; i < turmas; i++) {
    printf("Quantidade de alunos da turma %i: \n", i + 1);
    scanf("%i", &alunos);
    fflush(stdin);

    if (alunos > 40) {
      return printf("\nQuantidade invalida, as turmas não podem ter mais de 40 alunos!\n");
    }

    soma += alunos;
  }

  media = round(soma / turmas);

  printf("\nMedia aproximada de alunos por turma: %i\n", media);

  return 0;
}
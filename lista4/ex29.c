#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int respostas[12];
  double nota;
  char nome[100];
} Aluno;

int main() {

  int tam, gabarito[12];

  for(int i = 0; i < 12; i++) {
    printf("Digite o gabarito da questao %i: ", i + 1);
    scanf("%d", &gabarito[i]);
    fflush(stdin);
  }

  printf("\nDigite a quantidade de alunos: ");
  scanf("%d", &tam);
  fflush(stdin);

  Aluno alunos[tam];

  for(int i = 0; i < tam; i++) {
    printf("\nDigite o nome do aluno %d: ", i + 1);
    fgets(alunos[i].nome, 100, stdin);
    alunos[i].nome[strlen(alunos[i].nome)-1] = '\0';

    for(int j = 0; j < 12; j++) {
      printf("Digite a resposta da questao %d: ", j + 1);
      scanf("%d", &alunos[i].respostas[j]);
      fflush(stdin);
       if (alunos[i].respostas[j] < 1 || alunos[i].respostas[j] > 5) {
        printf("Resposta inválida. Digite um número entre 1 e 5.\n");
        j--;
      } else if (alunos[i].respostas[j] == gabarito[j]) {
        alunos[i].nota += 0.833;
      }
  }
  }

  for(int i = 0; i < tam; i++) {
    printf("\nAluno:\t%s\nNota:\t%.1lf\n", alunos[i].nome, alunos[i].nota);
  }

  return 0;
}
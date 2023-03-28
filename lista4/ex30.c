#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char nome[100];
  double nota;
} Aluno;

int main() {

  double soma = 0, media = 0;
  Aluno alunos[15];

  for(int i = 0; i < 15; i++) {
    printf("Digite o nome do aluno %i: ", i + 1);
    fgets(alunos[i].nome, 100, stdin);
    alunos[i].nome[strlen(alunos[i].nome)-1] = '\0';

    printf("Digite a nota do aluno %i: ", i + 1);
    scanf("%lf", &alunos[i].nota);
    fflush(stdin);
    printf("\n");

    soma += alunos[i].nota;
  }

  media = soma / 15;

  printf("\nLista de Aprovados: ");
  for(int i = 0; i < 15; i++) {
    if(alunos[i].nota >= media) printf("\n%i. %s", i + 1, alunos[i].nome);
  }

  return 0;
}
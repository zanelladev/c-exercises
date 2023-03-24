#include <stdio.h>
#include <stdlib.h>

int main() {
 
  double notas[10][4], media[10], soma;
  int aprovados = 0;

  for(int i = 0; i < 10; i++) {
    for(int j = 0; j < 4; j++) {
      printf("Digite a nota %d do aluno %d: ", j + 1, i + 1);
      scanf("%lf", &notas[i][j]);
      fflush(stdin);

      soma += notas[i][j];
    }

    media[i] = soma / 4;

    soma = 0;

    if(media[i] >= 7) {
      aprovados++;
    }
  }

  printf("\nQuantidade de alunos aprovados: %i", aprovados);

  return 0;
}
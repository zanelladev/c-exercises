#include <stdio.h>
#include <stdlib.h>

int main() {
 
  double notas[10][4], media[10], soma[10];
  int aprovados = 0;

  for(int i = 0; i < 10; i++) {
    for(int j = 0; j < 4; j++) {
      printf("Digite a nota %d do aluno %d: ", j + 1, i + 1);
      scanf("%lf", &notas[i][j]);
      fflush(stdin);

      soma[i] += notas[i][j];
    }

    media[i] = soma[i] / 4;

    if(media[i] >= 7) {
      aprovados++;
    }
  }

  printf("\nAlunos aprovados: %i", aprovados);

  return 0;
}
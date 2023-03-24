#include <stdio.h>
#include <stdlib.h>

int main() {

  double notas[4], soma;
  int i;

  for(i = 0; i < 4; i++) {
    printf("Digite a sua nota: ");
    scanf("%lf", &notas[i]);
    fflush(stdin);
    
  }

  printf("\nNotas: ");

  for(i = 0; i < 4; i++) {
    printf("%.2lf, ", notas[i]);
    soma += notas[i];
  }

  printf("\nMedia: %.2lf", soma / 4.0);

  return 0;
}
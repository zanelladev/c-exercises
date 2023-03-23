#include <stdio.h>
#include <stdlib.h>

int main() {

  int numero, idade, total = 0;

  printf("Digite o numero de pessoas: ");
  scanf("%i", &numero);
  fflush(stdin);

  for(int i = 0; i < numero; i++) {
    printf("Digite a idade da pessoa %i: ", (i + 1));
    scanf("%i", &idade);
    fflush(stdin);

    total += idade;
  }

  double media = (double)total / (double)numero;

  media <= 25 ? printf("\nTurma jovem!\n") : media <= 60 ? printf("\nTurma adulta!\n") : printf("\nTurma idosa!\n");

  return 0;
}
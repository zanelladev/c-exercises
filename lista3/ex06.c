#include <stdio.h>
#include <stdlib.h>

int main(){

  int quantidade;
  double soma, valor;

  printf("Qual a quantidade de CD's: ");
  scanf("%i", &quantidade);
  fflush(stdin);

  for (int i = 0; i < quantidade; i++) {
    printf("Valor do CD %i: R$", i + 1);
    scanf("%lf", &valor);
    fflush(stdin);

    soma += valor;
  }

  double media = soma / (double)quantidade;

  printf("\nValor total investido:\tR$%.2lf\nCusto medio por CD:\tR$%.2lf\n", soma, media);

  return 0;
}

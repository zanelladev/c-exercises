#include <stdio.h>
#include <stdlib.h>
#include "../libs/validadata.h"

int main() {

  int dia, mes, ano;

  printf("Digite uma data (dd/mm/yy): ");
  scanf("%d/%d/%d", &dia, &mes, &ano);
  fflush(stdin);

  validaData(dia, mes, ano) ? printf("\nData valida!") : printf("\nData invalida!");

  return 0;
}
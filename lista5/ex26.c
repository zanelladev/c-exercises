#include <stdio.h>
#include <stdlib.h>
#include "../libs/calculasec.h"

int main() {

  int horas, minutos, segundos;

  printf("Digite o valor das horas, minutos e segundos (00:00:00): ");
  scanf("%d:%d:%d", &horas, &minutos, &segundos);
  fflush(stdin);

  printf("Segundos: %d", calculaSec(horas, minutos, segundos));
  
  return 0;
}
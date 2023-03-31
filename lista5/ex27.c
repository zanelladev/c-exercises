#include <stdio.h>
#include <stdlib.h>
#include "../libs/sechorario.h"

int main() {

  int segundos;

  printf("Digite um valor em segundos: ");
  scanf("%d", &segundos);
  fflush(stdin);

  Tempo tempo = formataHorario(segundos);

  printf("Horario Formatado: %02d:%02d:%02d\n", tempo.horas, tempo.minutos, tempo.segundos);

  return 0;
}
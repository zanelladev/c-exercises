#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calculaDistancia(int x1, int x2, int y1, int y2) {
  return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void recebeCoordenadas() {

  int x1, x2, y1, y2;

  printf("Entre com a Cordenada \"(x1, y1)\": ");
  scanf("(%d, %d)", &x1, &y1);
  fflush(stdin);

  printf("Entre com a Cordenada \"(x2, y2)\": ");
  scanf("(%d, %d)", &x2, &y2);
  fflush(stdin);

  double dist = calculaDistancia(x1, x2, y1, y2);

  printf("\nDistancia entre as coordenadas: %.2lf", dist);
}

int main() {
  
  recebeCoordenadas();

  return 0;
}
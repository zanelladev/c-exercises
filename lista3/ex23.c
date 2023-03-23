#include <stdio.h>
#include <stdlib.h>

int main() {

  double velocidade;
  
  do {
    printf("\nDigite a velocidade atual: ");
    scanf("%lf", &velocidade);
    fflush(stdin);

    if(velocidade < 30) {
      printf("Marcha 1\n");
    } else if(velocidade <= 40) {
      printf("Marcha 2\n");
    } else if(velocidade <= 60) {
      printf("Marcha 3\n");
    } else if(velocidade <= 80) {
      printf("Marcha 4\n");
    } else {
      printf("Marcha 5\n");
    }
  } while (velocidade != 0);

  if (velocidade == 0) printf("\nVeiculo parado\n");

  return 0;
}
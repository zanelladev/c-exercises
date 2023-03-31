#include <stdio.h>
#include <stdlib.h>

double massaInicial, massaFinal = 0;
int tempo = 0;

void calculaTempo() {
  massaFinal = massaInicial;

  while(massaFinal >= 0.5) {
    massaFinal = massaFinal / 2;
    tempo += 50;
  }

}

void recebeMassa() {
  printf("Digite a massa inicial em gramas: ");
  scanf("%lf", &massaInicial);
  fflush(stdin);

  calculaTempo();
}

void imprimeResultado() {
  recebeMassa();

  printf("\nMassa Inicial:\t%.2fg", massaInicial);
  printf("\nMassa Final:\t%.2fg", massaFinal);
  printf("\nTempo:\t\t%ds", tempo);
}


int main() {

  imprimeResultado();

  return 0;
}
#include <stdio.h>
#include <stdlib.h>

void lerPrecos(double precos[10]) {

  for (int i = 0; i < 10; i++) {
    printf("Digite o preco do produto %d: R$", i + 1);
    scanf("%lf", &precos[i]);
  }
}

void ordenaPrecos(double precos[10]) {
  double temp;

  for(int i = 0; i < 10; i++) {
    for(int j = i + 1; j < 10; j++) {
      if(precos[j] < precos[i]) {
        temp = precos[i];
        precos[i] = precos[j];
        precos[j] = temp;
      }
    }
  }
}


void mostraPrecos(double precos[10]) {
  printf("\nPrecos ordenados:\n");
  for (int i = 0; i < 10; i++) {
    printf("R$%.2lf\n", precos[i]);
  }
}

int main() {
  double precos[10];

  lerPrecos(precos);
  ordenaPrecos(precos);
  mostraPrecos(precos);

  return 0;
}
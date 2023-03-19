#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool verificaAno(int ano) {
      if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        return true;
    } else {
        return false;
    }
}

int main() {

  int ano;

  printf("Digite um ano: ");
  scanf("%i", &ano);
  fflush(stdin);

  verificaAno(ano) ? printf("Ano bissexto") : printf("Ano nao bissexto");

  return 0;
}
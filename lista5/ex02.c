#include <stdio.h>
#include <stdlib.h>

int verificaAno(int ano) {
    return ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) ? 1 : 0; 
}

int main() {

  int ano;

  printf("Digite um ano: ");
  scanf("%d", &ano);
  fflush(stdin);

  verificaAno(ano) ? printf("Ano bissexto") : printf("Ano nao bissexto");

  return 0;
}
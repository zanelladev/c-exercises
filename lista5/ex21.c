#include <stdio.h>
#include <stdlib.h>

void converteHexadecimal(int numero) {
  int resto, i = 0;
  char hex[100];

  while(numero > 0) {
    resto = numero % 16;
    if(resto < 10) {
      hex[i] = resto + 48;
    } else {
      hex[i] = resto + 55;
    }
    numero = numero / 16;
    i++;
  }

  printf("\nResultado em hexadecimal: ");
  for(int j = i - 1; j >= 0; j--) {
    printf("%c", hex[j]);
  }
}

int main() {

  int numero;

  printf("Digite um numero na base decimal: ");
  scanf("%d", &numero);
  fflush(stdin);

  converteHexadecimal(numero);

  return 0;
}
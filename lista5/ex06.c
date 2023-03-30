#include <stdio.h>
#include <stdlib.h>

int validaCaractere(char ascii) {
  int caractereDecimal = (int) ascii;

  return (caractereDecimal > 47 && caractereDecimal < 58) ? 1 : 0;
}

int main() {
  char caractere;

  printf("Digite um caractere: ");
  scanf("%c", &caractere);
  fflush(stdin);

  validaCaractere(caractere) ? printf("\nCaractere decimal") : printf("\nCaractere nao decimal");

  return 0;
}
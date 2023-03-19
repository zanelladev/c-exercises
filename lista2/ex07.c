#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
  char letra;

  printf("Digite uma letra: ");
  scanf("%c", &letra);
  fflush(stdin);

  letra = tolower(letra);

  (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') ? printf("Vogal\n") : printf("Consoante\n");

  return 0;
}
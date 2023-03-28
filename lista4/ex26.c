#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
  
  int espacos = 0, vogais = 0;
  char frase[80];

  printf("Digite uma frase: ");
  fgets(frase, 50, stdin);
  frase[strlen(frase)-1] = '\0';

  for(int i = 0; i < (int)strlen(frase); i++) {
    if(isspace(frase[i])) espacos++;
    if(toupper(frase[i]) == 'A' || toupper(frase[i]) == 'E' || toupper(frase[i]) == 'I' || toupper(frase[i]) == 'O' || toupper(frase[i]) == 'U') vogais++;
  }

  printf("\nQuantidade de espacos em branco: %i\nQuantidade de vogais: %i", espacos, vogais);

  return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

  char caracteres[10], c;
  int consoantes = 0;

  for(int i = 0; i < 10; i++) {
    printf("Digite um caractere: ");
    scanf("%c", &c);
    fflush(stdin);
    c = toupper(c);

    if(c >= 'A' && c <= 'Z') {
      caracteres[i] = c;
    } else {
      printf("\nErro! Caracter invalido.");
      i--;
    }
  }

  printf("\nConsoantes digitadas: ");

  for(int i = 0; i < 10; i++) {
    char letra = caracteres[i];

    if(letra != 'A' && letra != 'E' && letra != 'I' && letra != 'O' && letra != 'U') {
      printf("%c, ", caracteres[i]);
      consoantes++;
    }
  }

  printf("\nTotal de consoantes: %i", consoantes);

  return 0;
}
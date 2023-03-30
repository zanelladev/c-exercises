#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void stringMaiuscula() {

  char string[50];

  printf("Digite uma string: ");
  fgets(string, 50, stdin);
  string[strlen(string)-1] = '\0';

  printf("\nString ajustada: %s", strupr(string));
}

int main() {

  stringMaiuscula();

  return 0;
}
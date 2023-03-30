#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void funcA() { 
  double soma = 0;
  int denominador, numerador = 1;

  for(denominador = 1; denominador <= 50; denominador++, numerador += 2) {
    soma += (double)numerador / (double)denominador;
  }

  printf("\nResultado: %.2lf", soma);
}

void funcB() {
  double soma = 0;
  int denominador = 1, numerador = 1;

  for(denominador = 1; denominador <= 10; denominador++, numerador++) {
    numerador % 2 == 0 ? (soma -= (double)numerador / (double)denominador) : (soma += (double)numerador / (double)denominador);
  }

  printf("\nResultado: %.2lf", soma);
}

void funcC() {
  double soma = 0;
  int denominador = 1, numerador = 1000;

  for(denominador = 1; denominador <= 20; denominador++, numerador -= 5) {
    numerador % 2 == 0 ? (soma += (double)numerador / (double)denominador) : (soma -= (double)numerador / (double)denominador);
  }

  printf("\nResultado: %.2lf", soma);
}

void funcD() {
  double soma = 0;
  int denominador = 10, numerador = 480;

  for(denominador = 10; denominador <= 30; denominador++, numerador -= 5) {
    numerador % 2 == 0 ? (soma += (double)numerador / (double)denominador) : (soma -= (double)numerador / (double)denominador);
  }

  printf("\nResultado: %.2lf", soma);
}

int main() {

  char opcao;

  printf("\n-------------------MENU--------------------");
  printf("\n[ a ]  S = 1/1 + 3/2 + 5/3+...+ 99/50");
  printf("\n[ b ]  S = 1/1 -2/2 + 3/3 -...-10/10");
  printf("\n[ c ]  S = 1000/1 -997/2 + 994/3...");
  printf("\n[ d ]  S = 480/10 -475/11 + 470/12...");
  printf("\n[ e ]  FIM");
  printf("\n-------------------------------------------");

  printf("\nDigite a opcao desejada: ");
  scanf("%c", &opcao);
  fflush(stdin);

  opcao = tolower(opcao);

  switch(opcao) {
    case 'a':
      funcA();
      break;
    case 'b':
      funcB();
      break;
    case 'c':
      funcC();
      break;
    case 'd':
      funcD();
      break;
    case 'e':
      printf("Fim!");
      break;
    default:
      printf("Opcao invalida!");
  }

  return 0;
}
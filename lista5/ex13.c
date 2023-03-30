/*
  A função para saber se o número é par ou ímpar retornará 0(zero) se o número 
  for par e 1 se for ímpar. A função para saber se o número e positivo ou negativo 
  retornara 1 se o número for positivo, e -1 se for negativo
*/

#include <stdio.h>
#include <stdlib.h>

int menu() {

  int opcao;

  printf("\n-----------MENU-----------\n");
  printf("[1] - Par ou impar        \n");
  printf("[2] - Positivo ou negativo\n");
  printf("[3] - Sair                \n");
  printf("--------------------------\n");
  printf("Digite a opcao desejada: ");
  scanf("%d", &opcao);
  fflush(stdin);

  return opcao;
}

int parImpar() {

  int numero;

  printf("Digite um numero: ");
  scanf("%d", &numero);
  fflush(stdin);

  return (numero % 2 == 0) ? 1 : 0;
}

int positivoNegativo() {

  int numero;

  printf("Digite um numero: ");
  scanf("%d", &numero);
  fflush(stdin);

  return (numero >= 0) ? 1 : -1;
}

int main() {


  switch(menu()) {
    case 1:
      parImpar() == 1 ? printf("\nPar") : printf("\nImpar");
      break;
    case 2:
      positivoNegativo() == 1 ? printf("\nPositivo") : printf("\nNegativo");
      break;
    case 3:
      printf("\nFim!");
      break;
    default:
      printf("Opcao invalida!\n");
  }
  
  return 0;
}
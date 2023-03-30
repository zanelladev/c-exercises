#include <stdio.h>
#include <stdlib.h>

void menu() {
  printf("----------MENU---------\n");
  printf("[1] - Real para Dolar  \n");
  printf("[2] - Dolar para Real  \n");
  printf("-----------------------\n");
}

void realDolar() {

  double valor; 

  printf("Digite o valor: R$");
  scanf("%lf", &valor);
  fflush(stdin);

  printf("\nR$%.2lf equivale a US$%.2lf", valor, (valor / 5.09));
}

void dolarReal() {

  double valor; 

  printf("Digite o valor: US$");
  scanf("%lf", &valor);
  fflush(stdin);

  printf("\nUS$%.2lf equivale a R$%.2lf", valor, (valor * 5.09));
}

int main() {

  int opcao;

  menu();

  printf("Digite a opcao desejada: ");
  scanf("%d", &opcao);
  fflush(stdin);

  opcao == 1 ? realDolar() : opcao == 2 ? dolarReal() : printf("Opcao invalida!");

  return 0;
}
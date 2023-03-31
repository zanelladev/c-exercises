#include <stdio.h>
#include <stdlib.h>

int ehValido(int numero) {
  return numero > 0;
}

int calculaFatorial(int numero) {
  return numero == 1 ? numero : numero * calculaFatorial(numero - 1);
}

int main() {

  int numero;

  do {
    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &numero);
    fflush(stdin);
    
    if(!ehValido(numero)) {
      printf("\nNumero invalido!\n");
    }
  } while(!ehValido(numero));

  printf("\n%d! = %d", numero, calculaFatorial(numero));

  return 0;
}
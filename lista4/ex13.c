#include <stdio.h>
#include <stdlib.h>

int main() {

  int numeros[20], pares = 0, impares = 0, numerosPar[pares], numerosImpar[impares], indexPar = 0, indexImpar = 0;
  
  for(int i = 0; i < 20; i++) {
    printf("(%d) Digite um numero: ", i + 1);
    scanf("%d", &numeros[i]);
    fflush(stdin);

    numeros[i] % 2 == 0 ? pares++ : impares++;
  }

  for(int i = 0; i < 20; i++) {
    if(numeros[i] % 2 == 0) {
      numerosPar[indexPar] = numeros[i];
      indexPar++;
    } else {
      numerosImpar[indexImpar] = numeros[i];
      indexImpar++;
    }
  }
    
  printf("\nNumeros: ");
  for(i = 0; i < 20; i++) {
    printf("%d ", numeros[i]);
  }

  printf("\nNumeros PAR: ");
  for(i = 0; i < pares; i++) {
    printf("%d ", numerosPar[i]);
  }

  printf("\nNumeros IMPAR: ");
  for(i = 0; i < impares; i++) {
    printf("%d ", numerosImpar[i]);
  }

  return 0;
}
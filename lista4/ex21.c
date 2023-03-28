/*
  Temos dois vetores A e B, com 10 valores cada. Elabore um programa que 
  armazene num vetor C o valor de cada elemento de A elevado ao quadrado, e 
  num vetor D o valor de cada elemento de A multiplicado pelo elemento corresponde em B.

  Exemplo:  	A[1]	 B[1]	    C[1]	             D[1]
                2     3	     2*2 = 4             2*3=6
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  int vetorA[10], vetorB[10], vetorC[10], vetorD[10];

  printf("Entre com os elementos do Vetor A\n");

  for(int i = 0; i < 10; i++) {
    printf("(%d) Digite um numero: ", i + 1);
    scanf("%d", &vetorA[i]);
    fflush(stdin);
  }

  printf("Entre com os elementos do Vetor B\n");
  
  for(int i = 0; i < 10; i++) {
    printf("(%d) Digite um numero: ", i + 1);
    scanf("%d", &vetorB[i]);
    fflush(stdin);
  }

  printf("\nVetor C: ");

  for(int i = 0; i < 10; i++) {
    vetorC[i] = pow(vetorA[i], vetorA[i]);
    printf("%d%s", vetorC[i], i != 9 ? ", " : "");
  }

  printf("\nVetor D: ");

  for(int i = 0; i < 10; i++) {
    vetorD[i] = pow(vetorA[i], vetorB[i]);
    printf("%d%s", vetorD[i], i != 9 ? ", " : "");
  }

  return 0;
}
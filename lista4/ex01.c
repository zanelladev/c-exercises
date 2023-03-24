#include <stdio.h>
#include <stdlib.h>

int main(){

  int vetor[5];

  for(int i = 0; i < 5; i++) {
    printf("Digite um numero: ");
    scanf("%d", &vetor[i]);
    fflush(stdin);
  }
  
  for(int i = 0; i < 5; i++) {
    printf("\nNumero de indice (%d) %d\n", i, vetor[i]);
  }

	return 0;
}

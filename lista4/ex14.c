#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

  int vetor[100], num, temp, tamanho;
  bool loop = true;

  do{
    printf("(%d) Digite um numero inteiro ou digite 0 para parar de inserir: ", tamanho + 1);
    scanf("%d", &temp);
    fflush(stdin);

    if(temp != 0){
      vetor[tamanho] = temp;
      tamanho++;
    }else{
      loop = false;
    }

  }while(loop);

  printf("\nDigite um numero para multiplicar todos os outros: ");
  scanf("%d", &num);
  fflush(stdin);

  printf("\nVetor multiplicado: ");
  for(int i = 0; i < tamanho; i++) {
    vetor[i] *= num;
    printf("%i ", vetor[i]);
  }

  return 0;
}
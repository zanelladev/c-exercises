#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

  int temp, tamanho = 0, data_nasc[100], idades[100], soma = 0;
  bool loop = true;

  do{
    printf("(%d) Digite um ano de nascimento ou 0 para parar de inserir: ", tamanho + 1);
    scanf("%d", &temp);
    fflush(stdin);

    if(temp > 0){
      data_nasc[tamanho] = temp;
      tamanho++;
    }else{
      loop = false;
    }

  }while(loop);


  for(int i = 0; i < tamanho; i++) {
    idades[i] = 2023 - data_nasc[i];
    soma += idades[i];
  }

  
  printf("\nIdade de cada membro: ");
  for(int i = 0; i < tamanho; i++) {
    printf("%d, ", idades[i]);
  }
  printf("\nIdade media do grupo: %.1lf", (double)soma / (double)tamanho);

  return 0;
}


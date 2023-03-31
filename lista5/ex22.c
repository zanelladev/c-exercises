#include <stdio.h>
#include <stdlib.h>

void fibonacci(int n);

void quantidadeFibonnaci(){
  int quantidade;

  printf("Digite a quantidade de numeros: ");
  scanf("%d", &quantidade);
  fflush(stdin);

  fibonacci(quantidade);
}

void fibonacci(int n){

  int primeiro = 1, segundo = 1, temp;

  printf("Sequencia de Fibonacci: ");

  for(int i = 0; i < n; i++) {
    printf("%d ", primeiro);
    temp = primeiro + segundo;
    primeiro = segundo;
    segundo = temp;
  }
}

int main() {
  
  quantidadeFibonnaci();

  return 0;
}
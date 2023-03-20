#include <stdio.h>
#include <stdlib.h>

int main(){

  int n, divisores = 0;

  printf("Digite um numero inteiro: ");
  scanf("%i", &n);
  fflush(stdin);

  for(int i = 2; i < n; i++) {
    if(n % i == 0) {
      divisores++;
    }
  }
 
  if(divisores > 0) {
    printf("\nNao primo");
  } else {
    printf("\nPrimo");
  }

  return 0;
}
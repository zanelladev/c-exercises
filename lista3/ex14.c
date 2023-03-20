#include <stdio.h>
#include <stdlib.h>

int main(){
    
  int num, soma = 0, par = 0, impar = 0;

  for(int i = 0; i < 10; i++) {
    printf("Digite um numero: ");
    scanf("%i", &num);
    fflush(stdin);

    soma += num;

    if (num % 2 == 0) {
      par++;
    } else {
      impar++;
    }
  }

  printf("\nQuant. par: %i\nQuant. impar: %i\nSoma total %i\n", par, impar, soma);
	
	return 0;
}
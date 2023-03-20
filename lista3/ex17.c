#include <stdio.h>
#include <stdlib.h>

void calcFatorial() {
  int num1, total = 1;

  printf("Digite um numero: ");
  scanf("%i", &num1);
  fflush(stdin);

  printf("%i! = 0", num1);

  for(int i = num1; i > 0; i--) {
    i != 1 ? printf("%i x ", i) : printf("%i", i);
    total *= i;
  }

  printf(" = %i", total);

}

int main(){ 

  int loop;

  do {
    calcFatorial();

    printf("\n\nDeseja repetir?\n[1] - Sim\n[2] - Nao\n");
    scanf("%i", &loop);
    fflush(stdin);

  } while (loop == 1);
  
	return 0;
} 


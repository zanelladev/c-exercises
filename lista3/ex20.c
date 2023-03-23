#include <stdio.h>
#include <stdlib.h>

void tabuadaInversa() {
  double num1;

  printf("Digite um numero: ");
  scanf("%lf", &num1);
  fflush(stdin);

  for(int i = 10; i >= 1; i--) {
    printf("%.1lf x %i = %.2lf\n", num1, i, (i * num1));
  }
}

int main(){

  int loop;

  do {
    tabuadaInversa();

    printf("\nDeseja repetir?\n[1] - Sim\n[2] - Nao\n");
    scanf("%i", &loop);
    fflush(stdin);

    printf("\n");
  } while (loop == 1);
	
	return 0;
}


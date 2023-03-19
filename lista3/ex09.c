#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
 
  char loop;

  do {
    int somaInteiros = 0;
    for (int i = 100; i <= 200; i++) {
      if (i % 2 == 0) {
        somaInteiros += i;
      }
    }

    printf("\nA soma dos numeros pares entre 100 e 200 equivale a %i.\n", somaInteiros);

    printf("\nDeseja repetir?\n(S)im\n");
    scanf("%c", &loop);
    fflush(stdin);
    loop = toupper(loop);
    
  } while (loop == 'S');

	return 0;
} 
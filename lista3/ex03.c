#include <stdio.h>
#include <stdlib.h>

int main() {
  int num, maior, menor;

  for (int i = 0; i < 10; i++) {
    printf("Digite um número: ", (i + 1));
    scanf("%d", &num);
    
    if (num > maior) {
      maior = num;
    }
    if (num < menor) {
      menor = num;
    }
  }

  printf("Diferenca entre o maior e o menor numero: %d", (maior - menor));

  return 0;
}
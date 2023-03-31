#include <stdio.h>
#include <stdlib.h>

void ordenaNumeros(int numeros[], int n) {
  int temp;

  for(int j = 0; j < n; j++) {
    for(int i = 0; i < n - 1; i++) {
      if(numeros[i] > numeros[i + 1]) {
        temp = numeros[i];
        numeros[i] = numeros[i + 1];
        numeros[i + 1] = temp;
      }
    }
  }

  printf("\nNumeros ordenados: ");

  for(int i = 0; i < n; i++) {
    printf("%d ", numeros[i]);
  }
}

int main() {
  int numeros[3];

  for(int i = 0; i < 3; i++) {
    printf("(%d) Digite o numero: ", i + 1);
    scanf("%d", &numeros[i]);
    fflush(stdin);
  }

  ordenaNumeros(numeros, 3);

  return 0;
}
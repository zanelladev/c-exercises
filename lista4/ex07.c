#include <stdio.h>
#include <stdlib.h>

int main() {

  int idade[5];
  double altura[5];

  for(int i = 0; i < 5; i++) {
    printf("\nEntre com os dados da pessoa %i\n", i +  1);
    printf("Digite sua idade: ");
    scanf("%d", &idade[i]);
    fflush(stdin);

    printf("Digite sua altura (em metros): ");
    scanf("%lf", &altura[i]);
    fflush(stdin);
  }

  printf("\nOrdem inversa: ");
  for(int i = 4; i >= 0; i--) {
    printf("\nPessoa %i: %i anos - %.1lfm", i + 1, idade[i], altura[i]);
  }
  
  return 0;
}
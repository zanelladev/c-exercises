#include <stdio.h>
#include <stdlib.h>

int main() {

  double notas[10], soma = 0, media;
  int acimaMedia = 0;

  for(int i = 0; i < 10; i++) {
    printf("Digite uma nota (%i): ", i + 1);
    scanf("%lf", &notas[i]);
    fflush(stdin);

    soma += notas[i];
  }

  media = soma / 10.0;
  
  for(int i = 0; i < 10; i++) {
    if(notas[i] > media) {
      acimaMedia++;
    }
  }  

  printf("\n%d alunos acima da media!", acimaMedia);

  return 0;
}
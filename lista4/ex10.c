#include <stdio.h>
#include <stdlib.h>

int main() {

  double idades[30], alturas[30], soma_altura = 0, media_altura;
  int quantidade = 0;


  for(int i = 0; i < 30; i++) {
    printf("\nDigite a idade do aluno %i: ", i + 1);
    scanf("%lf", &idades[i]);
    fflush(stdin);

    printf("Digite a altura do aluno %i: ", i + 1);
    scanf("%lf", &alturas[i]);
    fflush(stdin);

    soma_altura += alturas[i];
  }

  media_altura = soma_altura / 30;

  for(int i = 0; i < 30; i++) {
    if(idades[i] > 13 && alturas[i] < media_altura) {
      quantidade++;
    }
  }
  
  printf("\nQuantidade de maiores de 13 anos com altura inferior a media total: %d", quantidade);

  return 0;
}
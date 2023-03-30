#include <stdio.h>
#include <stdlib.h>

void desenhaRetangulo(int ladoA, int ladoB) {
  char linhas[ladoA][ladoB];

  for(int i = 0; i < ladoA; i++) {
    for(int j = 0; j < ladoB; j++) {
      if(i == 0 || i == ladoA-1) {
        if(j == 0 || j == ladoB-1) {
          linhas[i][j] = '+';
        } else {
          linhas[i][j] = '-';
        }
      } else {
        if(j == 0 || j == ladoB-1) {
          linhas[i][j] = '|';
        } else {
          linhas[i][j] = ' ';
        }
      }
    }
  }

  for(int i = 0; i < ladoA; i++) {
    for(int j = 0; j < ladoB; j++) {
      printf("%c", linhas[i][j]);
    }
    printf("\n");
  }
}

int main() {

  int ladoA, ladoB;

  do{
    printf("Qual o tamanho do lado A? ");
    scanf("%d", &ladoA);
    fflush(stdin);

    if(ladoA <= 1 || ladoA >= 24) printf("Quantidade invalida!");

  }while(ladoA <= 1 || ladoA >= 24);


  do{
    printf("Qual o tamanho do lado B? ");
    scanf("%d", &ladoB);
    fflush(stdin);

    if(ladoB <= 1 || ladoB >= 79) printf("Quantidade invalida!");

  }while(ladoB <= 1 || ladoB >= 79);

  desenhaRetangulo(ladoA, ladoB);

  return 0;
}
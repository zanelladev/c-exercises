#include <stdio.h>
#include <stdlib.h>

int main() {

  int eleitores, opcao, qVoto1 = 0, qVoto2 = 0, qVoto3 = 0; 
   
  printf("Digite o numero de eleitores: ");
  scanf("%d", &eleitores);
  fflush(stdin);

  for(int i = 0; i < eleitores; i++) {
    printf("[1] - Candidato 1\n");
    printf("[2] - Candidato 2\n");
    printf("[3] - Candidato 3\n");

    printf("Digite o numero correspondente ao candidato que deseja votar: ");
    scanf("%d", &opcao);
    fflush(stdin);

    switch(opcao) {
      case 1:
        qVoto1++;
        break;
      case 2:
        qVoto2++;
        break;
      case 3:
        qVoto3++;
        break;
      default:
        printf("Opcao inexistente, voto anulado");
    }
  }

  printf("Candidato 1, %d voto(s) (%.2lf%%)\n", qVoto3, ((double)qVoto1 / (double)eleitores) * 100.0);
  printf("Candidato 2, %d voto(s) (%.2lf%%)\n", qVoto2, ((double)qVoto2 / (double)eleitores) * 100.0);
  printf("Candidato 3, %d voto(s) (%.2lf%%)\n", qVoto3, ((double)qVoto3 / (double)eleitores) * 100.0);

  return 0;
}
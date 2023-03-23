#include <stdio.h>
#include <stdlib.h>

int main(){

  int loop, filme1 = 0, filme2 = 0, filme3 = 0;
  
  do { 
    int opcao = 1, ingressos;
      
    printf("[1] - JOHN WICK 4: BABA YAGA\nPreco: R$31,00\nHorario: 14:30\n\n");
    printf("[2] - PANICO VI\nPreco: R$31,00\nHorario: 18:50\n\n");
    printf("[3] - HOMEM-FORMIGA E A VESPA: QUANTUMANIA\nPreco: R$31,00\nHorario: 18:30\n\n");

    do{
      printf("Qual filme deseja assistir? ");
      scanf("%i", &opcao);
      fflush(stdin);
    }while(opcao != 1 && opcao != 2 && opcao != 3);

    printf("Quantos ingressos deseja? ");
    scanf("%i", &ingressos);
    fflush(stdin);

    switch(opcao) {
      case 1:
        filme1 += (ingressos * 31);
        break;
      case 2:
        filme2 += (ingressos * 31);
        break;
      case 3:
        filme3 += (ingressos * 31);
        break;
    }

    printf("\nTotal: R$%i,00\n", (ingressos * 31));

    printf("\nDeseja repetir?\n[1] - Sim\n[2] - Nao\n");
    scanf("%i", &loop);
    fflush(stdin);
    } while (loop == 1);

  printf("\nValor acumulado:\nSala 1 - %i\nSala 2 - %i\nSala 3 - %i\n", filme1, filme2, filme3);
  printf("Filme com menor frequencia de publico: ");

  if (filme1 < filme2 && filme1 < filme3) {
    printf("JOHN WICK 4: BABA YAGA\n");
  } else if (filme2 < filme3) {
    printf("PANICO VI\n");
  } else {
    printf("HOMEM-FORMIGA E A VESPA: QUANTUMANIA\n");
  }

  return 0;
}
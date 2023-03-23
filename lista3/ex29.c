#include <stdio.h>
#include <stdlib.h>

int main(){

  int entrevistados, opcao, opcao2, flamengo = 0, fluminense = 0, vasco = 0, botafogo = 0, outro = 0, flamengoDeFora = 0;
  double salario, salarioFlamengo, salarioFluminense;
  char loop = 'S';

  do{
    entrevistados++;

    printf("\nQual seu clube de preferencia?");
    printf("\n[1] - Flamengo\n[2] - Fluminense\n[3] - Vasco\n[4] - Botafogo\n[5] - Outro\n");
    scanf("%i", &opcao);
    fflush(stdin);

    opcao == 1 ? flamengo++ : opcao == 2 ? fluminense++ : opcao == 3 ? vasco++ : opcao == 4 ? botafogo++ : outro++;

    printf("\nQual seu salario mensal? R$ ");
    scanf("%lf", &salario);
    fflush(stdin);

    if(opcao == 1) salarioFlamengo += salario;
    if(opcao == 2) salarioFluminense += salario;

    printf("\nQual sua procedencia?\n[1] - Rio de Janeiro\n[2] - Outro\n");
    scanf("%i", &opcao2);
    fflush(stdin);

    if(opcao2 == 2 && opcao == 1) flamengoDeFora++;

    printf("\nMais uma pessoa sera entrevistada? (S/N) ");
    scanf("%c", &loop);
    fflush(stdin);

  }while(loop == 's' || loop == 'S');

  printf("\nClube\t\tTorcedores");
  printf("\nFlamengo\t\t%i", flamengo);
  printf("\nFluminense\t\t%i", fluminense);
  printf("\nVasco\t\t\t%i", vasco);
  printf("\nBotafogo\t\t%i", botafogo);
  printf("\nOutro\t\t\t%i\n", outro);
  printf("\nMedia salarial dos torcedores do Flamengo: R$%.2f", (salarioFlamengo / (double)flamengo));
  printf("\nMedia salarial dos torcedores do Fluminense: R$%.2f", (salarioFluminense / (double)fluminense));
  printf("\nQuantidade de torcedores do Flamengo que nasceram fora do Rio: %i", flamengoDeFora);
  printf("\nQuantidade de entrevistados: %i", entrevistados);

  return 0;
}
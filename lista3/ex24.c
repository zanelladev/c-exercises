#include <stdio.h>
#include <stdlib.h>

int main(){

  int dias = 0, qTipo1 = 0, qTipo2 = 0, qTipo3 = 0, temp = 0;

  printf("Quantos dias serao contabilidazados? ");
  scanf("%d", &dias);

  for(int i = 1; i <= dias; i++){
    printf("Quantos picoles do tipo 1 foram vendidos no dia %d? ", i);
    scanf("%d", &temp);
    fflush(stdin);
    qTipo1 += temp;

    printf("Quantos picoles do tipo 2 foram vendidos no dia %d? ", i);
    scanf("%d", &temp);
    fflush(stdin);
    qTipo2 += temp;

    printf("Quantos picoles do tipo 3 foram vendidos no dia %d? ", i);
    scanf("%d", &temp);
    fflush(stdin);
    qTipo3 += temp;
  }

  printf("\nForam vendidos %d picoles do tipo 1, totalizando R$%.2lf\n", qTipo1, (double)qTipo1 * 1.00);
  printf("\nForam vendidos %d picoles do tipo 2, totalizando R$%.2lf\n", qTipo2, (double)qTipo2 * 1.20);
  printf("\nForam vendidos %d picoles do tipo 3, totalizando R$%.2lf\n", qTipo3, (double)qTipo3 * 2.50);

  double faturamento = (double)qTipo1 * 1.00 + (double)qTipo2 * 1.20 + (double)qTipo3 * 2.50;

  if((qTipo1 > qTipo2) && (qTipo1 > qTipo3)){
    printf("\nO Mais vendido foi o tipo 1, tendo um percentual sobre o faturamento total de %%%.2lf\n", (double)qTipo1 * 1.00 / faturamento * 100);
  }
  else if((qTipo2 > qTipo1) && (qTipo2 > qTipo3)){
    printf("\nO Mais vendido foi o tipo 2, tendo um percentual sobre o faturamento total de %%%.2lf\n", (double)qTipo2 * 1.20 / faturamento * 100);
  }
  else if((qTipo3 > qTipo1) && (qTipo3 > qTipo2)){
    printf("\nO Mais vendido foi o tipo 3, tendo um percentual sobre o faturamento total de %.2lf%%\n", (double)qTipo3 * 2.50 / faturamento * 100);
  }
  else{
    printf("\nTodos os picoles venderam a mesma quantidade\n");
  }

  printf("\nFaturamento total: R$%.2lf", faturamento);

}
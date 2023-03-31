#include <stdio.h>
#include <stdlib.h>

void ajustaData(int dia, int mes, int ano) {
  dia += 5;

  if(dia > 31 && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)){
        dia -= 31;
        mes += 1;
    } else if (dia > 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) {
        dia -= 30;
        mes += 1;
    } else if (dia > 28 && mes == 2) {
        if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
            dia -= 29;
        } else {
            dia -= 28;
        }
        mes += 1;
    }
    
    if (mes > 12) {
        mes -= 12;
        ano += 1;
    }

  printf("\nData reajustada: %02d/%02d/%02d\n", dia, mes, ano);

}

int main() {

  int dia, mes, ano;

  printf("Digite uma data (dd/mm/yy): ");
  scanf("%d/%d/%d", &dia, &mes, &ano);
  fflush(stdin);

  ajustaData(dia, mes, ano);

  return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool validaData(int dia, int mes, int ano){
    if (ano > 0 && mes >= 1 && mes <= 12 && dia > 0) {
      if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia <= 30) {
        return true;
      } else if (mes == 2) {
        if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
          if (dia <= 29) {
            return true;
          } else {
            return false;
          }
        } else {
          if (dia <= 28) {
            return true;
          } else {
          return false;
          }
        }
      } else if (dia <= 31) {
        return true;
      } else {
        return false;
      }
    } else {
      return false;
    }
}

int main() {

  int dia, mes, ano;

  printf("Digite uma data (dd/mm/yy): ");
  scanf("%i/%i/%i", &dia, &mes, &ano);
  fflush(stdin);

  validaData(dia, mes, ano) ? printf("\nValida!") : printf("\nData valida!");

  return 0;
}
#include <stdio.h>
#include <stdlib.h>
 
int converterHorario(int horas, int minutos, int codigo) {
  switch(codigo) {
    case 3:
      if(horas > 21) {
        horas = (horas + 3) % 24;
      } else {
        horas += 3;
      }
      break;
    case 4:
      if(horas > 20) {
        horas = (horas + 4) % 24;
      } else {
        horas += 4;
      }
      break; 
    case 5:
      if(horas > 19) {
        horas = (horas + 5) % 24;
      } else {
        horas += 5;
      }
      break;      
    case 6:
      if(horas > 18) {
        horas = (horas + 6) % 24;
      } else {
        horas += 6;
      }
      break; 
    case 7:
      if(horas < 3) {
        horas = (horas + 24) - 3;
      } else {
        horas -= 3;
      }
      break;
    case 8:
      if(horas < 3) {
        horas = (horas + 24) - 3;
      } else {
        horas -= 3;
      }
      break;
    case 9:
      if(horas < 2) {
        horas = (horas + 24) - 2;
      } else {
        horas -= 2;
      } 
      break;
    case 10:
      if(horas < 2) {
        horas = (horas + 24) - 2;
      } else {
        horas -= 2;
      } 
      break;
    case 11:
      if(horas < 1) {
        horas = (horas + 24) - 1;
      } else {
        horas -= 1;
      } 
      break;
    case 12:
      if(horas > 22) {
        horas = (horas + 1) % 24;
      } else {
        horas += 1;
      }
      break;
  }

  if(horas < 10 && minutos < 10){
    printf("\nHorario convertido: 0%d:0%d", horas, minutos);
  } else if(horas < 10){
    printf("\nHorario convertido: 0%d:%d", horas, minutos);
  } else if(minutos < 10){
    printf("\nHorario convertido: %d:0%d", horas, minutos);
  } else{
    printf("\nHorario convertido: %d:%d", horas, minutos);
  }


  

  return 0;
}

int main() {

  int horas, minutos, codigo;

  do{
    printf("Digite a hora atual (00:00): ");
    scanf("%d:%d", &horas, &minutos);
    fflush(stdin);

    if(horas < 0 || horas > 23 || minutos < 0 || minutos > 59) printf("Horario invalido!\n");

  } while(horas < 0 || horas > 23 || minutos < 0 || minutos > 59);

  do{
    printf("\n[1] - Rio de Janeiro\t[2] - Buenos Aires\n[3] - Londres\t\t[4] - Roma\n[5] - Cairo\t\t[6] - Moscou");
    printf("\n[7] - Chicago\t\t[8] - Mexico\n[9] - Nova Iorque\t[10]- Iugoslavia\n[11] - Cuiaba\t\t[12] - Ilhas Sao Pedro");
    printf("\nDigite a opcao desejada: ");
    scanf("%d", &codigo);
    fflush(stdin);

    if(codigo < 1 || codigo > 12) printf("\nOpcao invalida!");

  }while(codigo < 1 || codigo > 12);

  converterHorario(horas, minutos, codigo);

  return 0;
}
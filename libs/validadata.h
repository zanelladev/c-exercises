#ifndef _VALIDADATA_H
#define _VALIDADATA_H

int validaData(int dia, int mes, int ano){
    if (ano > 0 && mes >= 1 && mes <= 12 && dia > 0) {
      if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia <= 30) {
        return 1;
      } else if (mes == 2) {
        if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
          if (dia <= 29) {
            return 1;
          } else {
            return 0;
          }
        } else {
          if (dia <= 28) {
            return 1;
          } else {
          return 0;
          }
        }
      } else if (dia <= 31) {
        return 1;
      } else {
        return 0;
      }
    } else {
      return 0;
    }
}

int validaHorario(int horas, int minutos, int segundos) {
    if (horas < 0 || horas > 23)
        return 0;
    if (minutos < 0 || minutos > 59)
        return 0;
    if (segundos < 0 || segundos > 59)
        return 0;
    return 1;
}


#endif
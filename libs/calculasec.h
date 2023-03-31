#ifndef _CALCULASEC_H
#define _CALCULASEC_H

int calculaSec(int horas, int minutos, int segundos) {

  segundos += (horas * 3600) + (minutos * 60);
  
  return segundos;
}

#endif

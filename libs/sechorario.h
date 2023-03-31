#ifndef _SECHORARIO_H
#define _SECHORARIO_H

typedef struct {
  int horas, minutos, segundos;
} Tempo;

Tempo formataHorario(int segundos) {

  Tempo tempo;

  tempo.horas = segundos / 3600;
  segundos -= tempo.horas * 3600;
  tempo.minutos = segundos / 60;
  tempo.segundos = segundos % 60;

  return tempo;
}

#endif
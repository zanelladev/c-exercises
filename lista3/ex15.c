#include <stdio.h>
#include <stdlib.h>

int main(){ 

  int num, temp, res = 0;

  printf("Digite um numero inteiro e positivo: ");
  scanf("%i", &num); 
  fflush(stdin);

  while (num != 0) { // repete ate acabar o numero inicial
    temp = num % 10; // salva temporiamente o ultimo digito
    res = res * 10 + temp; // adiciona o ultimo digito como primeiro de um novo int, o res * 10 serve para abrir vaga para outro numero
    num /= 10; // elimina o ultimo digito do int inicial
  }

  printf("\nValor invertido = %i\n", res);

	return 0;
} 
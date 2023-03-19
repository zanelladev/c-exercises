#include <stdio.h>
#include <stdlib.h>

int main(){
    
  int anos;
  double populacaoA = 80000, populacaoB = 200000;

  while (populacaoA <= populacaoB) {
    populacaoA *= 1.03;
    populacaoB *= 1.015;
    anos++;
  }

  printf("Necessita %i anos\n", anos);
	
	return 0;
} 
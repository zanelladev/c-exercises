#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	char turno;

	printf("[M] - Matutino\n[V] - Vespertino\n[N] - Noturno\nVoce estuda em qual turno? ");
	scanf("%c", &turno);
	fflush(stdin);

	turno = toupper(turno);
	
	if (turno == 'M') {
		printf("\nBom Dia!\n");
	} else if (turno == 'V') {
		printf("\nBoa Tarde!\n");
	} else if (turno == 'N') {
		printf("\nBoa Noite!\n");
	} else {
		printf("\nValor invalido!");
	}

	return 0;
}
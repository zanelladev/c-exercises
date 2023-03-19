#include <stdio.h>
#include <stdlib.h>

int classe, opcaoMamifero, opcaoAve, opcaoReptil, opcaoBipede, opcaoQuadrupede, opcaoNaoVoador;

void mamifero(){
	printf("O mamifero e:\n[1] - Quadrupede\n[2] - Bipede\n[3] - Voadores\n[4] - Aquaticos\n");
	scanf("%i", &opcaoMamifero);
	fflush(stdin);

	if (opcaoMamifero == 1) {
		printf("O quadrupede e:\n[1] - Carnivoro\n[2] - Herbivoro\n");
		scanf("%i", &opcaoQuadrupede);
		fflush(stdin);

		if (opcaoQuadrupede == 1) {
			printf("LEAO!\n");
		} else if (opcaoQuadrupede == 2) {
			printf("CAVALO!\n");
		}

	} else if (opcaoMamifero == 2) {
		printf("O bipede e:\n[1] - Onivoro\n[2] - Frutifero\n");
		scanf("%i", &opcaoBipede);
		fflush(stdin);
		if (opcaoBipede == 1) {
			printf("HOMEM!\n");
		} else if (opcaoBipede == 2) {
			printf("MACACO!\n");
		}

	} else if (opcaoMamifero == 3) {
		printf("MORCEGO!\n");
	} else if (opcaoMamifero == 4) {
		printf("BALEIA!\n");
	}
	
}


void ave(){
	printf("A ave e:\n[1] - Rapina\n[2] - Aquatico\n[3] - Nao voador\n");
	scanf("%i", &opcaoAve);
	fflush(stdin);

	if (opcaoAve == 1) {
		printf("AGUIA!\n");
	} else if (opcaoAve == 2) {
		printf("PATO!\n");
	} else if (opcaoAve == 3) {
		printf("A ave e:\n[1] - Polar\n[2] - Tropical\n");
		scanf("%i", &opcaoNaoVoador);
		fflush(stdin);
		if (opcaoNaoVoador == 1) {
			printf("O animal e PINGUIM!\n");
		} else if (opcaoNaoVoador == 2) {
			printf("AVESTRUZ!\n");
		}
	}
}

void reptil(){
	printf("O reptil e:\n[1] - Carnivoro\n[2] - Com casco\n[3] - Sem patas\n");
	scanf("%i", &opcaoReptil);
	fflush(stdin);

	if (opcaoReptil == 1) {
		printf("CROCODILO!\n");
	} else if (opcaoReptil == 2) {
		printf("TARTARUGA!\n");
	} else if (opcaoReptil == 3) {
		printf("COBRA!\n");
	}

}

int main(){

	printf("Escolha um dos seguintes animais:\nleao, cavalo, homem, macaco, morcego, baleia, avestruz, pinguim, pato, aguia, tartaruga, crocodilo e cobra.\n");
	printf("\nO animal e:\n[1] - Mamiferos\n[2] - Aves\n[3] - Repteis\n");
	scanf("%i", &classe);
	fflush(stdin);

	classe == 1 ? mamifero() : classe == 2 ? ave() : classe == 3 ? reptil() : printf("Opcao invalida");

	return 0;
}
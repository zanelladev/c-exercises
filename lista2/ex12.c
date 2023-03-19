#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double base, altura, raio, ladoMaior, ladoMenor;

void opcaoinvalida(){
    printf("\nOpcao invalida!");
    printf("\n\nPrecione ENTER para voltar ao menu.");
    getchar();
}

void retangulo(){
	printf("Digite a base do retangulo: ");
	scanf("%lf", &base);
	fflush(stdin);

	printf("Digite a altura do retangulo: ");
	scanf("%lf", &altura);
	fflush(stdin);

	printf("\nArea do Retangulo: %.2lf", base * altura);

	printf("\n\nPrecione ENTER para voltar ao menu.");
  	getchar();
}

void triangulo(){
	printf("Digite a base do triangulo: ");
	scanf("%lf", &base);
	fflush(stdin);
			
	printf("Digite a altura do triangulo: ");
	scanf("%lf", &altura);
	fflush(stdin);
			
	printf("\nArea do Triangulo: %.2lf", (base * altura) / 2);

	printf("\n\nPrecione ENTER para voltar ao menu.");
  	getchar();
}

void circulo(){
	printf("Digite o raio do circulo: ");
	scanf("%lf", &raio);
    fflush(stdin);

	printf("\nArea do Circulo: %.2lf", 3.14 * pow(raio, 2));

	printf("\n\nPrecione ENTER para voltar ao menu.");
  	getchar();
}

void quadrado(){
	printf("Digite lado do quadrado: ");
	scanf("%lf", &base);
	fflush(stdin);
						
	printf("\nArea do Quadrado: %.2lf", base * base);

	printf("\n\nPrecione ENTER para voltar ao menu.");
  	getchar();
}

void trapezio(){
	printf("Digite a medida do maior lado do trapezio: ");
	scanf("%lf", &ladoMaior);
	fflush(stdin);
			
	printf("Digite a medida do menor lado do trapezio: ");
	scanf("%lf", &ladoMenor);
	fflush(stdin);
			
	printf("Digite a altura do trapezio: ");
	scanf("%lf", &altura);
	fflush(stdin);
						
	printf("\nArea do Trapezio: %.2lf", ((ladoMaior + ladoMenor) * altura) / 2);

	printf("\n\nPrecione ENTER para voltar ao menu.");
  	getchar();
}

int main(){
  int opcao;

  do {
    system("cls");

	printf("[ 1 ] - Area do Retangulo    \n");
	printf("[ 2 ] - Area do Triangulo    \n");
	printf("[ 3 ] - Area do Circulo      \n");
	printf("[ 4 ] - Area do Quadrado     \n");
	printf("[ 5 ] - Area do Trapezio     \n");
	printf("[ 6 ] - Sair                 \n");

    printf("\n\nCalculo desejado: ");
    scanf("%i", &opcao);
    fflush(stdin);

    opcao == 1 ? retangulo() : opcao == 2 ? triangulo() :
    opcao == 3 ? circulo() : opcao == 4 ? quadrado() : opcao == 5 ? trapezio() : 
	opcao == 6 ? printf("\nObrigado por usar o programa!") : opcaoinvalida();

  } while(opcao != 6);

  return 0;
}

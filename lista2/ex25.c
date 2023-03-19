#include <stdio.h>
#include <stdlib.h>

double valor;

void menu() {
	printf("---------------MENU---------------\n");
	printf("[1] - Metros para centimetros\n[2] - Centimetros para metros\n");
	printf("[3] - Dias para horas\n[4] - Horas para dias\n");
	printf("[5] - Km/h para milhas/h\n[6] - Milhas/h para Km/h\n");
	printf("[7] - Celsius para Fahrenheit\n[8] - Farenheit para Celsius\n");
	printf("[9] - Kg para arroba\n[10] - Arroba para Kg\n");
	printf("[11] - Polegada para cm\n[12] - Cm para polegada\n");
	printf("[13] - Palmo para centimetros\n[14] - Centimetros para palmos\n");
	printf("[15] - Pe para centimetros\n[16] - Cm para pe\n");
	printf("[17] - No para km/h\n[18] - Km/h para nos\n");
	printf("[19] - Covado para cm\n[20] - Cm para covado\n");
	printf("----------------------------------\n");
}

void metrosParaCentimentros() {
	printf("Digite um valor em metros: ");
	scanf("%lf", &valor);
	fflush(stdin);
	printf("\n%.2lfm equivalem a %.2lf centimetros.", valor, valor * 100);
}

void centimentrosParaMetros() {
	printf("Digite um valor em centimetros: ");
	scanf("%lf", &valor);
	fflush(stdin);
	printf("\n%.2lfcm equivalem a %.2lf metros.", valor, valor / 100);
}

void diasParaHoras() {
	printf("Digite um valor em dias: ");
	scanf("%lf", &valor);
	fflush(stdin);
	printf("\n%.2lf dias equivalem a %.2lf horas.", valor, valor * 24);
}

void horasParaDias() {
	printf("Digite um valor em horas: ");
	scanf("%lf", &valor);
	fflush(stdin);
	printf("\n%.2lf horas equivalem a %.2lf dias.", valor, valor / 24);
}

void kmParaMilhas() {
	printf("Digite um valor em Km/h: \n");
	scanf("%lf", &valor);
	fflush(stdin);
	printf("\n%.2lf Km/h equivalem a %.2lf milhas/h.", valor, valor * 1684);
}

void milhasParaKm() {
	printf("Digite um valor em Milhas/h: \n");
	scanf("%lf", &valor);
	fflush(stdin);
	printf("\n%.2lf Milhas/h equivalem a %.2lf Km/h.", valor, valor / 1684);
}

void celsiusParaFahrenheit() {
	printf("Digite um valor em Celsius: ");
	scanf("%lf", &valor);
	fflush(stdin);
	printf("\n%.2lf graus celsius equivalem a %.2lf graus fahrenheit.", valor, (valor * 1.8) + 32);
}

void fahrenheitParaCelsius() {
	printf("Digite um valor em Fahrenheit: ");
	scanf("%lf", &valor);
	fflush(stdin);
	printf("\n%.2lf graus fahrenheit equivalem a %.2lf graus celsius.", valor, (valor - 32) / 1.8);
}

void kgParaArroba() {
	printf("Digite um valor em quilogramas: ");
	scanf("%lf", &valor);
	fflush(stdin); 
	printf("\n%.2lf Kg equivalem a %.2lf @.", valor, valor / 15);
}

void arrobaParaKg() {
	printf("Digite um valor em Arrobas: ");
	scanf("%lf", &valor);
	fflush(stdin);
	printf("\n%.2lf @ equivalem a %.2lf Kg.", valor, valor * 15);
}

void polegadaParaCm() {
	printf("Digite um valor em Polegadas: ");
	scanf("%lf", &valor);
	fflush(stdin);
	printf("\n%.2lf polegadas equivalem a %.2lf cm.", valor, valor * 2.54);
}

void cmParaPolegada() {
	printf("Digite um valor em Centimetros: ");
	scanf("%lf", &valor);
	fflush(stdin); 
	printf("\n%.2lf cm equivalem a %.2lf Polegadas.", valor, valor / 2.54);
}

void palmoParaCentimetro() {
	printf("Digite um valor em Palmos: ");
	scanf("%lf", &valor);
	fflush(stdin); 

	printf("\n%.2lf palmos equivalem a %.2lf centimetros.", valor, valor * 22.86);
}

void centimetroParaPalmo() {
	printf("Digite um valor em Centimetros: ");
	scanf("%lf", &valor);
	fflush(stdin); 
	printf("\n%.2lf centimetros equivalem a %.2lf palmos.", valor, valor / 22.86);
}

void peParaCentimetros() {
	printf("Digite um valor em Pes: ");
	scanf("%lf", &valor);
	fflush(stdin);
	printf("\n%.2lf pes equivalem a %.2lf centimetros.", valor, valor * 30.48);
}

void centimetrosParaPe() {

	printf("Digite um valor em Centimetros: ");
	scanf("%lf", &valor);
	fflush(stdin);
	printf("\n%.2lf centimetros equivalem a %.2lf pes.", valor, valor / 30.48);
}

void noParaKm() {
	printf("Digite um valor em Nos/h: ");
	scanf("%lf", &valor);
	fflush(stdin);
	printf("\n%.2lf nos/h equivalem a %.2lf Km/h.", valor, valor * 1854);
}

void kmParaNo() {
	printf("Digite um valor em Km/h: ");
	scanf("%lf", &valor);
	fflush(stdin);
	printf("\n%.2lf Km/h equivalem a %.2lf Nos/h.", valor, valor / 1.854);
}

void covadoParaCm() {
	printf("Digite um valor em Covado: ");
	scanf("%lf", &valor);
	fflush(stdin);
	printf("\n%.2lf covados equivalem a %.2lf centimetros.", valor, valor * 66);
}

void cmParaCovado() {
	printf("Digite um valor em Centimetros: ");
	scanf("%lf", &valor);
	fflush(stdin);
	printf("\n%.2lf centimetros equivalem a %.2lf covados.", valor, valor / 66);
}

int main(){

	int conversor;

	menu();
	printf("Digite a opcao desejada: ");
	scanf("%i", &conversor);
	fflush(stdin);

	switch(conversor) {
		case 1:
			metrosParaCentimentros();
			break;
		case 2:
			centimentrosParaMetros();
			break;
		case 3:
			diasParaHoras();
			break;
		case 4:
			horasParaDias();
			break;
		case 5:
			kmParaMilhas();
			break;
		case 6:
			milhasParaKm();
			break;
		case 7:
			celsiusParaFahrenheit();
			break;
		case 8:
			fahrenheitParaCelsius();
			break;
		case 9:
			kgParaArroba();
			break;
		case 10:
			arrobaParaKg();
			break;
		case 11:
			polegadaParaCm();
			break;
		case 12:
			cmParaPolegada();
			break;
		case 13:
			palmoParaCentimetro();
			break;
		case 14:
			centimetroParaPalmo();
			break;
		case 15:
			peParaCentimetros();
			break;
		case 16:
			centimetrosParaPe();
			break;
		case 17:
			noParaKm();
			break;
		case 18:
			kmParaNo();
			break;
		case 19:
			covadoParaCm();
			break;
		case 20:
			cmParaCovado();
			break;
		default:
			printf("\nOpcao invalida!");
	}
}
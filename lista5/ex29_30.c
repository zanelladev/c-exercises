#include <stdio.h>
#include <stdlib.h>
#include "../libs/sechorario.h"
#include "../libs/calculasec.h"
#include "../libs/validadata.h"

typedef struct {
    int id;
    int dia, mes, ano;
    int horasInicio, minInicio, segInicio;
    int horasTermino, minTermino, segTermino;
    Tempo duracao;
} Empregado;

void imprimeDados(const int quantidade, const Empregado empregado[]) {
    for (int i = 0; i < quantidade; i++) {
        printf("\nCodigo do Empregado: %d", empregado[i].id);
        printf("\nDuracao da tarefa: %02d:%02d:%02d\n", empregado[i].duracao.horas, empregado[i].duracao.minutos, empregado[i].duracao.segundos);
    }
}

void processaDados(const int quantidade, Empregado empregado[]) {
    for (int i = 0; i < quantidade; i++) {
        int inicioEmSec = calculaSec(empregado[i].horasInicio, empregado[i].minInicio, empregado[i].segInicio);
        int terminoEmSec = calculaSec(empregado[i].horasTermino, empregado[i].minTermino, empregado[i].segTermino);
        int diferencaSecInicioTermino = terminoEmSec - inicioEmSec;
        Tempo duracao = formataHorario(diferencaSecInicioTermino);
        empregado[i].duracao = duracao;
    }
    imprimeDados(quantidade, empregado);
}

void recebeDados(const int quantidade) {

    Empregado empregado[quantidade];

    for (int i = 0; i < quantidade; i++) {
        printf("\nDigite o ID do empregado: ");
        scanf("%d", &empregado[i].id);

        do{
            printf("\nDigite a data (dd/mm/aaaa): ");
            scanf("%d/%d/%d", &empregado[i].dia, &empregado[i].mes, &empregado[i].ano);
            while(getchar() != '\n');

            if(!validaData(empregado[i].dia, empregado[i].mes, empregado[i].ano)) printf("Data invalida, reensira!");

        } while(!validaData(empregado[i].dia, empregado[i].mes, empregado[i].ano));

        do {
            printf("Digite o horario de inicio da tarefa (hh:mm:ss): ");
            scanf("%d:%d:%d", &empregado[i].horasInicio, &empregado[i].minInicio, &empregado[i].segInicio);
            while(getchar() != '\n');

            if(!validaHorario(empregado[i].horasInicio, empregado[i].minInicio, empregado[i].segInicio)) printf("Horario invalido, reensira!");

        } while(!validaHorario(empregado[i].horasInicio, empregado[i].minInicio, empregado[i].segInicio));

        do {
            printf("Digite o horario de termino da tarefa (hh:mm:ss): ");
            scanf("%d:%d:%d", &empregado[i].horasTermino, &empregado[i].minTermino, &empregado[i].segTermino);
            while(getchar() != '\n');

            if(!validaHorario(empregado[i].horasTermino, empregado[i].minTermino, empregado[i].segTermino)) printf("Horario invalido, reensira!");

        } while(!validaHorario(empregado[i].horasTermino, empregado[i].minTermino, empregado[i].segTermino));
    }
    processaDados(quantidade, empregado);
}

int main() {
    int quantidade;

    printf("Digite a quantidade de empregados: ");
    scanf("%d", &quantidade);
    recebeDados(quantidade);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double distancia, capacidade_tanque, consumo_medio, litros_consumidos, litros_restantes;
    int vezes_reabastecido;
    char loop;

    do {
        printf("\nDigite a distancia percorrida (em Km): ");
        scanf("%lf", &distancia);
        fflush(stdin);

        printf("Digite a capacidade do tanque (em litros): ");
        scanf("%lf", &capacidade_tanque);
        fflush(stdin);

        printf("Digite o consumo medio do veiculo (em Km/l): ");
        scanf("%lf", &consumo_medio);
        fflush(stdin);

        litros_consumidos = distancia / consumo_medio;

        vezes_reabastecido = ceil(litros_consumidos / capacidade_tanque);

        litros_restantes = capacidade_tanque - (litros_consumidos - ((vezes_reabastecido - 1) * capacidade_tanque));

        printf("\nForam necessarios %d reabastecimentos\n", vezes_reabastecido);
        printf("Foram consumidos %.2lf litros\n", litros_consumidos);
        printf("Restaram %.2lf litros no tanque\n", litros_restantes);

        
        printf("\nDeseja repetir? (S/N) ");
        scanf("%c", &loop);
        fflush(stdin);

        if (loop != 's' || loop != 'S') {
          return 0;
        }

    } while (1);

    return 0;
}
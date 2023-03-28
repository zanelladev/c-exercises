#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codigo;
    double preco;
} Produto;

int main() {
    Produto produtos[30];

    for (int i = 0; i < 30; i++) {
        printf("Digite o codigo do produto %d: ", i+1);
        scanf("%d", &produtos[i].codigo);
        printf("Digite o preco do produto %d: R$", i+1);
        scanf("%lf", &produtos[i].preco);
        fflush(stdin);
    }

    for (int i = 0; i < 30; i++) {
        for (int j = (i + 1); j < 30; j++) {
            if (produtos[i].preco < produtos[j].preco) {
                Produto temp = produtos[i];
                produtos[i] = produtos[j];
                produtos[j] = temp;
            }
        }
    }

    printf("\nOs tres produtos mais caros sao:\n");
    for (int i = 0; i < 3; i++) {
        printf("Codigo: %d\tPreco: R$%.2lf\n", produtos[i].codigo, produtos[i].preco);
    }

    return 0;
}
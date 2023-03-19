#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    char sexo;
    printf("Sexo (M/F): ");
    scanf("%c", &sexo);
    fflush(stdin);
    sexo = toupper(sexo);

    if (sexo == 'M') {
        printf("\nMasculino!\n");
    } else if (sexo == 'F') {
        printf("\nFeminino!\n");
    } else {
        printf("\nValor invalido!\n");
    }

    return 0;
}
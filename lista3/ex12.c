#include <stdio.h>
#include <stdlib.h>

int main()
{
    double soma = 0;
    int i, j;

    for (i = 1, j = 1; i <= 99 && j <= 50; i += 2, j++) {
        soma += (double) i / j;
    }

    printf("A soma da serie S = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50 = %.4lf", soma);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double soma = 0;
    int i, j;

    for (i = 1, j = 1; i <= 10 && j <= 19; i++, j += 2) {
        soma += (double) i / j;
    }

    printf("A soma da serie S = 1/1 + 2/3 + 3/5 + 4/7 + 5/9 + ... + 10/19 = %.4lf", soma);

    return 0;
}
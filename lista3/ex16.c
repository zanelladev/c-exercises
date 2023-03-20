#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, primeiro = 1, segundo = 1, temp;

    printf("Digite a quantidade de termos da sequencia de Fibonacci: ");
    scanf("%d", &n);

    printf("Sequencia de Fibonacci: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", primeiro);
        temp = primeiro + segundo;
        primeiro = segundo;
        segundo = temp;
    }

    return 0;
}
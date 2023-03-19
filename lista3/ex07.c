#include <stdio.h>
#include <stdlib.h>

int main(){

  double num;

  printf("Digite qual numero deseja ver a tabuada: ");
  scanf("%lf", &num);
  fflush(stdin);

  for (int i = 1; i <= 10; i++) {
    printf("%.1lf x %i = %.1lf\n", num, i, num * i);
  }

  return 0;
}


/*
  Faça  uma  função  que  receba  como  argumento  os  valores  dos  lados  de  
  um triângulo,  a  função  deverá  retornar  0  se  triângulo  for  equilátero,  
  1  se  for isósceles ou 2 se for escaleno.
*/

#include <stdio.h>
#include <stdlib.h>

int triangulo(float a, float b, float c) {

  return (a == b && a == c) ? 0 : (a != b && b != c) ? 2 : 1;

}

int main() {

  double a, b, c;


  printf("Digite o primeiro lado do triangulo: ");
  scanf("%lf", &a);
  fflush(stdin);

  printf("Digite o segundo lado do triangulo: ");
  scanf("%lf", &b);
  fflush(stdin);

  printf("Digite o terceiro lado do triangulo: ");
  scanf("%lf", &c);
  fflush(stdin);

  if((a + b > c) && (a + c > b) && (b + c > a)) {
    triangulo(a, b, c) == 0 ? printf("\nEquilatero!") : triangulo(a, b, c) == 1 ? printf("\nIsosceles!") : printf("\nEscaleno!");
  } else {
    printf("\nOs valores informados nao podem formar um triangulo!");
  }

  return 0;
}
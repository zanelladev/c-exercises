#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

  double salarioFixo, comissao = 0, valor;
  char loop, codigo[25];

    printf("\nDigite seu salario fixo: R$");
    scanf("%lf", &salarioFixo);
    fflush(stdin);
    
    printf("\nDigite seu codigo de vendedor: (25 caract. max)");
    fgets(codigo, 25, stdin);
    codigo[strlen(codigo)-1] = '\0';
    fflush(stdin);

    do {
      printf("\nDigite o valor da sua venda: R$");
      scanf("%lf", &valor);
      fflush(stdin);

      if(valor >= 100) {
        comissao += (valor * 0.10);
      } else {
        comissao += (valor * 0.06);
      }

      printf("\nCodigo: %s", codigo);
      printf("\nComissao: %.1lf", comissao);
      printf("\nSalario Total: %.1lf", salarioFixo + comissao);


      printf("\nDeseja calcular outro mes? (S/N) ");
      scanf("%c", &loop);
      fflush(stdin);

    } while(loop == 's' || loop == 'S');

    

  return 0;
}
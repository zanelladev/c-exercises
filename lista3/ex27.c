#include <stdio.h>
#include <stdlib.h>

int main() {
  int qAlunos, qFeminino = 0, qMasculino = 0;
  double maiorAltura = 0, menorAltura = 0, alturaFeminina = 0, alturaMasculina = 0, somaIdade = 0;
  
  printf("Informe o numero de alunos: ");
  scanf("%d", &qAlunos);

  for(int i = 0; i < qAlunos; i++) {
    int idade;
    double altura;
    char sexo;

    printf("\nAluno %d:", (i + 1));
    printf("\nIdade: ");
    scanf("%d", &idade);
    fflush(stdin);

    printf("Altura: ");
    scanf("%lf", &altura);
    fflush(stdin);

    printf("Sexo (F/M): ");
    scanf("%c", &sexo);
    fflush(stdin);

    if (i == 0) {
      menorAltura = altura;
    } else if (altura < menorAltura) {
      menorAltura = altura;
    }

    // atualiza a maior altura
    if (altura > maiorAltura) {
      maiorAltura = altura;
    }

    if(sexo == 'F' || sexo == 'f') {
      alturaFeminina += altura;
      qFeminino++;
    } else {
      alturaMasculina += altura;
      qMasculino++;
    }

    somaIdade += idade;
  }

  printf("\nMaior altura da turma: %.2lf", maiorAltura);
  printf("\nMenor altura da turma: %.2lf", menorAltura);

  if(qFeminino > 0) {
    printf("\nMedia de altura das mulheres: %.2lf", alturaFeminina / qFeminino);
  } else {
    printf("\nNao ha mulheres na turma");
  }

  if(qMasculino > 0) {
    printf("\nMedia de altura dos homens: %.2lf", alturaMasculina / qMasculino);
  } else {
    printf("\nNao ha homens na turma");
  }

  printf("\nMedia de idade da turma: %.2lf", somaIdade / qAlunos);

  return 0;
}
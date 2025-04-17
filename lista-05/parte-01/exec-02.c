#include<stdio.h>

float calculaMedia(int pessoas, float salario) {
  return (float)salario/pessoas;
}

int main() {
  int familia = 0;
  int totalFamilia = 0;
  float salario = 0;
  float totalSalario = 0;
  int parada = 1;

  do
  {
    printf("Digite o numero de pessoas na familia: ");
    scanf("%d", &familia);

    printf("Digite o salario familiar: ");
    scanf("%f", &salario);

    if (salario == 0) {
      parada = salario;
      break;
    }

    totalFamilia += familia;
    totalSalario += salario;

  } while (parada != 0);
  
  printf("A media salarial é: %.2f", calculaMedia(totalFamilia, totalSalario));
}
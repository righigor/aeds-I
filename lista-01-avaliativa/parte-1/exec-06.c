#include<stdio.h>

int main() {
  int option;
  float salario, novoSalario, salarioFerias, salarioDecimoTerceiro, meses;

  do
  {
    printf("Menu de opções:\n1 - Novo salário\n2 - Férias\n3 - Décimo terceiro\n4 - Sair\nDigite a opção desejada: ");
    scanf("%d", &option);

    switch (option)
    {
      case 1:
        printf("Digite o salário atual: ");
        scanf("%f", &salario);
        if (salario < 0)
        {
          printf("Salário inválido!\n");
          printf("Digite o salário atual: ");
          scanf("%f", &salario);
        }
        if (salario < 1000) {
          novoSalario = salario * 1.15;
        }
        if (salario <= 1000 && salario <= 2000) {
          novoSalario = salario * 1.10;
        }
        if (salario > 2000) {
          novoSalario = salario * 1.05;
        }
        printf("O novo salário é: %.2f\n", novoSalario);
        break;
      case 2:
        printf("Digite o salário atual: ");
        scanf("%f", &salario);
        if (salario < 0)
        {
          printf("Salário inválido!\n");
          printf("Digite o salário atual: ");
          scanf("%f", &salario);
        }
        salarioFerias = salario + (salario / 3);
        printf("O salário de férias é: %.2f\n", salarioFerias);
        break;
      case 3:
        printf("Digite o salário atual: ");
        scanf("%f", &salario);
        if (salario < 0)
        {
          printf("Salário inválido!\n");
          printf("Digite o salário atual: ");
          scanf("%f", &salario);
        }
        printf("Digite a quantidade de meses trabalhados: ");
        scanf("%f", &meses);
        if (meses > 12)
        {
          printf("Quantidade de meses inválida!\n");
          printf("Digite a quantidade de meses trabalhados: ");
          scanf("%f", &meses);
        }
        salarioDecimoTerceiro = salario * (meses / 12);
        printf("O salário de décimo terceiro é: %.2f\n", salarioDecimoTerceiro);
        break;
      case 4:
        printf("Saindo...\n");
        break;
      default:
        printf("Opção inválida!\n");
        break;
    }
  } while (option != 4);
}
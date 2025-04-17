#include<stdio.h>

int fat(int n) {
  int fatorial = 1;

  for (int i = 1; i <= n; i++) {
    fatorial *= i;
  }
  return fatorial;
}

float div(int n) {
  return (float) 1 / fat(n);
}

float somatorioE(int n) {
  float soma = 1;

  for (int i = 1; i <= n; i++)
  {
    soma += div(i);
  }
  return soma;
}

int main() {
  int n;
  printf("Digite um número inteiro positivo: ");
  scanf("%d", &n);

  float resultado = somatorioE(n);
  printf("Somatorio é %.4f", resultado);

  return 0;
}
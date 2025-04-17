#include<stdio.h>

float div(int n) {
  return (float) 1 / n;
}

float somatorio(int n) {
  float soma = 1;

  for (int i = 2; i <= n; i++)
  {
    soma += div(i);
  }
  return soma;
}

int main() {
  int n;

  printf("Digite um numero inteiro: ");
  scanf("%d", &n);

  printf("O resultado é: %.2f", somatorio(n));
}
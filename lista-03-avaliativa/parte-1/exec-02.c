#include<stdio.h>

int main() {
  int n, fat = 1;
  printf("Digite um número para calcular seu fatorial: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    fat *= (n - i);
  }
  printf("O fatorial de %d é: %d\n", n, fat);
  return 0;
}
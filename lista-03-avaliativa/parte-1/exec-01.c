#include<stdio.h>

int main() {
  int n, soma = 0;
  printf("Digite um número: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    if (i % 2 != 0)
    {
      soma += i;
    }
  }
  printf("A soma dos números ímpares de 0 a %d é: %d\n", n, soma);
  return 0;
}
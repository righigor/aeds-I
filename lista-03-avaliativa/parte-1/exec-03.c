#include<stdio.h>

int main() {
  int n, soma = 0;
  printf("Digite um número: ");
  scanf("%d", &n);

  for (int i = 0; i <= n; i++)
    {
      if (i % 3 == 0 && i % 5 != 0)
      {
        soma += i;
      }
      if (i % 5 == 0 && i % 3 != 0)
      {
        soma += i;
      }
    }

  printf("A soma dos números é: %d\n", soma);
  return 0;
}
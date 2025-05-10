#include<stdio.h>

int main() {
  int n, fib = 0, fib1 = 1, fib2 = 1, fib0 = 0;
  printf("Digite um número para calcular a sequência de Fibonacci: ");
  scanf("%d", &n);

  printf("%d\n", fib0);
  for (int i = 2; i <= n; i++)
  {
    printf("%d\n", fib2);
    fib2 = fib + fib1;
    fib = fib1;
    fib1 = fib2;
  }

}
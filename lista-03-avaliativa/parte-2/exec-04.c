#include<stdio.h>

int main() {
  int n;
  printf("Digite um número: ");
  scanf("%d", &n);

  if (n % 2 == 0) {
    printf("O número %d é par\n", n);
  } else {
    printf("O número %d é ímpar\n", n);
  }
  return 0;
}
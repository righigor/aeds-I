#include<stdio.h>

int main() {
  int n, n1, n2, n3;

  printf("Digite um número inteiro com três digitos: ");
  scanf("%d", &n);

  n1 = n / 100;
  n2 = (n % 100) / 10;
  n3 = n % 10;

  printf("O número %d invertido é: %d%d%d\n", n, n3, n2, n1);
  return 0;
}
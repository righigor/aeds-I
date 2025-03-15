#include<stdio.h>

int main() {
  int n;
  printf("Digite um número: ");
  scanf("%d", &n);
  printf("O antecessor do número digitado foi: %d\n", n - 1);
  printf("O sucessor do número digitado foi: %d\n", n + 1);
  return 0;
}
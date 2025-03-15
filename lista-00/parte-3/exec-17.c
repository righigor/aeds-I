#include<stdio.h>

int main() {
  float n;
  printf("Digite um número: ");
  scanf("%f", &n);

  printf("A quinta parte do número digitado foi: %.2f\n", n / 5);
  return 0;
}
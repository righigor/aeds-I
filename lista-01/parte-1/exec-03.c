#include<stdio.h>

int main() {

  float a, aa, b;

  printf("Digite o valor de a: ");
  scanf("%f", &a);
  printf("Digite o valor de b: ");
  scanf("%f", &b);

  aa = a;
  a = b;
  b = aa;

  printf("O valor de a é: %.2f\n", a);
  printf("O valor de b é: %.2f\n", b);
}
#include<stdio.h>
#include<stdbool.h>

bool verdade(bool a, bool b, bool c) {
  return (!a || (b && c));
}

int main() {
  int a, b, c;
  bool A, B, C;

  printf("Digite o valor de A (0 para false, 1 para true): ");
  scanf("%d", &a);

  printf("Digite o valor de B (0 para false, 1 para true): ");
  scanf("%d", &b);

  printf("Digite o valor de C (0 para false, 1 para true): ");
  scanf("%d", &c);

  A = (bool)a;
  B = (bool)b;
  C = (bool)c;

  bool res = verdade(A, B, C);

  printf("O valor é: %s", res ? "true" : "false");
}
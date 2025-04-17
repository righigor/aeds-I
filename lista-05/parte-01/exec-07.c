#include<stdio.h>

int main() {
  int a, b;
  int *pA = &a;
  int *pB = &b;

  printf("Digite o valor de a: ");
  scanf("%d", &a);

  printf("Digite o valor de b: ");
  scanf("%d", &b);

  printf("Endereço de a: %p\n", (void*)pA);
  printf("Endereço de b: %p\n", (void*)pB);

  pA > pB 
    ? printf("O maior endereço é o de A: %p\n", (void*)pA)
    : printf("O maior endereço é o de B: %p\n", (void*)pB);

  return 0;
}
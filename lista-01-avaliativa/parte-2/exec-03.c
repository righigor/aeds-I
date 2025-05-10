#include<stdio.h>

int main() {
  int n, soma, maior = 0;

  for (int i = 0; i < 3; i++) {
    printf("Digite o %dº número: ", i + 1);
    scanf("%d", &n);

    if (n > maior) {
      maior = n;
    }
    soma += n;
  }

  printf("O maior número é %d\nA soma dos números é %d\n", maior, soma);
  return 0;
}
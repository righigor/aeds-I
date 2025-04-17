#include<stdio.h>

int ehPrimo(int n) {
  if (n <= 1) return 0;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) return 0;
  }
  return 1;
}

void primo(int m, int *p1, int *p2){
  int menor = m -1;

  while (m > 1 && !ehPrimo(menor)) {
    menor--;
  }
  *p1 = menor;

  int maior = m + 1;
  while (!ehPrimo(maior)) {
    maior++;
  }
  *p2 = maior;
}


int main() {
  int m;
  int p1, p2;

  printf("Digite um número: ");
  scanf("%d", &m);

  primo(m, &p1, &p2);

  printf("Maior primo menor que %d: %d\n", m, p1);
  printf("Menor primo maior que %d: %d\n", m, p2);
}
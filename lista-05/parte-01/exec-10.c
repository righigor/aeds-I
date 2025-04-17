#include<stdio.h>
#include<math.h>

void teste(int n, int *b, int *k) {
  for (int base = 2; base <= n; base++)
  {
    for (int j = 1; j <= n; j++)
    {
      double res = pow(base, j);
      if ((int)(res + 0.5) == n) {
        *b = base;
        *k = j;
        return;
      }
      if (res > n) break;
    }
  }
  *b = n;
  *k = 1;  
}

int main() {
  int n, b, k;

  printf("Digite um valor n: ");
  scanf("%d", &n);

  teste(n, &b, &k);

  printf("O menor valor de B é: %d\n", b);
  printf("O menor valor de K é: %d\n", k);

  return 0;
}
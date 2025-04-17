#include<stdio.h>
#include<math.h>

int top(int n) {
  int num = pow(n, 2);
  return (num + 1);
}

int bot(int n) {
  return (n + 3);
}

float div(int n) {
  return (float) top(n) / bot(n);
}

float somatorio(int n) {
  float res = 0;

  for (int i = 1; i <= n; i++)
  {
    res += div(i);
  }
  return res;
}

int main() {
  int n;

  printf("Digite um inteiro: ");
  scanf("%d", &n);

  printf("O somatorio final é: %.2f", somatorio(n));

  return 0;
}

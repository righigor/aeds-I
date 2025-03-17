#include<stdio.h>

int main() {
  int n;

  printf("Digite um número: ");
  scanf("%d", &n);

  if ((n % 3 == 0 && n % 5 != 0) || (n % 3 != 0 && n % 5 == 0)) {
    printf("1");
    return 0;
  }
  
  printf("0");
  return 0;
}
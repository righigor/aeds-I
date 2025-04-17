#include<stdio.h>
#include<stdlib.h>

int len(int n) {
  int contador = 0;
  if (n == 0) return 1;

  while (n > 0) {
    n /= 10;
    contador++;
  }
  return contador;
}

void reverse(int *vetor, int length, int n) {
  int num = n;
  for (int i = 0; i < length; i++)
  {
    vetor[i] = num % 10;
    num /= 10;
  }
}

int getNum(int n, int k) {
  int leng = len(n);

  int *vetor = (int*)malloc(leng * sizeof(int*));

  reverse(vetor, leng, n);

  return vetor[k -1];
}

int main() {
  int n, k;

  printf("Digite um numero: ");
  scanf("%d", &n);

  printf("Digite o K: ");
  scanf("%d", &k);
  
  printf("O k-ésimo digite é: %d", getNum(n, k));
}
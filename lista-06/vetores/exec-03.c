#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void preencheVetor(int *v, int num) {
  for (int i = 0; i < num; i++)
  {
    v[i] = drand48()*10;
  }
}

float calcMedia(int *v, int num) {
  int soma = 0;

  for (int i = 0; i < num; i++)
  {
    soma += v[i];
  }
  return (float)soma / num;
}

int main() {
  srand48(time(NULL));
  int num = (int)(drand48() * 10);

  int *v = (int*)malloc(num * sizeof(int));

  preencheVetor(v, num);

  printf("Tamanho do vetor: %d \n", num);
  printf("A média dos números do vetor é: %f", calcMedia(v, num));

  free(v);
}

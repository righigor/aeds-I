#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheVetor(int *v) {
  for (int i = 0; i < 5; i++) {
    v[i] = drand48() * 10;
  }
}

int encontraPos(int *v) {
  int menor = v[0], pos = 0;

  for (int i = 1; i < 5; i++) {
    if (v[i] < menor) {
      menor = v[i];
      pos = i;
    }
  }
  return pos;
}

void menorParaPrimeiro(int *v) {
  int pos = encontraPos(v);

  int temp = v[pos];
  v[pos] = v[0];
  v[0] = temp;
}

void printaVetor(int *v) {
  for (int i = 0; i < 5; i++) {
    printf("%d ", v[i]);
  }
  printf("\n");
}

int main() {
  srand48(time(NULL));
  int *v = (int *)malloc(5 * sizeof(int));
  preencheVetor(v);
  printaVetor(v);
  menorParaPrimeiro(v);
  printaVetor(v);

  free(v);
  return 0;
}
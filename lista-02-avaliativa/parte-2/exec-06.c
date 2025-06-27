#include <stdio.h>
#include <stdlib.h>

void preencheVetor(int size, int *v) {
  if (size == 50) {
    return;
  }

  v[size] = (size + (3 * size)) % (size + 1);
  size++;

  preencheVetor(size, v);
}

void printaVetor(int *v) {
  for (int i = 0; i < 50; i++) {
    printf("%d ", v[i]);
  }
}

int main() {
  int *v = (int *)malloc(50 * sizeof(int));

  preencheVetor(0, v);

  printaVetor(v);

  free(v);
  return 0;
}
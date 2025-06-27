#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

void preencheVetor(int pos, int *v, int i) {
  if (pos > SIZE) {
    return;
  }
  if (i % 6 != 0 && i % 10 != 6) {
    v[pos] = i;
    pos++;
  }
  i++;
  preencheVetor(pos, v, i);
}

void printaVetor(int *v, int i) {
  if (i > SIZE) {
    return;
  }
  printf("%d ", v[i]);
  i++;
  printaVetor(v, i);
}


int main() {
  int *vetor = (int *)malloc(SIZE * sizeof(int));
  preencheVetor(0, vetor, 1);
  printaVetor(vetor, 0);
  free(vetor);
  printf("\ntest: %d\n", 16 % 10);
  return 0;
}
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void criaVetor(int *v) {
  for (int i = 0; i < SIZE; i++) {
    printf("Digite o número %d do vetor: ", i + 1);
    scanf("%d", &v[i]);
    printf("\n");
  }
}

void subtraiVetores(int *a, int *b, int *c) {
  for (int i = 0; i < SIZE; i++) {
    c[i] = a[i] - b[i];
  }
}

void printaVetor(int *v) {
  for (int i = 0; i < SIZE; i++) {
    printf("%d ", v[i]);
  }
}

int main() {
  int *A = (int *)malloc(SIZE * sizeof(int));
  int *B = (int *)malloc(SIZE * sizeof(int));
  int *C = (int *)malloc(SIZE * sizeof(int));

  criaVetor(A);
  criaVetor(B);

  printf("Vetor A:\n");
  printaVetor(A);
  printf("Vetor B:\n");
  printaVetor(B);

  subtraiVetores(A, B, C);
  printf("Vetor C:\n");
  printaVetor(C);

  free(A);
  free(B);
  free(C);
  return 0;
}
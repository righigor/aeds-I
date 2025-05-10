#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheValores(int x[], int y[], int length) {
  for (int i = 0; i < length; i++) {
    x[i] = 10 + (int)(drand48() * 10);
    y[i] = 10 + (int)(drand48() * 10);
  }
}
void intercala(int x[], int y[], int length, int z[]) {
  for (int i = 0; i < (length*2); i++) {
    if (i % 2 == 0) {
      z[i] = x[i / 2];
    } else {
      z[i] = y[i / 2];
    }
  }
}

int main() {
  srand48(time(NULL));
  int length = 10;
  int *x = (int *)malloc(length * sizeof(int));
  int *y = (int *)malloc(length * sizeof(int));
  int *z = (int *)malloc((length * 2) * sizeof(int));

  preencheValores(x, y, length);
  intercala(x, y, length, z);

  printf("Valores de x:\n");
  for (int i = 0; i < length; i++) {
    printf("%d ", x[i]);
  }
  printf("\nValores de y:\n");
  for (int i = 0; i < length; i++) {
    printf("%d ", y[i]);
  }
  printf("\nValores de z:\n");
  for (int i = 0; i < (length * 2); i++) {
    printf("%d ", z[i]);
  }

  free(x);
  free(y);
  free(z);
  return 0;
}

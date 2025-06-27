#include <stdio.h>

#define SIZE 10

void preencheValores(int *v, int size) {
  printf("Digite %d valores inteiros (positivos ou negativos):\n", size);
  for (int i = 0; i < size; i++) {
    printf("Elemento %d: ", i + 1);
    scanf("%d", &v[i]);
  }
}

void copiaNegativos(int *v, int size, int *vNeg) {
  int j = 0;
  for (int i = 0; i < size; i++) {
    if (v[i] < 0) {
      vNeg[j] = v[i];
      j++;
    }
  }
  for (int i = j; i < size; i++) {
    vNeg[i] = 0;
  }
}

int main() {
  int *x = (int *)malloc(SIZE * sizeof(int));
  int *negativos = (int *)malloc(SIZE * sizeof(int));

  preencheValores(x, SIZE);
  copiaNegativos(x, SIZE, negativos);

  printf("\nValores negativos copiados:\n");
  for (int i = 0; i < SIZE; i++) {
    if (negativos[i] != 0) {
      printf("%d ", negativos[i]);
    }
  }
  free(x);
  free(negativos);

  return 0;
}

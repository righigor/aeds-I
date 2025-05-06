#include <stdio.h>
#include <stdlib.h>

void printaMatriz(float **matriz, int linhas, int colunas) {
  printf("Matriz gerada:\n");
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      printf("%.2f ", matriz[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int n;

  printf("Digite o tamanho da matriz quadrada: ");
  scanf("%d", &n);

  float **matriz = (float **)malloc(n * sizeof(float *));
  for (int i = 0; i < n; i++) {
    matriz[i] = (float *)calloc(n, sizeof(float));
  }

  printaMatriz(matriz, n, n);

  for (int i = 0; i < n; i++) {
    free(matriz[i]);
  }
  free(matriz);

  return 0;
}
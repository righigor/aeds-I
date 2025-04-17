#include <stdio.h>
#include <stdlib.h>

void retornaCrescente(int **matriz) {
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 2; j++) {
        for (int k = j + 1; k < 3; k++) {
            if (matriz[i][j] > matriz[i][k]) {
                int temp = matriz[i][j];
                matriz[i][j] = matriz[i][k];
                matriz[i][k] = temp;
            }
        }
    }
    }
}

int main() {
    int linhas = 1000;
    int colunas = 3;
    int parada = linhas;
    int len = 0;

    int **matriz = (int**) malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int*) malloc(colunas * sizeof(int));
    }

    for (int i = 0; i < parada; i++)
    {
      printf("Digite 3 valores: ");
      scanf("%d %d %d", &matriz[i][0], &matriz[i][1], &matriz[i][2]);
      len++;
      int input = 0;
      printf("Deseja parar? (1 - sim, 0 - não): ");
      scanf("%d", &input);
      if (input == 1) {
          parada = input;
          break;
      }
    }

    retornaCrescente(matriz);

    printf("Valores ordenados:\n");
    for (int i = 0; i < len; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        printf("%d ", matriz[i][j]);
      }
      printf("\n");
    }
    
    
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}

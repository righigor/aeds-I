#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printaMatriz(int **matriz, int linhas, int colunas) {
  printf("Matriz gerada:\n");
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      printf("%2d ", matriz[i][j]);
    }
    printf("\n");
  }
}

void preencheMatriz(int **matriz, int linhas, int colunas, int k) {
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      matriz[i][j] = 1 + (int)(drand48() * k);
    }
  }
}

int verificaLinhas(int **matriz, int **iguais, int linhas, int colunas) {
  int alterou = 0;
  for (int i = 0; i < linhas; i++) {
    int j = 0;
    while (j < colunas) {
      int count = 1;
      while (j + count < colunas && matriz[i][j] == matriz[i][j + count] && matriz[i][j] != 0 && matriz[i][j + count] != 0) {
        count++;
      }
      if (count >= 3) {
        for (int k = 0; k < count; k++) {
          iguais[i][j + k] = 1;
          alterou = 1;
        }
      }
      j += count;
    }
  }
  return alterou;
}

int verificaColunas(int **matriz, int **iguais, int linhas, int colunas) {
    int alterou = 0;
  for (int j = 0; j < colunas; j++) {
    int i = 0;
    while (i < linhas) {
      int count = 1;
      while (i + count < linhas && matriz[i][j] == matriz[i + count][j] && matriz[i][j] != 0 && matriz[i][j + count] != 0) {
        count++;
      }
      if (count >= 3) {
        for (int k = 0; k < count; k++) {
          iguais[i + k][j] = 1;
          alterou = 1;
        }
      }
      i += count;
    }
  }
  return alterou;
}

void zeraIguais(int **matriz, int **iguais, int linhas, int colunas) {
  int count = 0;
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      if (iguais[i][j]) {
        matriz[i][j] = 0;
        count++;
      }
    }
  }
  printf("Zerando os numeros em sequencias...\n");
  printaMatriz(matriz, linhas, colunas);
  printf("O número de números repetidos foi: %d\n", count);
}

void zerosParaTop(int **matriz, int linhas, int colunas) {
  for (int j = 0; j < colunas; j++) {
    int *nums = (int *)malloc(linhas * sizeof(int));
    int count = 0;

    for (int i = 0; i < linhas; i++) {
      if (matriz[i][j] != 0) {
        nums[count++] = matriz[i][j];
      }
    }

    int zeros = linhas - count;

    for (int i = 0; i < zeros; i++) {
      matriz[i][j] = 0;
    }

    for (int i = 0; i < count; i++) {
      matriz[zeros + i][j] = nums[i];
    }

    free(nums);
  }

  printf("Passando todos os zeros para o topo...\n");
  printaMatriz(matriz, linhas, colunas);
  printf("A matriz foi zerada e os números foram movidos para o topo.\n");
}

int verificaSequencia(int **matriz, int linhas, int colunas) {
  int **iguais = (int **)malloc(linhas * sizeof(int *));
  for (int i = 0; i < linhas; i++) {
    iguais[i] = (int *)calloc(colunas, sizeof(int));
  }

  int verificacaoLinhas = verificaLinhas(matriz, iguais, linhas, colunas);
  int verificacaoColunas = verificaColunas(matriz, iguais, linhas, colunas);

  if(!verificacaoLinhas && !verificacaoColunas) {
    printf("Sem sequencia 3 números.\n");
    printaMatriz(matriz, linhas, colunas);
    return 1;
  }

  zeraIguais(matriz, iguais, linhas, colunas);
  zerosParaTop(matriz, linhas, colunas);

  
  for (int i = 0; i < linhas; i++) {
    free(iguais[i]);
  }
  free(iguais);

  verificaSequencia(matriz, linhas, colunas);
}

int main() {
  srand48(time(NULL));
  int m = 0, n = 0, k;

  do {
    printf("Digite o número de linhas: ");
    scanf("%d", &m);
  } while (n > 100);

  do {
    printf("Digite o número de colunas: ");
    scanf("%d", &n);
  } while (n > 100);

  printf("Digite o número máximo de valor possível: ");
  scanf("%d", &k);

  int **matriz = (int **)malloc(m * sizeof(int *));
  for (int i = 0; i < m; i++) {
    matriz[i] = (int *)malloc(n * sizeof(int *));
  }

  preencheMatriz(matriz, m, n, k);
  printaMatriz(matriz, m, n);
  
  verificaSequencia(matriz, m, n);

  return 0;
}
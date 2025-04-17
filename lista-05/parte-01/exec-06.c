#include<stdio.h>
#include<stdlib.h>

int verificaTriangulo(int **matriz, int i) {
  if (
    matriz[i][0] < matriz[i][1] + matriz[i][2] &&
    matriz[i][1] < matriz[i][0] + matriz[i][2] &&
    matriz[i][2] < matriz[i][0] + matriz[i][1]
  ) {
    return 1;
  }
  return 0;
}

void descobreTriangulo(int **matriz, int i) {
  int isTriangulo = verificaTriangulo(matriz, i);
  if (isTriangulo == 0) {
    printf("Não é Triangulo.\n");
    return;
  }

  if (matriz[i][0] == matriz[i][1] && matriz[i][1] == matriz[i][2]) {
    printf("Triangulo Equilátero.\n");
    return;
  }
  if (matriz[i][0] == matriz[i][1] || matriz[i][1] == matriz[i][2] || matriz[i][0] == matriz[i][2]) {
    printf("Triangulo Isósceles.\n");
    return;
  }
  printf("Triangulo Escaleno.\n");
  return;
}

int main() {
  int linhas = 100;
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

  for (int i = 0; i < len; i++)
  {
    printf("Verificação %d: \n", i + 1);
    printf("Número verificados: %d, %d, %d \n", matriz[i][0], matriz[i][1], matriz[i][2]);

    descobreTriangulo(matriz, i);
  }
  
  return 0;
}
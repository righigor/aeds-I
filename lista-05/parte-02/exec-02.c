#include<stdio.h>
#include<stdlib.h>

void getConceito(int **matriz, int n) {
  for (int i = 0; i < n; i++)
  {
    if (matriz[i][0] <= 39) {
      matriz[i][1] = 'F';
    }
    if (matriz[i][0] >= 40 && matriz[i][0] <= 59) {
      matriz[i][1] = 'E';
    }
    if (matriz[i][0] >= 60 && matriz[i][0] <= 69) {
      matriz[i][1] = 'D';
    }
    if (matriz[i][0] >= 70 && matriz[i][0] <= 79) {
      matriz[i][1] = 'C';
    }
    if (matriz[i][0] >= 80 && matriz[i][0] <= 89) {
      matriz[i][1] = 'B';
    }
    if (matriz[i][0] >= 90) {
      matriz[i][1] = 'A';
    }
  }
}

void printConceito(int **matriz, int n) {
  for (int i = 0; i < n; i++)
  {
    switch (matriz[i][1])
    {
    case 'F':
      printf("Aluno %d:\nNota: %d\nConceito: %c\n", i+1, matriz[i][0], matriz[i][1]);
      break;
    case 'E':
      printf("Aluno %d:\nNota: %d\nConceito: %c\n", i+1, matriz[i][0], matriz[i][1]);
      break;
    case 'D':
      printf("Aluno %d:\nNota: %d\nConceito: %c\n", i+1, matriz[i][0], matriz[i][1]);
      break;
    case 'C':
      printf("Aluno %d:\nNota: %d\nConceito: %c\n", i+1, matriz[i][0], matriz[i][1]);
      break;
    case 'B':
      printf("Aluno %d:\nNota: %d\nConceito: %c\n", i+1, matriz[i][0], matriz[i][1]);
      break;
    case 'A':
      printf("Aluno %d:\nNota: %d\nConceito: %c\n", i+1, matriz[i][0], matriz[i][1]);
      break;
    default:
      break;
    }
  }
  
}

int main() {
  int n = 0, i = 0;
  int linhas = 100;
  int colunas = 2;
  int input = 0;

  int **matriz = (int**)malloc(linhas * sizeof(int*));
  for (int i = 0; i < linhas; i++) {
    matriz[i] = (int*) malloc(colunas * sizeof(int));
  }

  while (input != 1) {
    printf("Digite a média do aluno %d: ", n + 1);
    scanf("%d", &matriz[i][0]);
    n++;
    i++;

    printf("Digite 1 para finalizar: ");
    scanf("%d", &input);

    if (input == 1) break;
  }

  getConceito(matriz, n);
  printConceito(matriz, n);

  for (int i = 0; i < linhas; i++) {
    free(matriz[i]);
  }
  free(matriz);

  return 0;
}
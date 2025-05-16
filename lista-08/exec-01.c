#include <stdio.h>
#include <stdlib.h>

#define NUM_MAX 6
int sorteio[NUM_MAX] = {6, 9, 22, 23, 48, 52};
int lost[NUM_MAX] = {4, 8, 15, 16, 23, 42};

void verificaAposta(FILE *arq, int *ganhadores, int *fansLost) {
  int *nums = (int *)malloc(NUM_MAX * sizeof(int));
  int numCertos = 0;
  int numCertosLost = 0;

  for (int j = 0; j < NUM_MAX; j++) {
    fscanf(arq, "%d", &nums[j]);
  }

  for (int i = 0; i < NUM_MAX; i++) {
    for (int k = 0; k < NUM_MAX; k++) {
      if (nums[i] == sorteio[k]) {
        numCertos++;
      }
      if (nums[i] == lost[k]) {
        numCertosLost++;
      }
    }
  }

  if (numCertos == 6) {
    (*ganhadores)++;
  }

  if (numCertosLost == 6) {
    (*fansLost)++;
  }

  free(nums);
}

int main() {
  FILE *arq;
  arq = fopen("cartelas.txt", "r");
  int *ganhadores = (int *)malloc(sizeof(int));
  *ganhadores = 0;
  int *fansLost = (int *)malloc(sizeof(int));
  *fansLost = 0;

  while (feof(arq) == 0) {
    verificaAposta(arq, ganhadores, fansLost);
  }

  fclose(arq);
  printf("Ganhadores: %d\n", *ganhadores);
  printf("Fans de Lost sorteados: %d\n", *fansLost);
  free(ganhadores);
  free(fansLost);
  return 0;
}
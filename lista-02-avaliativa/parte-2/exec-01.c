#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheVetor(int *v) {
  for (int i = 0; i < 20; i++) {
    v[i] = (int)1 + (drand48() * 10);
  }
}

void encontraNums(int *v, int input) {
  int alterou = 0;
  printf("\nPosições encontradas: \n");
  for (int i = 0; i < 20; i++) {
    if (v[i] == input) {
      printf("%d ", i);
      alterou = 1;
    }
  }
  if (!alterou) printf("Nenhum número encontrado.");
}

int main() {
  srand48(time(NULL));
  int *vetor = (int *)malloc(20 * sizeof(int));
  preencheVetor(vetor);
  int input;

  printf("Digite um número: ");
  scanf("%d", &input);

  for (int i = 0; i < 20; i++) {
    printf("%d ", vetor[i]);
  }

  encontraNums(vetor, input);
  free(vetor);
  return 0;
}

#include<stdio.h>
#include<stdlib.h>

void invertVetor(int *v, int *inv, int size) {

  for (int i = 0; i < size; i++)
  {
    inv[i] = v[size - 1 - i];
  }
  
}

int main() {
  int linhas;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &linhas);
  int *vetor = malloc(linhas * sizeof(int));
  int *invertido = malloc(linhas * sizeof(int));

  for (int i = 0; i < linhas; i++)
  {
    printf("Digite o número da posição %d: ", i);
    scanf("%d", &vetor[i]);
  }
  
  invertVetor(vetor, invertido, linhas);

  printf("Vetor invertido: \n");
  for (int i = 0; i < linhas; i++)
  {
    printf("%d, ", invertido[i]);
  }
  
  free(vetor);
  free(invertido);

  return 0;
}
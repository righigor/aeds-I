#include<stdio.h>
#include<stdlib.h>

int main() {
  int linhas = 3;

  int *vetor = (int*) malloc(linhas * sizeof(int*));

  printf("Digite 3 inteiros: ");
  scanf("%d %d %d", &vetor[0], &vetor[1], &vetor[2]);

  printf("NOME_VARIAVEL  |  ENDEREÇO  |  VALOR\n");
  for (int i = 0; i < linhas; i++)
  {
    printf("      %d        |   %p   |     %d   \n", i, (void *)&vetor[i], vetor[i]);
  }
  
  return 0;
}
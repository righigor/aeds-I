#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void capitalizeString(char *vetor, int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    vetor[i] = vetor[i] - 32;
  }

}

int main() {
  int size = 64;
  char *palavra = (char *)malloc(size * sizeof(char));

  printf("digite: ");
  fgets(palavra, size, stdin);

  capitalizeString(palavra, (strlen(palavra) - 1));

  printf("%s", palavra);
}
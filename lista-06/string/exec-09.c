#include <stdio.h>

void invert(char palavra[], char invertida[], int size) {
  for (int i = 0; i < size; i++) {
    invertida[i] = palavra[size - 1 - i];
  }
  invertida[size] = '\0';
}

int main() {
  char c;
  char palavra[128];
  char invertida[128];
  int index = 0;

  printf("Digite o texto (termine com '.'): ");
  while ((c = getc(stdin)) != '.' && index < 127) {
    if (c != '\n') {
      palavra[index++] = c;
    }
  }
  palavra[index] = '\0';

  invert(palavra, invertida, index);
  printf("Texto invertido: %s", invertida);

  return 0;
}
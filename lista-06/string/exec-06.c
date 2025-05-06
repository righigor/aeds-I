#include<stdio.h>

int len(char palavra[]) {
  int len;

  for (int i = 0; i < 128; i++)
  {
    if (palavra[i] == '\0') {
      len = i - 1;
      break;
    }
  }
  return len;
}

int main() {
  char linha[128];

  printf("digite um palavra: ");
  fgets(linha, 128, stdin);

  printf("O tamanho da palavra é: %d", len(linha));

  return 0;
}
#include <ctype.h>
#include <stdio.h>

void abrevia(char nome[]) {
  int i = 0;
  int j = 0;
  char iniciais[128];
  while (nome[i] != '\0') {
    if (i == 0 || nome[i - 1] == ' ') {
      iniciais[j++] = toupper(nome[i]);
      iniciais[j++] = '.';
    }
    i++;
  }
  iniciais[j] = '\0';

  printf("Nome abreviado %s\n", iniciais);
}

int main() {
  char nome[128];

  printf("Digite o nome completo: ");
  fgets(nome, 128, stdin);

  abrevia(nome);

  return 0;
}
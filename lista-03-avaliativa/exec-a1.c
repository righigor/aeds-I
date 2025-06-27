#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contaLinhas(char *arquivo) {
  FILE *arq = fopen(arquivo, "r");
  if (arq == NULL) {
    printf("Erro ao abrir o arquivo %s.\n", arquivo);
    return 0;
  }
  char linha[1024];
  int linhas = 0;
  while (fgets(linha, sizeof(linha), arq) != NULL) {
    if (linha[0] != '\n') {
      linhas++;
    }
  }
  fclose(arq);
  return linhas;
}

int main() {
  char name[100];
  int totalLinhas;

  printf("Digite o nome do arquivo: ");
  fgets(name, sizeof(name), stdin);
  name[strcspn(name, "\n")] = '\0';

  totalLinhas = contaLinhas(name);

  printf("O numero de linhas do arquivo é %d", totalLinhas);
  return 0;
}
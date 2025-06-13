#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINHA 256

void copiar_para_binario(const char *nome_entrada, const char *nome_saida) {
  FILE *entrada = fopen(nome_entrada, "r");
  if (!entrada) {
    printf("Erro ao abrir o arquivo de entrada: %s\n", nome_entrada);
    return;
  }

  FILE *saida = fopen(nome_saida, "wb");
  if (!saida) {
    printf("Erro ao criar o arquivo binário: %s\n", nome_saida);
    fclose(entrada);
    return;
  }

  char linha[MAX_LINHA];

  while (fgets(linha, sizeof(linha), entrada)) {

    linha[strcspn(linha, "\n")] = '\0';

    size_t tamanho = strlen(linha) + 1;
    fwrite(linha, sizeof(char), tamanho, saida);
  }

  fclose(entrada);
  fclose(saida);

  printf("Cópia para arquivo binário realizada com sucesso.\n");
}

int main() {
  char nome_entrada[100] = "iris.csv";
  char nome_saida[100] = "iris.bin";

  copiar_para_binario(nome_entrada, nome_saida);

  return 0;
}

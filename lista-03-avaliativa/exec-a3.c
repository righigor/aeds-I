#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_LINHA 256

void removeLine(char *str) { str[strcspn(str, "\n")] = '\0'; }

void separaEspecie(const char *nome_arquivo) {
  FILE *arquivo = fopen(nome_arquivo, "r");
  if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo de entrada.\n");
    return;
  }

  FILE *setosa = fopen("setosa.csv", "w");
  FILE *versicolor = fopen("versicolor.csv", "w");
  FILE *virginica = fopen("virginica.csv", "w");

  if (!setosa || !versicolor || !virginica) {
    printf("Erro ao criar os arquivos de saída.\n");
    fclose(arquivo);
    return;
  }

  char linha[TAM_LINHA];

  while (fgets(linha, sizeof(linha), arquivo)) {
    removeLine(linha);

    char linha_copia[TAM_LINHA];
    strcpy(linha_copia, linha);

    char *token = strtok(linha_copia, ",");
    char *especie = NULL;

    while (token != NULL) {
      especie = token;
      token = strtok(NULL, ",");
    }

    if (especie != NULL) {
      if (strcmp(especie, "setosa") == 0) {
        fprintf(setosa, "%s\n", linha);
      } else if (strcmp(especie, "versicolor") == 0) {
        fprintf(versicolor, "%s\n", linha);
      } else if (strcmp(especie, "virginica") == 0) {
        fprintf(virginica, "%s\n", linha);
      }
    }
  }

  fclose(arquivo);
  fclose(setosa);
  fclose(versicolor);
  fclose(virginica);

  printf("Dados separados com sucesso nos arquivos setosa.csv, versicolor.csv e virginica.csv.\n");
}

int main() {
  char nome[100];
  printf("Digite o nome do arquivo: ");
  fgets(nome, sizeof(nome), stdin);
  removeLine(nome);

  separaEspecie(nome);

  return 0;
}

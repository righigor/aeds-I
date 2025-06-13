#include <float.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINHA 256
#define MAX_DADOS 200

typedef struct {
  float comprimento_sepala;
  float largura_sepala;
  float comprimento_petala;
  float largura_petala;
} Amostra;

typedef struct {
  Amostra dados[MAX_DADOS];
  int quantidade;
} ListaAmostras;

void adicionar_amostra(ListaAmostras *lista, Amostra a) {
  if (lista->quantidade < MAX_DADOS) {
    lista->dados[lista->quantidade++] = a;
  }
}

void processar_linha(const char *linha, ListaAmostras *setosa, ListaAmostras *versicolor,
                     ListaAmostras *virginica) {
  char temp[MAX_LINHA];
  strcpy(temp, linha);

  char *token = strtok(temp, ",");
  float valores[4];
  int i = 0;

  while (token && i < 4) {
    valores[i++] = atof(token);
    token = strtok(NULL, ",");
  }

  if (!token || i < 4)
    return;

  Amostra amostra = {valores[0], valores[1], valores[2], valores[3]};

  if (strcmp(token, "Iris-setosa") == 0) {
    adicionar_amostra(setosa, amostra);
  } else if (strcmp(token, "Iris-versicolor") == 0) {
    adicionar_amostra(versicolor, amostra);
  } else if (strcmp(token, "Iris-virginica") == 0) {
    adicionar_amostra(virginica, amostra);
  }
}

void calcular_e_salvar_estatisticas(ListaAmostras *lista, const char *arquivo_saida) {
  float min[4] = {FLT_MAX, FLT_MAX, FLT_MAX, FLT_MAX};
  float max[4] = {FLT_MIN, FLT_MIN, FLT_MIN, FLT_MIN};
  float soma[4] = {0};

  for (int i = 0; i < lista->quantidade; i++) {
    float atributos[4] = {lista->dados[i].comprimento_sepala, lista->dados[i].largura_sepala,
                          lista->dados[i].comprimento_petala, lista->dados[i].largura_petala};

    for (int j = 0; j < 4; j++) {
      if (atributos[j] < min[j])
        min[j] = atributos[j];
      if (atributos[j] > max[j])
        max[j] = atributos[j];
      soma[j] += atributos[j];
    }
  }

  FILE *out = fopen(arquivo_saida, "w");
  if (!out) {
    printf("Erro ao criar o arquivo %s\n", arquivo_saida);
    return;
  }

  fprintf(out, "Atributo;Minimo;Maximo;Media\n");
  const char *nomes[] = {"Comprimento Sépala", "Largura Sépala", "Comprimento Pétala",
                         "Largura Pétala"};

  for (int j = 0; j < 4; j++) {
    fprintf(out, "%s;%.2f;%.2f;%.2f\n", nomes[j], min[j], max[j], soma[j] / lista->quantidade);
  }

  fclose(out);
}

void calcular_dados_estatisticos(const char *nome_arquivo) {
  FILE *fp = fopen(nome_arquivo, "r");
  if (!fp) {
    printf("Erro ao abrir o arquivo: %s\n", nome_arquivo);
    return;
  }

  ListaAmostras setosa = {0}, versicolor = {0}, virginica = {0};
  char linha[MAX_LINHA];

  while (fgets(linha, sizeof(linha), fp)) {
    linha[strcspn(linha, "\n")] = '\0'; // remove \n
    processar_linha(linha, &setosa, &versicolor, &virginica);
  }

  fclose(fp);

  calcular_e_salvar_estatisticas(&setosa, "setosa_dados.txt");
  calcular_e_salvar_estatisticas(&versicolor, "versicolor_dados.txt");
  calcular_e_salvar_estatisticas(&virginica, "virginica_dados.txt");

  printf("Estatísticas salvas com sucesso.\n");
}

int main() {
  char nome_arquivo[100];
  printf("Digite o nome do arquivo: ");
  fgets(nome_arquivo, sizeof(nome_arquivo), stdin);
  nome_arquivo[strcspn(nome_arquivo, "\n")] = '\0';

  calcular_dados_estatisticos(nome_arquivo);

  return 0;
}

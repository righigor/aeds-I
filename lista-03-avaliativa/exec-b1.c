#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QTD_PESSOAS 6
#define TAM_NOME 100

typedef struct {
  char nome[TAM_NOME];
  int dia;
  int mes;
  int ano;
} Pessoa;

int comparar_datas(Pessoa a, Pessoa b) {
  if (a.ano != b.ano)
    return a.ano - b.ano;
  if (a.mes != b.mes)
    return a.mes - b.mes;
  return a.dia - b.dia;
}

void salvar_arquivo(const char *nome_arquivo, const char *mais_nova, const char *mais_velha) {
  FILE *arquivo = fopen(nome_arquivo, "w");
  if (!arquivo) {
    printf("Erro ao criar o arquivo.\n");
    return;
  }
  fprintf(arquivo, "Pessoa mais nova: %s\n", mais_nova);
  fprintf(arquivo, "Pessoa mais velha: %s\n", mais_velha);
  fclose(arquivo);
  printf("Dados salvos no arquivo com sucesso.\n");
}

void visualizar_arquivo(const char *nome_arquivo) {
  FILE *arquivo = fopen(nome_arquivo, "r");
  if (!arquivo) {
    printf("Erro ao abrir o arquivo.\n");
    return;
  }

  char linha[200];
  printf("\nConteúdo do arquivo:\n");
  while (fgets(linha, sizeof(linha), arquivo)) {
    printf("%s", linha);
  }

  fclose(arquivo);
}

int main() {
  Pessoa pessoas[QTD_PESSOAS];
  char nome_arquivo[] = "idade_pessoas.txt";

  printf("Digite os dados de %d pessoas:\n", QTD_PESSOAS);
  for (int i = 0; i < QTD_PESSOAS; i++) {
    printf("\nPessoa %d:\n", i + 1);
    printf("Nome: ");
    getchar();
    fgets(pessoas[i].nome, TAM_NOME, stdin);
    pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0';

    printf("Data de nascimento (dd mm aaaa): ");
    scanf("%d %d %d", &pessoas[i].dia, &pessoas[i].mes, &pessoas[i].ano);
  }

  Pessoa mais_nova = pessoas[0];
  Pessoa mais_velha = pessoas[0];

  for (int i = 1; i < QTD_PESSOAS; i++) {
    if (comparar_datas(pessoas[i], mais_nova) > 0) {
      mais_nova = pessoas[i];
    }
    if (comparar_datas(pessoas[i], mais_velha) < 0) {
      mais_velha = pessoas[i];
    }
  }

  salvar_arquivo(nome_arquivo, mais_nova.nome, mais_velha.nome);

  char opcao;
  printf("\nDeseja visualizar o conteúdo do arquivo? (s/n): ");
  scanf(" %c", &opcao);

  if (opcao == 's' || opcao == 'S') {
    visualizar_arquivo(nome_arquivo);
  }

  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QTD_CARROS 5
#define TAM 100

typedef struct {
  char modelo[TAM];
  char fabricante[TAM];
  float autonomia;
  float capacidade_tanque;
} Carro;

void salvar_em_binario(Carro carros[], int n, const char *nome_arquivo) {
  FILE *arquivo = fopen(nome_arquivo, "wb");
  if (!arquivo) {
    printf("Erro ao criar o arquivo binário.\n");
    return;
  }
  fwrite(carros, sizeof(Carro), n, arquivo);
  fclose(arquivo);
  printf("Carros salvos com sucesso em %s.\n", nome_arquivo);
}

void visualizar_binario(const char *nome_arquivo) {
  FILE *arquivo = fopen(nome_arquivo, "rb");
  if (!arquivo) {
    printf("Erro ao abrir o arquivo binário.\n");
    return;
  }

  Carro carro;
  printf("\nCarros armazenados no arquivo binário:\n");
  while (fread(&carro, sizeof(Carro), 1, arquivo)) {
    float rendimento = carro.autonomia / carro.capacidade_tanque;
    printf("Modelo: %s\nFabricante: %s\nAutonomia: %.2f km\nCapacidade do tanque: %.2f "
           "L\nRendimento: %.2f km/L\n\n",
           carro.modelo, carro.fabricante, carro.autonomia, carro.capacidade_tanque, rendimento);
  }

  fclose(arquivo);
}

int main() {
  Carro carros[QTD_CARROS];
  char nome_arquivo[] = "carros.bin";

  printf("Digite os dados de %d carros:\n", QTD_CARROS);
  for (int i = 0; i < QTD_CARROS; i++) {
    printf("\nCarro %d:\n", i + 1);
    printf("Modelo: ");
    getchar();
    fgets(carros[i].modelo, TAM, stdin);
    carros[i].modelo[strcspn(carros[i].modelo, "\n")] = '\0';

    printf("Fabricante: ");
    fgets(carros[i].fabricante, TAM, stdin);
    carros[i].fabricante[strcspn(carros[i].fabricante, "\n")] = '\0';

    printf("Autonomia (km): ");
    scanf("%f", &carros[i].autonomia);

    printf("Capacidade do tanque (L): ");
    scanf("%f", &carros[i].capacidade_tanque);
  }

  int melhor_idx = 0;
  float melhor_rendimento = carros[0].autonomia / carros[0].capacidade_tanque;

  for (int i = 1; i < QTD_CARROS; i++) {
    float rendimento = carros[i].autonomia / carros[i].capacidade_tanque;
    if (rendimento > melhor_rendimento) {
      melhor_rendimento = rendimento;
      melhor_idx = i;
    }
  }

  printf("\nCarro com melhor km/L:\n");
  printf("Modelo: %s\nFabricante: %s\nRendimento: %.2f km/L\n", carros[melhor_idx].modelo,
         carros[melhor_idx].fabricante, melhor_rendimento);

  salvar_em_binario(carros, QTD_CARROS, nome_arquivo);

  char opcao;
  printf("\nDeseja visualizar os dados do arquivo? (s/n): ");
  scanf(" %c", &opcao);

  if (opcao == 's' || opcao == 'S') {
    visualizar_binario(nome_arquivo);
  }

  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_LINHA 256
#define MAX_ESPECIES 151

typedef struct {
    char especie[100];
    int contador;
} Especie;

void remover_newline(char *str) {
    str[strcspn(str, "\n")] = '\0';
}

void contar_especies(const char *nome_arquivo) {
    FILE *arquivo = fopen(nome_arquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    char linha[TAM_LINHA];
    Especie especies[MAX_ESPECIES];
    int total_especies = 0;

    while (fgets(linha, sizeof(linha), arquivo)) {
        remover_newline(linha);

        if (strlen(linha) == 0) continue;

        char *token = strtok(linha, ",");
        for (int i = 0; i < 3; i++) {
            token = strtok(NULL, ",");
        }

        char *especie = strtok(NULL, ",");

        if (especie == NULL) continue;

        int encontrada = 0;
        for (int i = 0; i < total_especies; i++) {
            if (strcmp(especies[i].especie, especie) == 0) {
                especies[i].contador++;
                encontrada = 1;
                break;
            }
        }

        if (!encontrada && total_especies < MAX_ESPECIES) {
            strcpy(especies[total_especies].especie, especie);
            especies[total_especies].contador = 1;
            total_especies++;
        }
    }

    fclose(arquivo);

    printf("Contagem de amostras por espécie:\n");
    for (int i = 0; i < total_especies; i++) {
        printf("%s: %d\n", especies[i].especie, especies[i].contador);
    }
}

int main() {
    char nome_arquivo[100];

    printf("Digite o nome do arquivo: ");
    fgets(nome_arquivo, sizeof(nome_arquivo), stdin);
    remover_newline(nome_arquivo);

    contar_especies(nome_arquivo);

    return 0;
}

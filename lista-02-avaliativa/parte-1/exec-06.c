#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TEXTO 168
#define MAX_PALAVRAS 100

struct PalavraRepetida {
    char palavra[50];
    int vezes;
};

void contaPalavras(char *texto) {
    struct PalavraRepetida repetidas[MAX_PALAVRAS];
    int total = 0;
    int repeticoesTotais = 0;

    char *token = strtok(texto, " \n");
    while (token != NULL) {
        int encontrada = 0;

        for (int i = 0; i < total; i++) {
            if (strcmp(repetidas[i].palavra, token) == 0) {
                repetidas[i].vezes++;
                encontrada = 1;
                break;
            }
        }

        if (!encontrada) {
            strcpy(repetidas[total].palavra, token);
            repetidas[total].vezes = 1;
            total++;
        }

        token = strtok(NULL, " \n");
    }

    printf("\nPalavras repetidas:\n");
    for (int i = 0; i < total; i++) {
        if (repetidas[i].vezes > 1) {
            printf("%s: %d vezes\n", repetidas[i].palavra, repetidas[i].vezes);
            repeticoesTotais += repetidas[i].vezes;
        }
    }
    printf("Total de palavras repetidas: %d\n", repeticoesTotais);
}

int main() {
    char texto[MAX_TEXTO];

    printf("Digite o texto: ");
    fgets(texto, MAX_TEXTO, stdin);

    contaPalavras(texto);

    return 0;
}

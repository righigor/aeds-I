#include<stdio.h>
#include<stdlib.h>

void preencheNotas(int tam, int vetor[]) {
    for (int i = 0; i < tam; i++)
    {
        printf("Digite uma nota: ");
        scanf("%d", &vetor[i]);
    }
}

void calculaMedia(int tam, int vetor[]) {
    int soma = 0, aprovados;
    float media;

    for (int i = 0; i < tam; i++)
    {
        soma += vetor[i];
    }
    
    media = soma / tam;
    for (int i = 0; i < tam; i++)
    {
        printf("%d\n", vetor[i]);
        if(vetor[i] > media) {

            aprovados++;
        }
    }
    
    printf("A media da sala foi: %f\n", media);
    printf("O numero de alunos aprovados foi: %d", aprovados);
}

int main() {
    int size = 3;
    int *v = (int*)malloc(size * sizeof(int));

    preencheNotas(size, v);
    calculaMedia(size, v);

    free(v);
    return 0;
}
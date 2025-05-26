#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void printaVetor(int *v, int size) {
    if (size == 1) {
        printf("%d\n", v[0]);
        return;
    }
    printf("%d ", v[size - 1]);
    printaVetor(v, size - 1);
}

int getMenor(int *v, int size) {
    if (size == 1) {
        return v[0];
    }

    int menor = getMenor(v, size - 1);
    if (v[size - 1] < menor) {
        return v[size - 1];
    }
    return menor;
}

int main() {
    srand(time(NULL));
    int size = 15;
    int *vetor = (int*)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
    {
        vetor[i] = (rand() % 30) + 1;
    }
    printaVetor(vetor, size);
    int menor = getMenor(vetor, size);

    printf("O menor numero: %d", menor);
    return 0;
}
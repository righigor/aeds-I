#include<stdio.h>
#include<stdlib.h>

float soma(int *v, int size){
    if (size == 1) {
        return v[0];
    }

    return v[size - 1] + soma(v, size - 1);
}

float calculaMedia(int *v, int size) {
    return soma(v, size) / size;
}

int main() {
    int size = 5;
    int *vetor = (int*)malloc(size * sizeof(int));
    int res;
    for (int i = 0; i <= size; i++) {
        vetor[i] = i + 1;
    }

    res = calculaMedia(vetor, size);
    printf("o resultado é: %d", res);
    return 0;
}
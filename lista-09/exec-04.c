#include<stdlib.h>
#include<stdio.h>

int somaNums(int *v, int size) {
    if (size == 1) {
        return v[0];
    }
    return v[size - 1] + somaNums(v, size - 1);
}

int main() {
    int size = 5;
    int *vetor = (int*)malloc(size * sizeof(int));
    int res;
    for (int i = 0; i <= size; i++) {
        vetor[i] = i + 1;
    }

    res = somaNums(vetor, size);
    printf("o resultado é: %d", res);
    return 0;
}
#include<stdio.h>

int maior3(int n1, int n2, int n3) {
    int maior;
    maior = n1 > n2 ? n1 : n2;
    maior = maior > n3 ? maior : n3;
    return maior;
}

int main() {
    int n1, n2, n3, maior;

    printf("Digite três números: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    maior = maior3(n1, n2, n3);

    printf("O maior número é o: %d", maior);
}
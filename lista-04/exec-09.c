#include<stdio.h>

double fatorial(int n) {
    double fat = 1;
    int n1 = n;

    for (int i = 1; i < n ; i++)
    {
        fat *= n1;
        n1--;
    }
    return fat;
}

int main() {
    int n;

    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &n);

    printf("O fatorial de %d é: %.0f", n, fatorial(n));
}
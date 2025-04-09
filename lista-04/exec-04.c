#include<stdio.h>

int ehPar(int n) {
    if (n % 2 == 0) {
        return 1;
    }
    return 0;
}

int main() {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);

    printf("%d", ehPar(n));
}
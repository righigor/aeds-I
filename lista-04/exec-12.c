#include<stdio.h>

int numeroDivisores(int n) {
    int num;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            num++;
        }
    }
    return num;
}

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("%d", numeroDivisores(n));
}
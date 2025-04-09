#include<stdio.h>

int enesimoFibonacci(int n) {
    int fib = 0, fib1 = 1, fib2;

    for (int i = 2; i < n; i++)
    {
        fib2 = fib + fib1;
        fib = fib1;
        fib1 = fib2;
    }
    return fib2;
}

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("O %dº número da sequencia de fibonacci é: %d", n, enesimoFibonacci(n));
}
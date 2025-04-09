#include<stdio.h>

int main() {

    int n, fib = 0, fib1 = 1, fib2 = 1;

    printf("digite um numero: ");
    scanf("%d", &n);

    while (n >= fib2) {
        printf("%d\n", fib2);
        fib2 = fib + fib1;
        fib = fib1;
        fib1 = fib2;
    }
}

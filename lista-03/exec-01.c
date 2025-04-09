#include<stdio.h>

int main() {
    int n, soma;

    do {
        printf("digite um numero: ");
        scanf("%d", &n);

        if (n>0) {
            soma += n;
        }

        printf("soma total: %d\n", soma);
    } while(n > 0);
}

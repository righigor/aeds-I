#include<stdio.h>

int main() {

    int n, digito;
    do {
        printf("digite um numero: ");
        scanf("%d", &n);

        while (n>0) {
            digito = n % 10;
            printf("%d", digito);
            n /= 10;
        }



    } while (n > 0);
}

#include<stdio.h>

int main() {

    int n;
    printf("digite um numero: ");
    scanf("%d", &n);
    while (n) {
        printf("digite um numero: ");
        scanf("%d", &n);
        if (n % 2 != 0) {
            printf("%d é primo\n");
        } else {
            printf("%d não é primo");
        }
    }
}

#include<stdio.h>

int main() {
    int n, i = 1;
    printf("digite um numero: ");
    scanf("%d", &n);

    while (i <= 10) {
        printf("%d * %d = %d\n", n, i, n*i);
        i++;
    }
}

#include<stdio.h>

int main() {
    int n;

    printf("digite um numero: ");
    scanf("%d", &n);

    while(n >= 0) {
        printf("%d\n", n);
        n--;
    }
}

#include<stdio.h>

int main() {
    int n1, n2;
    printf("digite dois numeros: ");
    scanf("%d%d", &n1, &n2);

    if (n1>n2) {
        printf("o numero %d é maior que %d", n1, n2);
        return 0;
    }
    printf("o numero %d é maior que %d", n2, n1);
}

#include<stdio.h>

int somaNumerosDiv3ou5(int n) {
    int soma = 0;
    for (int i = 0; i <= n; i++)
    {
        if ((i % 3 == 0 && i % 5 != 0) || (i % 3 != 0 && i % 5 == 0)) {
            soma += i;
            printf("%d \n", i);
        }
    }
    return soma;
}

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("%d", somaNumerosDiv3ou5(n));
}
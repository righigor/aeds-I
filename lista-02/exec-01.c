#include<stdio.h>

int main() {

    int num;
    printf("digite um numero inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("o numero � par");
        return 0;
    }
    printf("o numero � impar");
}

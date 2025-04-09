#include<stdio.h>

int ehDivisivelPor3ou5(int n) {
    if ((n % 3 == 0 && n % 5 != 0) || (n % 3 != 0 && n % 5 == 0)) {
        return 1;
    }
    return 0;
}

int main() {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);

    printf("%d", ehDivisivelPor3ou5(n));
}
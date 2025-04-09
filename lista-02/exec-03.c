#include<stdio.h>

int main() {
    int idade;
    printf("digite sua idade: ");
    scanf("%d", &idade);

    if (0 < idade && idade < 13) {
        printf("Criança");
        return 0;
    }
    if (12 < idade && idade < 18) {
        printf("Adolescente");
        return 0;
    }
    if (18 < idade && idade < 60) {
        printf("Adulto");
        return 0;
    }
    printf("Idoso");
}

#include<stdio.h>

float pesoIdeal(float h, char sexo) {
    if (sexo == 'M') {
        return (72.7 * h) - 58;
    }

    return (62.1 * h) - 44.7;
}

int main() {
    float h;
    char s;

    printf("Digite sua altura, em metros: ");
    scanf("%f", &h);
    printf("Digite seu sexo(M/F): ");
    scanf(" %c", &s);

    printf("%.2f", pesoIdeal(h, s));
}
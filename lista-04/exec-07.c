#include<stdio.h>

float pesoIdeal(float h, char sexo) {
    if (sexo == 'M') {
        return (72.7 * h) - 58;
    }

    return (62.1 * h) - 44.7;
}

int main() {
    float h, peso, pi;
    char s;

    printf("Digite sua altura, em metros: ");
    scanf("%f", &h);
    printf("Digite seu sexo(M/F): ");
    scanf(" %c", &s);
    printf("Digite seu peso: ");
    scanf("%f", &peso);

    pi = pesoIdeal(h, s);
    printf("Seu peso ideal é: %.2f\n", pi);
    pi = pi > peso ? pi - peso : peso - pi;
    printf("Para alcançar seu peso ideal falta: %.2f", pi);
}
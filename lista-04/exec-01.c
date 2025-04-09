#include<stdio.h>

float paraMetrosPorSegundo(float v) {
    return v/3.6;
}

int main() {
    float km, ms;
    printf("Digite uma velocidade em km/h: ");
    scanf("%f", &km);

    ms = paraMetrosPorSegundo(km);
    printf("A velocidade convertida para m/s é: %.2f", ms);
    return 0;
}

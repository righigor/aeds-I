#include<stdio.h>
#include<math.h>

const float PI = 3.141592;

float areaCirculo(float raio) {
    return PI * pow(raio, 2);
}

int main() {
    float raio, area;

    printf("Digite o raio da circunferencia: ");
    scanf("%f", &raio);

    area = areaCirculo(raio);

    printf("A area do circulo é: %.2f", area);
}
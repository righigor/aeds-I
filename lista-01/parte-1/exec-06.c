#include<stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2;
    printf("Digite o primeiro ponto cartesiano: ");
    scanf("%f %f", &x1, &y1);
    printf("Digite o segundo ponto cartesiano: ");
    scanf("%f %f", &x2, &y2);
    float pow1, pow2, soma, raiz;
    pow1 = pow((x2 - x1), 2);
    pow2 = pow((y2 - y1), 2);
    soma = pow1 + pow2;
    raiz = sqrt(soma);
    printf("A distancia é: %f", raiz);
}
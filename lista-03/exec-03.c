#include<stdio.h>

int main() {
    float n1, n2, media;

    do {
        printf("digite o num1: ");
        scanf("%f", &n1);
        if (n1 == 0) {
            return 0;
        }
        printf("digite o num2: ");
        scanf("%f", &n2);

        if (n2 == 0) {
            return 0;
        }

        media = (n1 + n2)/2;
        printf("a media é: %f", media);
    } while (n1 == 0 || n2 == 0);
}

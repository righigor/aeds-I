#include<stdio.h>
#include<math.h>

float calculaMedia(int x, int y, int z, int operacao) {
    switch (operacao)
    {
    case 1:
        return cbrt(x*y*z);
        break;
    case 2:
        return ((x) + (2*y) + (3*z))/6;
    case 3:
        return 3 / ((1/x) + (1/y) + (1/z));
    case 4:
        return (x + y + z) / 3;
    default:
        printf("Operação invalida!");
        break;
    }
}


int main() {
    int x, y, z, op;

    printf("Digite tres numeros e a operacao: ");
    scanf("%d %d %d %d", &x, &y, &z, &op);

    printf("%.2f", calculaMedia(x, y, z, op));
}

#include<stdio.h>

int meuPow(int x, int y) {
    if (y == 1) {
        return x;
    }
    return x * meuPow(x, y - 1);
}

int main() {
    int x = 2, y = 4, res;
    res = meuPow(x, y);

    printf("a potencia de %d elevado a %d é: %d", x, y, res);
    return 0;
}
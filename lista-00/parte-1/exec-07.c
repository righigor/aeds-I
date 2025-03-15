#include<stdio.h>

int main() {
    int a, b, c, d = 1; // declara quarto variaveis e d = 1
    a = -2; // seta a como -2
    b = a * a; // seta b como o quadrado de a
    c = d++; // seta c como a soma d + d = 2
    d = c++ + 5; // seta d com c + c + 5 = 9
    d = ++d + 5; // d = 9 + 9 + 5 =  23
    printf("%d %d %d %d", a, b, c, d);
}